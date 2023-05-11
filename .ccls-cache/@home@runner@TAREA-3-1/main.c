#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#include "list.h"
#define BARRAS printf("------------------------------------------\n")




int main(){

  BARRAS;
  printf("  ¿Qué acción desea realizar\n?"); 
  printf("1. Agregar Tarea\n");
  printf("2. Establecer Precendencia entre tareas\n"); 
  printf("3. Mostrar Tareas por Hacer\n"); 
  printf("4. Marcar tarea como completada\n"); 
  printf("5. Deshacer última acción\n");
  printf("6. Cargar datos de tareas desde un archivo\n");
  BARRAS;

  int comando; 
  scanf("%i", &comando); 

  switch(comando){
    case 1: 
    printf("Agregar tarea\n");
    
    case 2: 
    printf("\n");
    case 3: 
    printf("\n");
    case 4: 
    printf("\n");
    case 5:
    printf("\n");
    case 6: 
    printf("\n");
    
    
  }
}
