#include <stdio.h>
#include <unistd.h>
//#include <windows.h>


//Kevin Olivas 358825
//Erick Jaquez 374343
//Alexis Quirarte 374223
//Funciones para Windows

#ifdef _WIN32
#include <windows.h>
#endif
//Funciones para Linux
#ifdef __unix__
#include <unistd.h>
#endif

void limpiarPantalla() {
    // Si estamos en Windows
    #ifdef _WIN32
        system("cls");
    #endif

    // Si estamos en sistemas UNIX
    #ifdef __unix__
        printf("\033[2J\033[1;1H"); // Secuencia de escape ANSI para limpiar la pantalla
    #endif
}


//Funcion Main
struct InfoClientes{
    char NombreC[50]; //Nombre Completo
    char Calle[30]; //Nombre de la calle 
    int NumCasa; // Numero de la casa del cliente
    char Colonia[20]; //Colonia donde vive
    int Codigo_Postal; 
    char Ciudad[20];
    int Telefono;

};
struct InfoVendedor {
    int NumeroV;
    char NombreV[50];
};


int main(){
    InfoClientes Clientes;
    InfoVendedor Vendedor;
    int opcion;

    /*
    FILE *archivo;
    //archivo = fopen("/home/mrkev/Documentos/Documentos/Archivos/Documentos/Documents/UACH/LENGUAJE DE PROGRAMACION II/ARCHIVOS/Parcial 3/Lenguaje_Programacion_II","w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;  // Retornar 1 en caso de error
    }*/
    do{
    limpiarPantalla();
    printf("CREACION DE LA FACTURA\n\n");
    printf("\nIngresar los Productos a Vender = 1");
    printf("\nAgregar la Informacion del Vendedor = 2");
    printf("\nAgregar la Informacion del Cliente = 3");
    printf("\nConsultar Una Factura = 4");
    printf("\nConsultar Todas Las Facturas = 5");
    printf("\nSalir = 6");
    printf("\n\nIngrese La Opcion: ");
    scanf("%d",&opcion);
    switch (opcion){
    case 1:
        limpiarPantalla();
        printf("\t\tSISTEMA DE AGREGAR PRODUCTOS\n");
//Aqui hay que añadir el que hicimos con Victor ;)
        getchar();
        break;
    case 2:
        limpiarPantalla();
        printf("\t\tSISTEMA DE AGREGAR AL VENDEDOR\n");
        printf("Ingrese el nombre del vendedor: ");
        scanf("%s",Vendedor.NombreV);
        printf("\nIngrese el numero del vendedor: ");
        scanf("%d",&Vendedor.NumeroV);
        break;
    case 3:
        limpiarPantalla();
        printf("\t\tSISTEMA DE AGREGAR AL CLIENTE\n");
        printf("Ingrese el nombre del cliente: ");
        scanf("%s",Clientes.NombreC);
        printf("\nIngrese el telefono del cliente: ");
        scanf("%d",&Clientes.Telefono);
        
        break;
    case 4:
        limpiarPantalla();
        printf("\t\tCONSULTAR LA FACTURA\n");
        break;
    case 5:
        limpiarPantalla();
        printf("\t\tCONSULTAR LAS FACTURAS CREADAS\n");
        break;
    case 6:
        limpiarPantalla();
        printf("\t\tFACTURA/S CREADA/S CORRECTAMENTE Y GUARDADAS EXITOSAMENTE");
        break;
    default:
        limpiarPantalla();
        printf("\t\tOpcion Incorrecta\n\n");
        getchar();
        break;
    }
    } while (opcion != 6);
    
    return 0;
}