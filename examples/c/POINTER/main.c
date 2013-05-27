/*
+--------------------------------------------------------------------------------------+
|Federal University Of Juiz de Fora - UFJF - Minas Gerais - Brazil                     |
|Institute for Exact Sciences - ICE                                                    |
|Computer Science Departament - DCC                                                    |
|Project: Visual library to support Data Structures classes                            |
|Professor:Jairo Francisco de Souza    jairo.souza@ufjf.edu.br                         |
|Students......:Thiago Moratori Peixoto     thiagomoratori@gmail.com	               |
|               Sandro Athaide Coelho       sandroacoelho@gmail.com                    |
|Created in......:Abril/23/2011                                                        |
|Objective:                                                                            |
|Este � um programa de exemplo de implementa��o de Pilhas em C ANSI usando a biblioteca|
|gr�fica criada para a apresenta��o da estrutura na tela.                              |
|A biblioteca foi criada como static library. Sendo assim voc� dever� utilizar os dois |
|cabe�alhos constantes na mesma, bem como incluir o snippet de c�digo marcado abaixo   |
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

int main()
{
    init($PONTEIRO);

    setDataType(float);

    float a = 15;
    float *p;

    p = &a;

    setSleepTime(5);

    show(p, 0);

    terminateDSGraph();

    return 0;
}


//EOF
