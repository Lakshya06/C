#include <stdio.h>

int fact(int num);
int digit(int num);

int main() {
    int n,s, x;
    scanf("%d",&n);
    
    for(x=1;x<=n;x++)
    {
        s=digit(x);
        if(s!=0)
        {
            printf("%d ",s);
        }
    }
    
    return 0;
}

int fact(int num)
{
    int res;
    if(num==1)
    {
        res=1;
    }
    else
    {
        res=num*fact(num-1);
    }
    return res;
}
int digit(int num)
{
    int temp=num,k,f=0;

	while(temp>0)
	{
        k=temp%10;
        f=f+fact(k);
        printf("sum=%d")
		temp/=10;
    }
    
    if(f==num)
        return f;
    else
        return 0;
}


