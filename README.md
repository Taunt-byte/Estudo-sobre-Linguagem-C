<p align="center">
  <a href="https://unform.dev">
    <img src="img/Logo.png" height="150" width="175" alt="Unform" />
  </a>
</p>
<h1 align="center">A linguagem C e seus conceitos</h1> 

<p align="center">Meus estudos sobre a linguagem C e seus principais conceitos e historia.</p>

Tabela de conteúdos
=================
<!--ts-->

  * [Sobre](#Sobre)
  * [Historia](#Historia)
    * [Biblioteca padrão do C](#Biblioteca-padrão-do-C)
  * [Instalação](#Instalação)
  * [Conceitos](#conceitos)
  * [Exercicios](#exercicios)

<!--te-->

# Sobre

Esse repositorio tem todos os meus estudos sobre a linguagem em C assim como lista de exercicios , aplicações e estruturas da linguagem como Switch por exemplo.

# Historia

 Assim como muitas linguagens atuais a linguagem em C foi desenvolvida a partie de uma outra linguagem anterior a ela.
 De inicio a linguagem em C se torno amplamente conhecida como linguagem de desenvolvimento de SO (Sistemas Operacionais) Unix.
 Hoje grande parte dos SO são escritos em C.
 A rapida espansão do C em varios SO e tipos diferentes de computadores fez com que surgi se  variantes da propria linguagem que apesar de similares eram incompativeis o que levou a um problema grave de compartibilidade o que foi resolvido mais tarde com a bibliteca padrão do C.

## Biblioteca padrão do C

 A biblioteca padrão do C foi criada para se resolver grande parte dos problemas de portabilidade que havia na epoca.
 Hoje em dia para se tornar um bom dev em C a dois requisitos a se seguir que são aprender a linguagem e as funções da biblioteca padrão.

# Instalação

## Instalação da Linguagem 

A instalação da linguagem C depende do sistema operacional que você está usando. 

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


## Instalação do Repositorio


# Conceitos

## Memoria

## Aritmetica

# Exercicios

Neste topico deixarei os exercicios feitos em cada lista de exercicios dos meus estudos e de minha graduação no Centro Universitario Salesiano de São Paulo.

## Lista sequenciais simples.

1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.

2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

3. Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.

4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.

a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
C=(f-32.0) * (5.0/9.0).

b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
C=(f-32)*(5/9).

5. Fazer um programa em "C" que solicite 2 números e informe:

a) A soma dos números;

b) O produto do primeiro número pelo quadrado do segundo;

c) O quadrado do primeiro número;

d) A raiz quadrada da soma dos quadrados;

e) O seno da diferença do primeiro número pelo segundo;

f) O módulo do primeiro número.