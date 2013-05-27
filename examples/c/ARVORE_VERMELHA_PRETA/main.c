/*
+--------------------------------------------------------------------------------------+
|Federal University Of Juiz de Fora - UFJF - Minas Gerais - Brazil                     |
|Institute for Exact Sciences - ICE                                                    |
|Computer Science Departament - DCC                                                    |
|Project: Visual library to support Data Structures classes                            |
|Professor:Jairo Francisco de Souza    jairo.souza@ufjf.edu.br                         |
|Students......:Thiago Moratori Peixoto     thiagomoratori@gmail.com	               |
|               Sandro Athaide Coelho       sandroacoelho@gmail.com                    |
|               Ana Carolina Gon�alves Fideles acarolinafg@gmail.com                   |
|Created in......:Set/23/2011                                                          |
|Objective:                                                                            |
|Este � um programa de exemplo de implementa��o da �rvore red-black em C ANSI usando   |
|a biblioteca gr�fica criada para a apresenta��o da estrutura na tela.                 |
|A biblioteca foi criada como static library. Sendo assim voc� dever� utilizar os dois |
|cabe�alhos constantes na mesma, bem como incluir os cabe�alhos de c�digo marcado      |
| abaixo                                                                               |
|Para o processo de compila��o, voc� dever� referenciar a mesma DSGraph_LIB.a.         |
| No Codeblocks:                                                                       |
| Properties(do seu projeto)->Project's build option->Linker Settings->Link libraries  |
|                                                                                      |
| * ATEN��O *                                                                          |
| Para o correto funcionamento, ser� ainda necess�rio que voc� tenha a Allegro 5.0 con-|
|figurada no seu sistema operacional                                                   |
|                                                                                      |
|--------------------------------------------------------------------------------------+
*/
//BOF
#include <stdio.h>
#include <stdlib.h>
#include "../lib/DSGraph.h"
#include <stdint.h> //avoid: cast to pointer from integer of different size [-Wint-to-pointer-cast]



#define MAX 100
typedef struct NODE_STRUCTURE NO;


void criarArvore(NO *pRaiz)
{
    pRaiz = NULL;
}


NO *inserir(NO *pRaiz, int numero)
{
    if(pRaiz == NULL)
    {
        pRaiz = (NO *) malloc(sizeof(NO));
        pRaiz->proximo = NULL;
        pRaiz->anterior = NULL;
        pRaiz->valor = (void *) (intptr_t) numero;

        pRaiz->pai = NULL;

        if(numero % 2 == 0)
            pRaiz->marca = 0;
        else
            pRaiz->marca = 4;

        return pRaiz;
    }
    else
    {
        if(numero <(intptr_t) pRaiz->valor)
            pRaiz->anterior = inserir(pRaiz->anterior, numero);
        if(numero >(intptr_t) pRaiz->valor)
            pRaiz->proximo = inserir(pRaiz->proximo, numero);
    }

    return pRaiz;
}



int contarNos(NO *pRaiz)
{
    if(pRaiz == NULL)
        return 0;
    else
        return 1 + contarNos(pRaiz->anterior) + contarNos(pRaiz->proximo);
}


int maior(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int altura(NO *pRaiz)
{
    if((pRaiz == NULL) || (pRaiz->anterior == NULL && pRaiz->proximo == NULL))
        return 0;
    else
        return 1 + maior(altura(pRaiz->anterior), altura(pRaiz->proximo));
}


int main()
{

    init($ARVORE_VERMELHO_PRETO);

    setDataType(int);

    NO *raiz = NULL;

    criarArvore(raiz);

    setViewAddress(0);
    raiz=  inserir(raiz, 4);
    //show(raiz,0);
    raiz=  inserir(raiz, 2);
    //show(raiz,0);
    raiz=  inserir(raiz, 0);
    //show(raiz,0);
    raiz=  inserir(raiz, 1);
    //show(raiz,0);
    raiz=  inserir(raiz, 3);
    //show(raiz,0);
    raiz=  inserir(raiz, 6);
    //show(raiz,0);
    raiz=  inserir(raiz, 5);
    raiz=  inserir(raiz, 9);
    //show(raiz,0);
    raiz=  inserir(raiz, 7);
    raiz=  inserir(raiz, 8);
    raiz=  inserir(raiz, 15);
    raiz=  inserir(raiz, 21);
    show(raiz,0);

    terminateDSGraph();

    return 0;
}

//EOF
