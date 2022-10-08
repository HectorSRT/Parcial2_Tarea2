#include <stdio.h>
#include <stdlib.h>

void leer_arreglo(int n, int arr[]);
int buscar_valor_ciclos(int n, int arr[], int x);
int buscar_valor_rec(int n, int arr[], int x, int i);

int main()
{
    int n,x,i=0;
    printf("Define tamanio del arreglo: ");
    scanf("%d", &n);
    int arr[n];
    leer_arreglo(n,arr);
    printf("Cual es el valor a buscar? ");
    scanf("%d", &x);
    if(buscar_valor_ciclos(n,arr,x)==1){
        printf("Si se encontro el valor(ciclos)\n");
    }else{
        printf("No se encontro el valor(ciclos)\n");
    }
    if(buscar_valor_rec(n,arr,x,i)==1){
        printf("Si se encontro el valor(recursivo)\n");
    }else{
        printf("No se encontro el valor(recursivo)\n");
    }
    return 0;
}

void leer_arreglo(int n, int arr[]){
    printf("Datos del arreglo: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
}

int buscar_valor_ciclos(int n, int arr[], int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return 1;
        }
    }
    return 0;
}

int buscar_valor_rec(int n, int arr[], int x, int i){
    if(i>n){
        return 0;
    }else{
        if(arr[i]==x){
            return 1;
        }else{
            i=buscar_valor_rec(n,arr,x,i+1);
        }
    }
}
