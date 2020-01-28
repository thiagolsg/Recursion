#include <stdio.h>
#define tam 500

void inverte( const char * const v )
{
   
   if ( '\0' == v[ 0 ] ) { 
      return;
      } 
    else { 
           inverte( &v[ 1 ]); 
           putchar(v[ 0 ]);  
      } 
} 


int main()
{
   char v[ tam ]; 

   

   scanf("%s",v); 

   inverte( v );
   printf("\n"); 
} 


