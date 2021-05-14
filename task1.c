#include <locale.h>
#include "stdafx.h"  
#include<math.h> 
    

int main() 
{     
	setlocale(LC_ALL, "Rus"); 
    float n, a, f, sum, dob; 
    printf("Введiть чотирьох значне число\n"); 
	scanf_s("\n%d", &n); 
    float a = (n / 100) % 10;   
  f = n / 100;   
  for ( n >= 1000; n < 10000;)  
   {  
       sum = a + f;  
       dob = a * f;   
  }    
 printf("\nСума : %f", "\nДобуток: %f", sum, dob);
       return 0; 
}
