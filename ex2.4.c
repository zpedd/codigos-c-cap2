#include <stdio.h>
#include <stdlib.h>

int main(void){
 int n1;
 int n2;
 int n3;
 
 printf("escreva 3 numeros");
 scanf("%d", &n1);
 scanf("%d", &n2);
 scanf("%d", &n3);

   //entrada
   if (n1<=n2 && n2<=n3){
    printf("%d <= %d <= %d", n1,n2,n3);
    
   }else if (n1<=n3 && n3<=n2){
    printf("%d <= %d <= %d", n1,n3,n2);

    }else if (n2<=n1 && n1<=n3){
    printf("%d <= %d <= %d", n2,n1,n3);

     }else if (n2<=n3 && n3<=n1){
    printf("%d <= %d < %d", n2,n3,n1);

     }else if (n3<=n1 && n1<=n2){
    printf("%d <= %d <= %d", n3,n1,n2);

     }else if (n3<=n2 && n2<=n1){
    printf("%d <= %d <= %d", n3,n2,n1);
     
    }
    return 0;
}