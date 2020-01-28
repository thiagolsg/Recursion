#include <stdio.h>
#include<stdlib.h>

int f91(int n){
   if(n>100){
       return n-10;
   }
  else{

      f91(f91(n+11));

 }   

}

int main(){
int n;
while(scanf("%d",&n)!=0){
    if(n==0){
        break;
    }
    printf("f91(%d) = %d\n",n,f91(n));

}

    return 0;
}