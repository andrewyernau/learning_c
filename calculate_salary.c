#include<stdio.h>

int main()
{
    //VARIABLES
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    //INPUT
    printf("Ingresa las horas trabajadas por el empleado:");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f", &costoHora);

    //ACTION
    sueldo = horasTrabajadas * costoHora;

    //OUTPUT
    printf("El sueldo total del operario es : ");
    printf("%f", sueldo);

    //STOP
    getchar();
    return 0;
}
