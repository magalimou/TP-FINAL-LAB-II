#include "Equipo.h"

/// TRABAJO PRACTICO FINAL LABORATORIO 2
/// JOAQUIN ALBARRACIN, MAGALI MOURIÑO, SERGIO AREAN


//BUSCAR PAIS POR NOMBRE EN LISTA DE EQUIPOS
int BuscarPais(nodoEquipo* listaEquipos, char pais[])
{
    while(listaEquipos != NULL)
    {
        if(strcmpi(listaEquipos->unEquipo.nomEquipo, pais) == 0)
        {
            return 1;
        }

        listaEquipos = listaEquipos->sig;
    }
    return 0;
}

//CARGA Y MUESTRA DE EQUIPOS CON DATOS EN 0
stEquipo CargarUnEquipo(stEquipo unEquipo)
{
    printf("\n Nombre Equipo: ");
    fflush(stdin);
    gets(unEquipo.nomEquipo);

    unEquipo.ga = 0;
    unEquipo.gf = 0;
    unEquipo.loss = 0;
    unEquipo.mp = 0;
    unEquipo.win = 0;
    unEquipo.pts = 0;
    unEquipo.emp = 0;
    unEquipo.probability = 0;

    return unEquipo;
}

//CARGAR ARCHIVO CON TODOS LOS EQUIPOS
void CargarEquipos(char Nombre[])
{
    FILE* Archi = fopen(Nombre, "wb");
    char control = 's';
    stEquipo unEquipo;

    if(Archi != NULL)
    {
        while(control == 's')
        {
            unEquipo = CargarUnEquipo(unEquipo);
            fwrite(&unEquipo, sizeof(stEquipo), 1, Archi);

            printf("\n  Desea cargar mas equipos? s/n   ");
            fflush(stdin);
            scanf("%c", &control);
        }
        fclose(Archi);
    }
}

//MOSTRAR ARCHIVO CON DATOS DEL EQUIPO
void MostrarEquipos(char Nombre[])
{
    FILE* Archi = fopen(Nombre, "rb");
    stEquipo unEquipo;

    if(Archi != NULL)
    {
        while(fread(&unEquipo, sizeof(stEquipo), 1, Archi))
        {
            printf("\n\n EQUIPO:");
            printf("\n------------------------");
            printf("\n Nombre: %s", unEquipo.nomEquipo);
            printf("\n Partidos Jugados: %d", unEquipo.mp);
            printf("\n Goles a Favor: %d", unEquipo.gf);
            printf("\n Goles en Contra: %d", unEquipo.ga);
            printf("\n Partidos Ganados: %d", unEquipo.win);
            printf("\n Partidos Perdidos: %d", unEquipo.loss);
            printf("\n Partidos Empatados: %d", unEquipo.emp);
            printf("\n Puntos Totales: %d", unEquipo.pts);
            printf("\n------------------------");
        }
        fclose(Archi);
    }
}


//CARGA DE LISTA CON TODOS LOS EQUIPOS - NODO EQUIPO
nodoEquipo* CrearNodoEquipo(stEquipo unEquipo)
{
    nodoEquipo* nuevo = (nodoEquipo*)malloc(sizeof(nodoEquipo));

    strcpy(nuevo->unEquipo.nomEquipo, unEquipo.nomEquipo);
    nuevo->unEquipo.ga = unEquipo.ga;
    nuevo->unEquipo.gf = unEquipo.gf;
    nuevo->unEquipo.loss = unEquipo.loss;
    nuevo->unEquipo.mp = unEquipo.mp;
    nuevo->unEquipo.win = unEquipo.win;
    nuevo->unEquipo.pts = unEquipo.pts;
    nuevo->unEquipo.emp = unEquipo.emp;
    nuevo->unEquipo.probability = unEquipo.probability;

    nuevo->sig = NULL;

    return nuevo;
}

