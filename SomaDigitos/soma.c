#include <stdio.h>


long int soma(long int n){
    if(n==0){
        return n; 
    }
    else{
        return (n%10)+soma(n/10);
       
    }


}

int main(){
long int n;    

scanf("%ld",&n);

printf("%ld\n",soma(n));

    return 0;
}


