#include <stdio.h>


void duplicate(int * a){
    *a *= 2;
}

int main(){
    // int number = 100;
    // int * pointToNumber = &number;

    // printf("%p, %d, %p \n" , pointToNumber, *pointToNumber, &number);

    printf("Insert number to duplicate \n");
    int a;
    scanf("%d",&a);    
    printf("before duplicate %d \n",a);
    duplicate(&a);
    printf("after duplicate %d \n",a);
}