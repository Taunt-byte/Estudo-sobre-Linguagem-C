#include<stdio.h>
int main(){
    char c[10],r;
    int i;
    char continuar;
    while(1){
        printf("Digite o Ano de Nascimento: ");
        gets(c);
        for(i=0;i<10;i++)
        {
            if(c[i]>47 && c[i] <58)
                r+=(c[i]-48);
        }  
        r=(r%5);    
        switch (r)
           {
                case 0:
                   printf("Timido\n");
                   break;
                case 1:
                   printf("Sonhador\n");
                   break;
                case 2:
                   printf("Paquerador\n");
                   break;
                case 3:
                   printf("Atraente\n");
                   break;
                case 4:
                   printf("Irresistivel\n");
                   break;
           }
        printf("\nDeseja Fazer Nova Consulta ? S/N\n");
        scanf("%c",&continuar);
        if(continuar == 'n' || continuar == 'N')
            break; //sai do loop
        else
            getchar(); //para não ecoar
    }
        return 0;
}