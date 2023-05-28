#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count; // denota o número de palavras em uma sentença
};

struct paragraph {
    struct sentence* data;
    int sentence_count; // denota o número de sentenças em um parágrafo
};

struct document {
    struct paragraph* data;
    int paragraph_count; // denota o número de parágrafos em um documento
};

// Função para obter o documento a partir do texto fornecido
struct document get_document(char* text) {
    // Implemente sua lógica aqui
}

// Função para obter a k-ésima palavra na m-ésima sentença do n-ésimo parágrafo
struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    // Implemente sua lógica aqui
}

// Função para obter a k-ésima sentença no m-ésimo parágrafo
struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) {
    // Implemente sua lógica aqui
}

// Função para obter o k-ésimo parágrafo
struct paragraph kth_paragraph(struct document Doc, int k) {
    // Implemente sua lógica aqui
}

// Função para imprimir uma palavra
void print_word(struct word w) {
    printf("%s", w.data);
}

// Função para imprimir uma sentença
void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

// Função para imprimir um parágrafo
void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

// Função para imprimir o documento
void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

// Função para obter o texto de entrada
char* get_input_text() {    
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main() 
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }     
}
