#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "cartelesBanderas.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

void pelota();
void titulo();
void Portada();
void Opciones();

int main()
{
    system("pause");
    system("color 4F");
    Portada();
    system("pause");
    system("cls");
    system("color 4F");

    Opciones();

    return 0;
}

void Opciones()
{
     printf(" ___________________________________________\n");
    printf("|             <<QUE DESEA HACER?>>          |\n");
    printf("|                                           |\n");
    printf("|  1. INICIAR PROGRAMA                      |\n");
    printf("|  0. CERRAR PROGRAMA                       |\n");
    printf("|___________________________________________|\n");

    char opcion[4];
    int i;

    do
    {
        i = 1;

        printf("\n Ingrese el numero referente a la accion: ");
        fflush(stdin);
        gets(opcion);

        if(strcmp(opcion, "1") == 0)
        {
            i = 0;

        }else if(strcmp(opcion, "0") == 0)
        {
            i = 0;

        }else
        {
            i = 1;
            printf("\n Error. Intente de nuevo \n");
        }

    }while(i == 1);

    if(strcmpi(opcion, "1") == 0)
    {
        system("pause");
        printf("\x1B[40m"); //fondo negro
        system("cls");
        bienvenida();

    }else if(strcmpi(opcion, "0") == 0)
    {
        system("cls");
        system("color 4F");
        printf("\n                                             ===================================================");
        printf("\n                                               GRACIAS POR UTILIZAR EL PROGRAMA, HASTA PRONTO");
        printf("\n                                             ===================================================");
        printf("\n\n\n");
    }
}

void Portada()
{
    pelota();
    titulo();
}

void pelota()
{

system("color 40");
printf(BG_RED"\n                                               |");printf(BG_BLACK"   ");printf(BG_BLACK"   ");printf(BG_BLACK"   "); printf(BG_BLACK"   "); printf(BG_BLACK"   ");
printf(BG_RED"\n                                      |");printf(BG_BLACK"         ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"         "); printf(BG_BLACK"         ");
printf(BG_RED"\n                                |");printf(BG_BLACK"      ");printf(BG_WHITE"               ");printf(BG_BLACK"         ");printf(BG_BLACK"         ");printf(BG_BLACK"      ");
printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_WHITE"                     ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                     ");
printf(BG_RED"\n                          ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"      ");printf(BG_BLACK"                  ");
printf(BG_RED"\n                       ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_BLACK"      ");printf(BG_WHITE"            ");printf(BG_BLACK"                  ");
printf(BG_RED"\n                       ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"               ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_WHITE"                     ");printf(BG_BLACK"               ");
printf(BG_RED"\n                    ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                     ");printf(BG_WHITE"                           ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                     ");printf(BG_WHITE"                           ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"                           ");printf(BG_GRAY"   ");printf(BG_WHITE"                     ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"                           ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"               ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                        ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                        ");printf(BG_GRAY"      ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"      ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"      ");printf(BG_BLACK"               ");printf(BG_WHITE"      ");printf(BG_BLACK"      ");printf(BG_GRAY"         ");printf(BG_WHITE"   ");printf(BG_GRAY"      ");printf(BG_BLACK"         ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"      ");printf(BG_WHITE"         ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"      ");printf(BG_GRAY"      ");printf(BG_BLACK"               ");printf(BG_GRAY"      ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"      ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"         ");printf(BG_BLACK"                        ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                 ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"         ");printf(BG_BLACK"                     ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"      ");printf(BG_BLACK"                     ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_GRAY"               ");printf(BG_WHITE"   ");printf(BG_GRAY"   ");printf(BG_WHITE"   ");printf(BG_BLACK"                     ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                    ");printf(BG_BLACK"   ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"                     ");printf(BG_WHITE"      ");printf(BG_BLACK"                  ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                       ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_GRAY"                     ");printf(BG_WHITE"      ");printf(BG_BLACK"                  ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                       ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_BLACK"   ");printf(BG_GRAY"                        ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_GRAY"   ");printf(BG_BLACK"            ");printf(BG_WHITE"      ");printf(BG_BLACK"   ");
printf(BG_RED"\n                          ");printf(BG_BLACK"         ");printf(BG_GRAY"                  ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_GRAY"            ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
printf(BG_RED"\n                              ");printf(BG_BLACK"             ");printf(BG_GRAY"             ");printf(BG_BLACK"   ");printf(BG_GRAY"      "); printf(BG_WHITE"            ");printf(BG_BLACK"      ");
printf(BG_RED"\n                                 ");printf(BG_BLACK"             ");printf(BG_GRAY"   ");printf(BG_BLACK"      ");printf(BG_WHITE"                  ");printf(BG_BLACK"      ");
printf(BG_RED"\n                                   ");printf(BG_BLACK"             ");printf(BG_WHITE"             ");printf(BG_BLACK"             ");
printf(BG_RED"\n                                             ");printf(BG_BLACK"                  ");
printf(BG_RED "\n\n\n");
printf("\033[0;37m");




}

void titulo()
{
   printf(BG_RED"\n              "); printf(BG_WHITE"         "); printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"      ");printf(BG_RED"      ");printf(BG_WHITE"         ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"                  ");printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"         "); printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"      "); printf(BG_WHITE"   ");printf(BG_RED"   "); printf(BG_WHITE"   ");printf(BG_RED"      ");
   printf(BG_RED"\n              ");printf(BG_WHITE"      ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"            ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"      ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"         ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");

   printf(BG_RED"\n\n\n");

   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"      ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"            ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"         ");printf(BG_RED"      ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"      ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");

   printf(BG_RED"\n\n\n");

   printf(BG_RED"\n              ");printf(BG_WHITE"         ");printf(BG_RED"            ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"         ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"         ");printf(BG_RED"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"         ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"         ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"         ");
   printf(BG_RED"\n              ");printf(BG_WHITE"            ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"         ");printf(BG_WHITE"   ");printf(BG_RED"   ");printf(BG_WHITE"   ");printf(BG_RED"      ");printf(BG_WHITE"   ");
   printf(BG_RED"\n              ");printf(BG_RED"         ");printf(BG_WHITE"   ");

   printf(BG_RED"\n\n");

   printf(BG_RED"\n                             ");printf(BG_BLACK"                                                   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_BLACK"      ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"         ");printf(BG_WHITE"   ");printf(BG_BLACK"         ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"         ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"   ");printf(BG_WHITE"   ");printf(BG_BLACK"         ");printf(BG_WHITE"   ");printf(BG_BLACK"      ");printf(BG_BLACK"   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");printf(BG_WHITE"         ");printf(BG_BLACK"   ");
   printf(BG_RED"\n                             ");printf(BG_BLACK"                                                   ");


   printf(BG_RED"\n\n\n\n");
   printf("\033[0;37m");
}

