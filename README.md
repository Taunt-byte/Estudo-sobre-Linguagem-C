# A linguagem C e seus conceitos

Esse repositorio tem todos os meus estudos sobre a linguagem em C assim como lista de exercicios , aplicações e estruturas da linguagem como Switch por exemplo.

![Logo](https://raw.githubusercontent.com/github/explore/f3e22f0dca2be955676bc70d6214b95b13354ee8/topics/c/c.png)


## Variáveis de Ambiente

## Windows:

Você pode instalar o compilador GCC para Windows usando a ferramenta MinGW (Minimalist GNU for Windows). MinGW fornece uma implementação do GCC para compilar programas em C para o Windows. Você pode baixar MinGW a partir do seguinte link: https://osdn.net/projects/mingw/releases/

## macOS:

O GCC já está incluído no macOS, então você não precisa instalar nada adicional. Você pode usar o terminal do macOS para compilar e executar seus programas em C.

## Linux:

O GCC já está incluído em muitas distribuições Linux, então você pode instalá-lo usando o gerenciador de pacotes da sua distribuição. Por exemplo, no Ubuntu, você pode instalá-lo executando o seguinte comando no terminal:

    sudo apt-get install gcc

Depois de instalar o GCC, você pode criar um programa em C, salvar o arquivo com a extensão ".c" e compilar o programa usando o seguinte comando no terminal:

    gcc programa.c -o programa

Este comando compila o arquivo "programa.c" e gera um executável chamado "programa". Você pode executar o programa usando o seguinte comando:

    ./programa


## Rodando localmente

Clone o projeto

```bash
  git clone git@github.com:Taunt-byte/Estudo-sobre-Linguagem-C.git
```

Entre no diretório do projeto

```bash
  cd Estudo-sobre-Linguagem-C
```

Escolha uma pasta de exercicios ou de conceitos e execute o codigo em C de acordo com seu sistema operacional.


# Exercicios

Neste topico deixarei os exercicios feitos em cada lista de exercicios dos meus estudos e de minha graduação no Centro Universitario Salesiano de São Paulo.


## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)

## FAQ

### Questão 1

O que é a linguagem C?

A linguagem C é uma linguagem de programação de nível médio, criada originalmente para desenvolvimento de sistemas operacionais. É uma linguagem estruturada e de baixo nível, permitindo um controle preciso sobre o hardware e recursos do sistema.

### Questão 2

Qual é a sintaxe básica da linguagem C? 

A sintaxe básica da linguagem C é composta de variáveis, operadores, condicionais, laços e funções. O código em C é organizado em funções, que são chamadas pelo programa principal. O código é compilado para gerar um executável que pode ser executado diretamente no sistema operacional.

### Questão 3

Como a memória é gerenciada em C?

A memória em C é dividida em duas partes: a pilha e o heap. A pilha é usada para armazenar variáveis locais, enquanto o heap é usado para armazenar dados dinamicamente alocados. O programador deve gerenciar cuidadosamente a memória alocando e liberando-a adequadamente.

### Questão 4

Quais são os tipos de dados em C?

Os tipos de dados básicos em C incluem inteiros, caracteres, ponto flutuante e ponteiros. O programador pode definir novos tipos de dados usando a palavra-chave typedef.

### Questão 5

Como as estruturas de dados são definidas em C?
    
As estruturas de dados em C são definidas usando a palavra-chave struct. As estruturas de dados podem ser usadas para agrupar variáveis de diferentes tipos de dados em um único objeto.

### Questão 6

O que é um ponteiro em C?

Um ponteiro em C é uma variável que armazena um endereço de memória.Os ponteiros são usados para manipular dados dinamicamente alocados no heap, passar argumentos para funções e acessar dados em estruturas de dados.

### Questão 7

Como as strings são manipuladas em C?

As strings em C são tratadas como arrays de caracteres terminados com o caractere nulo ('\0'). O programador pode usar uma variedade de funções da biblioteca padrão para manipular strings, incluindo funções para concatenar, comparar e copiar strings.

### Questão 8

Quais são as principais bibliotecas em C?
    
As bibliotecas padrão mais importantes em C incluem a biblioteca de entrada/saída (stdio.h), a biblioteca matemática (math.h) e a biblioteca de manipulação de strings (string.h). Existem também bibliotecas adicionais para manipulação de arquivos, redes, gráficos e outras funcionalidades.