void InsertarEnListaEquipos(nodoEquipo** listaEquipos, stEquipo unEquipo)
{
    nodoEquipo* recorredora;
    nodoEquipo* nuevo = CrearNodoEquipo(unEquipo);

    if(*listaEquipos == NULL)
    {
        *listaEquipos = nuevo;

    }else
    {
        recorredora = *listaEquipos;

        while(recorredora->sig != NULL)
        {
            recorredora = recorredora->sig;
        }

        recorredora->sig = nuevo;
    }
}

void CargarDeArchivoALista(char Nombre[], nodoEquipo** listaEquipos)
{
    FILE* Archi = fopen(Nombre, "rb");
    stEquipo unEquipo;

    if(Archi != NULL)
    {
        while(fread(&unEquipo, sizeof(stEquipo), 1, Archi)>0)
        {
            InsertarEnListaEquipos(listaEquipos, unEquipo);
        }
        fclose(Archi);
    }
}


//CARGAR PROBABILIDAD DE GANAR EL MUNDIAL A TODOS LOS EQUIPOS
void PonerProbabilidad(stEquipo* unEquipo)
{
    if(strcmpi((*unEquipo).nomEquipo, "Francia") == 0)
    {
        (*unEquipo).probability = 0.1793;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Brasil") == 0)
    {
        (*unEquipo).probability = 0.1573;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Espania") == 0)
    {
        (*unEquipo).probability = 0.1153;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Inglaterra") == 0)
    {
        (*unEquipo).probability = 0.0803;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Belgica") == 0)
    {
        (*unEquipo).probability = 0.079;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Paises Bajos") == 0)
    {
        (*unEquipo).probability = 0.077;
    }
    else if(strcmpi((*unEquipo).nomEquipo, "Alemania") == 0)
    {
        (*unEquipo).probability = 0.0721;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Argentina") == 0)
    {
        (*unEquipo).probability = 0.0645;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Portugal") == 0)
    {
        (*unEquipo).probability = 0.0511;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Croacia") == 0)
    {
        (*unEquipo).probability = 0.0231;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Dinamarca") == 0)
    {
        (*unEquipo).probability = 0.0203;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Uruguay") == 0)
    {
        (*unEquipo).probability = 0.0148;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Mexico") == 0)
    {
        (*unEquipo).probability = 0.0137;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Suiza") == 0)
    {
        (*unEquipo).probability = 0.01;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Polonia") == 0)
    {
        (*unEquipo).probability = 0.0082;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Iran") == 0)
    {
        (*unEquipo).probability = 0.006;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Japon") == 0)
    {
        (*unEquipo).probability = 0.0048;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Estados Unidos") == 0)
    {
        (*unEquipo).probability = 0.0046;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Gales") == 0)
    {
        (*unEquipo).probability = 0.0041;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Qatar") == 0)
    {
        (*unEquipo).probability = 0.0035;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Corea del Sur") == 0)
    {
        (*unEquipo).probability = 0.0035;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Serbia") == 0)
    {
        (*unEquipo).probability = 0.0024;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Senegal") == 0)
    {
        (*unEquipo).probability = 0.0019;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Ecuador") == 0)
    {
        (*unEquipo).probability = 0.0017;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Australia") == 0)
    {
        (*unEquipo).probability = 0.0001;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Ghana") == 0)
    {
        (*unEquipo).probability = 0.0002;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Tunez") == 0)
    {
        (*unEquipo).probability = 0.0001;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Marruecos") == 0)
    {
        (*unEquipo).probability = 0.0001;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Canada") == 0)
    {
        (*unEquipo).probability = 0.0001;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Camerun") == 0)
    {
        (*unEquipo).probability = 0.00009;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Arabia Saudita") == 0)
    {
        (*unEquipo).probability = 0.00009;

    }
    else if(strcmpi((*unEquipo).nomEquipo, "Costa Rica") == 0)
    {
        (*unEquipo).probability = 0.00009;
    }
}

void CargarProbabilidades(nodoEquipo* listaEquipos)
{
    while(listaEquipos != NULL)
    {
        PonerProbabilidad(&(listaEquipos->unEquipo));
        listaEquipos = listaEquipos->sig;
    }
}


//MOSTRAR LISTA EQUIPOS
void MostrarEquipo(stEquipo unEquipo)
{
    printf("\n                                                                      Partidos Jugados: %d", unEquipo.mp);
    printf("\n                                                                      Goles a Favor: %d", unEquipo.gf);
    printf("\n                                                                      Goles en Contra: %d", unEquipo.ga);
    printf("\n                                                                      Partidos Ganados: %d", unEquipo.win);
    printf("\n                                                                      Partidos Perdidos: %d", unEquipo.loss);
    printf("\n                                                                      Partidos Empatados: %d", unEquipo.emp);
    printf("\n                                                                      Puntos Totales: %d", unEquipo.pts);
    printf("\n                                                                      Probabilidad de ganar: %.5f", unEquipo.probability);
}

void MostrarListaEquipos(nodoEquipo* listaEquipos)
{
    while(listaEquipos != NULL)
    {
        printf("\n\n                                                                        EQUIPO:");
        printf("\n                                                                      -------------------------------");
        printf("\n                                                                      Nombre: %s", listaEquipos->unEquipo.nomEquipo);
        MostrarEquipo(listaEquipos->unEquipo);
        printf("\n                                                                      -------------------------------");

        listaEquipos = listaEquipos->sig;
    }
}

void MostrarPorBusqueda(nodoEquipo* listaEquipos, char pais[])
{
    while(listaEquipos != NULL)
    {
        if(strcmpi(listaEquipos->unEquipo.nomEquipo, pais) == 0)
        {
            mostrarEquipo_conFormato(listaEquipos->unEquipo); //FUNCION MODULARIZADA EN LINEA 6896 DE cartelesBanderas.c
        }
        listaEquipos = listaEquipos->sig;
    }
}


//ACTUALIZA LOS VALORES DE LA ESTRUCTURA DE EQUIPOS
void ActualizarEquipoGanador(stEquipo** EqWinner, int golesGanador, int golesPerdedor, int i)
{
    (*EqWinner)->gf = (*EqWinner)->gf + golesGanador;
    (*EqWinner)->ga = (*EqWinner)->ga + golesPerdedor;
    (*EqWinner)->win = (*EqWinner)->win + 1;
    (*EqWinner)->loss = (*EqWinner)->loss + 0;
    (*EqWinner)->emp = (*EqWinner)->emp + 0;
    (*EqWinner)->pts = 3*(*EqWinner)->win + 1*(*EqWinner)->emp + 0*(*EqWinner)->loss;
    (*EqWinner)->mp = (*EqWinner)->mp + 1;
}

void ActualizarEquipoPerdedor(stEquipo** EqLoser, int golesPerdedor, int golesGanador, int i)
{
    (*EqLoser)->gf = (*EqLoser)->gf + golesPerdedor;
    (*EqLoser)->ga = (*EqLoser)->ga + golesGanador;
    (*EqLoser)->win = (*EqLoser)->win + 0;
    (*EqLoser)->loss = (*EqLoser)->loss + 1;
    (*EqLoser)->emp = (*EqLoser)->emp + 0;
    (*EqLoser)->pts = 3*(*EqLoser)->win + 1*(*EqLoser)->emp + 0*(*EqLoser)->loss;
    (*EqLoser)->mp = (*EqLoser)->mp + 1;
}


//DEVUELVE NOMBRE DE PAISES CON UN MAXIMO DE CARACTERES
void devuelveNombre_formatoTabla(stEquipo* unEquipo, char nombre_retornado[])
{
//Esta funcion pretende devolver cada equipo en el formato
//de caracteres optimo para la muestra
    strcpy(nombre_retornado,unEquipo->nomEquipo);
    if(strcmpi(unEquipo->nomEquipo,"Qatar")==0)
        strcpy(nombre_retornado,"Qatar    ");
    else if (strcmpi(unEquipo->nomEquipo,"Ecuador")==0)
        strcpy(nombre_retornado,"Ecuador  ");
    else if (strcmpi(unEquipo->nomEquipo,"Senegal")==0)
        strcpy(nombre_retornado,"Senegal  ");
    else if (strcmpi(unEquipo->nomEquipo,"Paises Bajos")==0)
        strcpy(nombre_retornado,"P.  Bajos");
    else if (strcmpi(unEquipo->nomEquipo,"Inglaterra")==0)
        strcpy(nombre_retornado,"Inglaterr");
    else if (strcmpi(unEquipo->nomEquipo,"Iran")==0)
        strcpy(nombre_retornado,"Iran     ");
    else if (strcmpi(unEquipo->nomEquipo,"Estados Unidos")==0)
        strcpy(nombre_retornado,"EE.UU    ");
    else if (strcmpi(unEquipo->nomEquipo,"Gales")==0)
        strcpy(nombre_retornado,"Gales    ");
    else if (strcmpi(unEquipo->nomEquipo,"Argentina")==0)
        strcpy(nombre_retornado,"Argentina");
    else if (strcmpi(unEquipo->nomEquipo,"Arabia Saudita")==0)
        strcpy(nombre_retornado,"Arab Saud");
    else if (strcmpi(unEquipo->nomEquipo,"Mexico")==0)
        strcpy(nombre_retornado,"Mexico   ");
    else if (strcmpi(unEquipo->nomEquipo,"Polonia")==0)
        strcpy(nombre_retornado,"Polonia  ");
    else if (strcmpi(unEquipo->nomEquipo,"Francia")==0)
        strcpy(nombre_retornado,"Francia  ");
    else if (strcmpi(unEquipo->nomEquipo,"Australia")==0)
        strcpy(nombre_retornado,"Australia");
    else if (strcmpi(unEquipo->nomEquipo,"Ecuador")==0)
        strcpy(nombre_retornado,"Ecuador  ");
    else if (strcmpi(unEquipo->nomEquipo,"Dinamarca")==0)
        strcpy(nombre_retornado,"Dinamarca");
    else if (strcmpi(unEquipo->nomEquipo,"Tunez")==0)
        strcpy(nombre_retornado,"Tunez    ");
    else if (strcmpi(unEquipo->nomEquipo,"Espania")==0)
        strcpy(nombre_retornado,"Espania  ");
    else if (strcmpi(unEquipo->nomEquipo,"Costa Rica")==0)
        strcpy(nombre_retornado,"CostaRica");
    else if (strcmpi(unEquipo->nomEquipo,"Alemania")==0)
        strcpy(nombre_retornado,"Alemania ");
    else if (strcmpi(unEquipo->nomEquipo,"Japon")==0)
        strcpy(nombre_retornado,"Japon    ");
    else if (strcmpi(unEquipo->nomEquipo,"Belgica")==0)
        strcpy(nombre_retornado,"Belgica  ");
    else if (strcmpi(unEquipo->nomEquipo,"Canada")==0)
        strcpy(nombre_retornado,"Canada   ");
    else if (strcmpi(unEquipo->nomEquipo,"Marruecos")==0)
        strcpy(nombre_retornado,"Marruecos");
    else if (strcmpi(unEquipo->nomEquipo,"Croacia")==0)
        strcpy(nombre_retornado,"Croacia  ");
    else if (strcmpi(unEquipo->nomEquipo,"Brasil")==0)
        strcpy(nombre_retornado,"Brasil   ");
    else if (strcmpi(unEquipo->nomEquipo,"Serbia")==0)
        strcpy(nombre_retornado,"Serbia   ");
    else if (strcmpi(unEquipo->nomEquipo,"Suiza")==0)
        strcpy(nombre_retornado,"Suiza    ");
    else if (strcmpi(unEquipo->nomEquipo,"Camerun")==0)
        strcpy(nombre_retornado,"Camerun  ");
    else if (strcmpi(unEquipo->nomEquipo,"Portugal")==0)
        strcpy(nombre_retornado,"Portugal ");
    else if (strcmpi(unEquipo->nomEquipo,"Ghana")==0)
        strcpy(nombre_retornado,"Ghana    ");
    else if (strcmpi(unEquipo->nomEquipo,"Uruguay")==0)
        strcpy(nombre_retornado,"Uruguay  ");
    else if (strcmpi(unEquipo->nomEquipo,"Corea del Sur")==0)
        strcpy(nombre_retornado,"CoreaDSur");

}

