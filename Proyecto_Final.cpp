#include <stdio.h>
//Funcion Main
struct InfoClientes{
    char Nombre[50]; //Nombre Completo
    int Numero; // Numero del Cliente
    char Calle[30]; //Nombre de la calle 
    int NumCasa; // Numero de la casa del cliente
    char Colonia[20]; //Colonia donde vive
    int Codigo_Postal; 
    char Ciudad[20];
    int Telefono;

};
struct InfoVendedor
{
    /* data */
};


int main(){
    int opcion;
    do {
    printf("CREACION DE LA FACTURA\n\n");
    printf("\nIngresar los Productos a Vender = 1");
    printf("\nAgregar la Informacion del Cliente = 2");
    printf("\nConsultar Una Factura = 3");
    printf("\nConsultar Todas Las Facturas = 4");
    printf("\nSalir = 5");
    printf("\n\nIngrese La Opcion: ");
    } while (opcion != 5);
    
    return 0;
}