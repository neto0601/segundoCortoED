#include <stdio.h>

//Aqui se declara la funcion para usarse porsteriormente

int fibonacci(int numero);

int main(){
  
  int numero;


  printf("Usuario introduzca un numero para su sucesion fibonacci---> ");
  scanf("%d", &numero);

  printf("\n\n");

  printf("Esta es la sucesion fibonacci del numero (%d)",+numero);

  printf("\n\n");




  for(int i=0; i<numero; i++){
    printf("%d\n", fibonacci(i));

  }

 return 0;



}

//Aqui se encuentra la funcion fibonacci recursiva

int fibonacci(int numero){

if(numero==1 || numero==0){
   return 1;
}else{
 return(fibonacci(numero-1)+fibonacci(numero-2));
}

}
