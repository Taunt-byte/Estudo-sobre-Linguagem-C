# Dijkstra: Shortest Reach 2

Status: Não Resolvido

# LINK

https://www.hackerrank.com/challenges/dijkstrashortreach/problem?isFullScreen=true

# Questão

Dado um grafo não direcionado e um nó de partida, determine os comprimentos dos caminhos mais curtos do nó de partida para todos os outros nós no grafo. 

Se um nó for inacessível, sua distância será -1. Os nós serão numerados consecutivamente de a , e as arestas terão distâncias ou comprimentos variáveis.

Por exemplo, considere o seguinte grafo com 5 nós:


| Início | Fim | Peso |
| ----- | --- | ------ |
| 1     | 2   | 5      |
| 2     | 3   | 6      |
| 3     | 4   | 2      |
| 1     | 3   | 15     |


<img src="https://s3.amazonaws.com/hr-assets/0/1535120384-c96f8f586f-djikstraexample.png">

Começando no nó , o caminho mais curto para é direto e tem distância . Indo de para , existem dois caminhos: um com distância ou um com distância . Escolhemos o caminho mais curto, . De para , escolhemos o caminho mais curto através de e estendemos: para uma distância de Não há rota para o nó , então a distância é .

As distâncias para todos os nós em ordem crescente do número do nó, excluindo o nó de partida, são 5 11 13 -1.

## Descrição da função

Complete a função shortestReach no editor abaixo. Ela deve retornar uma matriz de inteiros que representam a distância mais curta para cada nó a partir do nó inicial em ordem crescente do número do nó.

shortestReach tem os seguintes parâmetros:

+ n: o número de nós no grafo

+ edges: uma matriz 2D de inteiros onde cada 

consiste em três inteiros que representam os nós de início e fim de uma aresta, seguidos pelo seu comprimento

+ s: o número do nó de partida

## Restrições

Se houver arestas entre o mesmo par de nós com pesos diferentes, elas devem ser consideradas como estão, como múltiplas arestas.

## Formato de saída

Para cada um dos
casos de teste, imprima uma única linha contendo inteiros separados por espaço, indicando a distância mais curta para os nós a partir da posição de partida em ordem crescente de seus rótulos, excluindo

Exemplo de entrada

1
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1

Exemplo de saída

24 3 15 