#ifndef COMUN_H
#define COMUN_H

#define MAX_CLIENTES 1000

typedef struct {
    int id;
    char nombres[50];
    char dni[50];
    char telefono[50];
} Cliente;

void convertirAMayusculas(char *cadena);
void limpiarBuffer();

#endif