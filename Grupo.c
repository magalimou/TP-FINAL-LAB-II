#include "Grupo.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN

//CARGAR ARREGLO CON LA LISTA DE GRUPOS DESDE "A HASTA "H"
nodoGrupoEquipo* CrearNodoGrupo(stEquipo* unEquipo)
{
    nodoGrupoEquipo* nuevo = (nodoGrupoEquipo*)malloc(sizeof(nodoGrupoEquipo));
    nuevo->Equipo = unEquipo;
    nuevo->sig = NULL;

    return nuevo;
}

stEquipo* RetornarEquipo(nodoEquipo* listaEquipos, char nom[])
{
    while(listaEquipos != NULL && strcmpi(listaEquipos->unEquipo.nomEquipo, nom) != 0)
    {
        listaEquipos = listaEquipos->sig;
    }

    if(listaEquipos == NULL)
    {
        return NULL;

    }else
    {
        return &(listaEquipos->unEquipo);
    }
}

void InsertarEnListaGrupos(nodoGrupoEquipo** listaGrupos, stEquipo* unEquipo)
{
    nodoGrupoEquipo* recorredora;
    nodoGrupoEquipo* nuevo = CrearNodoGrupo(unEquipo);

    if(*listaGrupos == NULL)
    {
        *listaGrupos = nuevo;

    }else
    {
        recorredora = *listaGrupos;

        while(recorredora->sig != NULL)
        {
            recorredora = recorredora->sig;
        }

        recorredora->sig = nuevo;
    }
}

void CargarListaGrupos(nodoGrupoEquipo** listaGrupos, nodoEquipo* listaEquipos, char nom1[], char nom2[], char nom3[], char nom4[])
{
    //nodoGrupoEquipo* listaGrupos = la lista de equipos de una celda en particular
    //nodoEquipo* listaEquipos = la lista de equipos completa
    //char1,char2... etc = nombres de los equipos correspondientes a cada grupo

    stEquipo* Equipo1 = RetornarEquipo(listaEquipos, nom1);
    stEquipo* Equipo2 = RetornarEquipo(listaEquipos, nom2);
    stEquipo* Equipo3 = RetornarEquipo(listaEquipos, nom3);
    stEquipo* Equipo4 = RetornarEquipo(listaEquipos, nom4);

    InsertarEnListaGrupos(listaGrupos, Equipo1);
    InsertarEnListaGrupos(listaGrupos, Equipo2);
    InsertarEnListaGrupos(listaGrupos, Equipo3);
    InsertarEnListaGrupos(listaGrupos, Equipo4);
}

void CargarGrupos(nodoGrupoEquipo** listaGrupos, nodoEquipo* listaEquipos, int i)
{
    //nodoGrupoEquipo* listaGrupos = la lista de equipos de una celda en particular
    //nodoEquipo* listaEquipos = la lista de equipos completa
    // i = el grupo del que se trate (0 = A, 1 = B, ...)

    if(i == 0)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Qatar", "Ecuador", "Senegal", "Paises Bajos");

    }
    else if(i == 1)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Inglaterra", "Iran", "Estados Unidos", "Gales");

    }
    else if(i == 2)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Argentina", "Arabia Saudita", "Mexico", "Polonia");

    }
    else if(i == 3)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Francia", "Australia", "Dinamarca", "Tunez");;

    }
    else if(i == 4)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Espania", "Costa Rica", "Alemania", "Japon");

    }
    else if(i == 5)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Belgica", "Canada", "Marruecos", "Croacia");

    }
    else if(i == 6)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Brasil", "Serbia", "Suiza", "Camerun");

    }
    else if(i == 7)
    {
        CargarListaGrupos(listaGrupos, listaEquipos, "Portugal", "Ghana", "Uruguay", "Corea del Sur");
    }
}

char CargarLetraGrupo(int i)
{
    char letra = 'A';

    if(i == 0)
    {
        letra = 'A';

    }
    else if(i == 1)
    {
        letra = 'B';

    }
    else if(i == 2)
    {
        letra = 'C';

    }
    else if(i == 3)
    {
        letra = 'D';

    }
    else if(i == 4)
    {
        letra = 'E';

    }
    else if(i == 5)
    {
        letra = 'F';

    }
    else if(i == 6)
    {
        letra = 'G';

    }
    else if(i == 7)
    {
        letra = 'H';
    }

    return letra;
}

void InsertarGrupos(Grupo ArrGrupos[], int* validos, nodoEquipo* listaEquipos)
{
    //nodoEquipo* listaEquipos = lista de la totalidad de los equipos
    int i = 0;

    while(i < 8)
    {
        Grupo nuevoGrupo;
        nuevoGrupo.letra = CargarLetraGrupo(i);
        nuevoGrupo.EquiposMismoGrupo = NULL;

        ArrGrupos[i] = nuevoGrupo;
        CargarGrupos(&(ArrGrupos[i].EquiposMismoGrupo), listaEquipos, i);
        i++;
    }
    *validos = i;
}




//MOSTRAR ARREGLO GRUPOS
void MostrarListaGrupos(nodoGrupoEquipo* listaGrupos)
{
    while(listaGrupos != NULL)
    {
        printf("\n  -------------------------------");
        printf("\n  Equipo: %s", (*listaGrupos->Equipo).nomEquipo);
        MostrarEquipo(*(listaGrupos->Equipo));
        printf("\n  -------------------------------");

        listaGrupos = listaGrupos->sig;
    }
}

void MostrarArrGrupos(Grupo ArrGrupos[], int validos)
{
    for(int i=0; i<validos; i++)
    {
        printf("\n\n\n  GRUPO %c: ", ArrGrupos[i].letra);
        MostrarListaGrupos(ArrGrupos[i].EquiposMismoGrupo);
    }
}


