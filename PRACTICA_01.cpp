#include <stdlib.h>
#include <stdio.h>
int main (){
    float a;
    float b;
    float c;
    int opt;
    printf("1.-Suma\n2.-Resta\n3.-Producto\n4.-Division");
    printf("\n\nSeleccione una opcion: ");
    scanf("%d",&opt);
    if (opt>0 && opt<5){
    printf("Ingrese el primer operador: ");
    scanf("%f",&a);
    printf("Ingrese el segundo operador: ");
    scanf("%f",&b);
    if(opt==1){
            c=a+b;
    }
    else if(opt==2){
            c=a-b;
    }
    else if(opt==3){
            c=a*b;
    }
    else if(opt==4){
            while(b==0){
                printf("\nError %d, no puede ser dividido entre %d",a,b);
                printf("\n\n\nIntroduce el primer operador: ");
                scanf("%f",&a);
                printf("\n\n\n1Introduce el segundo operador: ");
                scanf("%f",&b);
            }
        c=a/b;
    }
    }
    else{
        printf("\n\nOpcion invalida");
        c=0;
    }
    printf("\n\nEl resultado es %f\n\n",c);
    }

