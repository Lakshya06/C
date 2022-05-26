#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int i)
{
    int fact=1;
    while(i!=1){
    fact=fact*i;
    i--;
    }
    return fact;
}
int main() {

   int t,i,c;
    float n,sum=0.0;
    scanf("%f",&n);
    scanf("%d",&t);
    while(t!=0)
    {
        
     
        for(i=t;i>=1;i--)
        { 
           if(i%2==0)
               c=-1;
            else
                c=1;
            sum=sum+((pow(n,i)/fact(i))*c);
        }
        
               t--;
    }printf("%f",sum);
    return 0;
}