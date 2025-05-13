# 🃏 Super Trunfo de Cidades (em C)

Este projeto implementa uma versão simplificada do jogo **Super Trunfo**, onde duas cartas representando cidades brasileiras são comparadas com base em diversos atributos como população, área, PIB, entre outros.

## 📌 Objetivo

Permitir ao usuário escolher **dois atributos** para comparar entre duas cidades e determinar qual delas vence com base nas pontuações atribuídas a cada atributo.

## 🚀 Funcionalidades

* Cálculo automático de:

  * Densidade populacional
  * PIB per capita
  * Super Pontuação (SP) = média de todos os atributos
  * Soma total de atributos
* Comparação de **dois atributos diferentes**, com validação de entrada
* Determinação automática da cidade vencedora com base nos pontos
* Exibição detalhada das duas cartas com seus dados

## 📄 Atributos disponíveis

1. População
2. Área
3. Número de Pontos Turísticos
4. Densidade Populacional
5. PIB
6. PIB per capita
7. Super Pontuação (SP)
8. Soma total

## 🏗️ Estrutura do Código

* As cartas são pré-definidas com informações das cidades de **Americana** e **Sorocaba**, ambas do estado de SP.
* O usuário escolhe dois atributos diferentes para comparar.
* O programa compara os valores desses atributos entre as duas cidades e atribui pontos.
* Ao final, a carta com mais pontos é declarada como vencedora.

## 🧮 Exemplo de Saída

```
Carta 01
Estado: SP
Nome da Cidade: Americana
Populacao: 237240
Area: 133.91
...
Carta 02
Estado: SP
Nome da Cidade: Sorocaba
Populacao: 757459
Area: 449.87
...
Selecione o primeiro atributo para comparar:
1. Populacao
2. Area
...

Digite a opcao desejada: 1

Seleciona o segundo atributo para comparar:
2. Area
...

Digite a opcao desejada: 5

Resultado Final:
A carta 2 ganhou!
Cidade: Sorocaba
...
```

## 🧠 Aprendizados

Este projeto reforça conceitos como:

* Declaração e manipulação de variáveis
* Estruturas condicionais (`if`, `switch`)
* Entrada e saída de dados (`scanf`, `printf`)
* Validação de entradas
* Cálculos com `float` e `int` em C

## 💻 Requisitos

* Compilador C (ex: `gcc`)
* Terminal de comando

## ▶️ Como compilar e executar

```bash
gcc super_trunfo_cidades.c -o super_trunfo
./super_trunfo
```

---
