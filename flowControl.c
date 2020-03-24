#include <stdio.h>

int main(){

    /**
    int a = 1;
    
    // if condition
    if (a == 1)
    {
        a = 2;
    }else{
        a = 3;
    }
    //switch case condition
    switch (a)
    {
    case 1:
        a = 10;
        break;
    case 2:
        a = 20;
        break;
    default:
        a = 100;
        break;
    }
     //while loop
    
   int n = 1, acum = 0;

   while (acum < 10){
       acum =+ n;
       n++;
   }
   return acum;

   int n = 1, acum = 10;
    do
    {
       acum += n;
       n++;
    } while (acum<10);
    return acum;
**/
int i, acum=0;
for ( i = 0; i < 10; i++)
{
    acum +=i;
}
return acum;
}
