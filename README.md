# Lenguaje_Programacion_II
1. Crear una Factura utilizando todo lo visto en el curso, esto es, Asignación dinámica de memoria, Archivos, Organización de datos de un archivo, si así fuera el caso, con los siguientes datos como se muestran en las figuras.
USTEDES HARÁN SU TIENDA Y SU FACTURA DE LOS PRODUCTOS QUE DESEAN COMO USTEDES QUIERAN O SE LAS INGENIEN

NOTA: NO TIENE QUE QUEDAR LA FACTURA FINAL TAL CUAL SE VE EN LA IMAGEN SOLO ES UN FORMATO


    2. Estos son los datos que deberá llevar su programa.
    • No. Factura: Numero de la factura
    • Fecha: (Día, Mes, Año, Hora)
    • Cliente: (Numero, Nombre, Apellido)
    • Domicilio: (Calle, Numero, Colonia, Código postal, Ciudad, Teléfono)
    • Vendedor: (Numero, Nombre, Apellido)
    • Artículo: (Código, Nombre)
    • Unidades: Unidades vendidas del articulo
    • Precio Unitario: Precio del articulo
    • Descuento Mayoreo: Descuentos al mayoreo
    • 01 – 05 Descuento 05%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.05

    • 06 – 10 Descuento 10%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.10

    • 11 – 15 Descuento 15%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.15

    • 16 – 20 Descuento 20%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.20

    • 21 – 25 Descuento 25%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.25

    • 26 – 30 Descuento 30%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.30

    • 31 – o+ Descuento 50%, del total
Descuento Mayoreo = Unidades * Precio Unitario * 0.50

    • Total Importe: Total de la compra del articulo
Total Importe = Unidades * Precio Unitario - Descuento

    • Subtotal 1: Subtotal de la suma de los totales de dinero de cada artículo
Subtotal 1 = Importe articulo + Importe articulo +…+

    • Descuento: Si la compra pasa de $1000, descontar 10%
Descuento = Subtotal 1 * 0.10

    • Subtotal: Es la suma del subtotal 1 – descuento, si hubiera descuento
Subtotal = Subtotal 1 – Descuento

    • I.V.A.: Es agregarle el IVA del subtotal
IVA = Subtotal * 0.16

    • Total: Es el total de toda la compra
Total = Subtotal + IVA, además de indicar automáticamente su equivalencia en dólares

    • Pago Efectivo: Es la cantidad de dinero que se entregara para liquidar el pago. En caso de que no sea el pago completo, indicar algún mensaje.

    • Cambio: Es la devolución de dinero
Cambio = Pago efectivo - Total

    3. Deberá de ingresar 10 productos diferentes como máximo.

    4. Deberá tener un Menú, con los siguientes datos o como ustedes lo crean más conveniente:
    A) Crear Factura
    • Deberán crear la factura, esto es, mandarla imprimir en un txt y además de poderla ver en pantalla.

    B) Insertar artículos
    • Deberá insertar entre 1 y 10 artículos que se les piden, en caso de introducir un artículo más del tope, desplegar un mensaje de que indique que su pedido está lleno y que ya no se podré introducir el artículo deseado, y no se podrá facturar si no existen artículos.

    C) Consultar o visualizar artículos
    • Deberá consultar o visualizar todos los artículos insertados, si se eliminara algún artículo, se deberán visualizar los artículos que quedan al hacer la eliminación.

    D) Eliminar artículos
    • Deberá eliminar la cantidad de artículos que se desee, y una vez eliminados, si se consultan, deberán estar los elementos que quedan.
    • Se puede mandar algún mensaje cuando se elimine algún artículo, incluso si se eliminan todos indicar que el pedido está vacío.

    E) Ordenar artículos
    • Deberá ordenar los artículos de menor a mayor conforme al número de unidades.

    F) Consultar factura
    • Deberá consultar la factura completa, esto es, los datos introducidos.

    G) Salir
    • Deberá salir del programa, puede mandar un mensaje si desea salir o quedarse en él.

NOTA: NO NECESARIAMENTE TIENEN QUE ESTAR TODOS LOS PUNTOS ANTERIORES EN ESE ORDEN, USTEDES PUEDEN PONERLOS COMO A USTEDES LES PAREZCA MEJOR O MÁS ÚTIL


