#include <stdio.h>

int main()
{
	
	float bs;
    float gs,da,hra;
    
    scanf("%f",&bs);
    
    da = bs*0.20;
    
    hra = bs*0.25;
    
    gs = bs+da+hra;
    printf("%.2f",gs);
	
	return 0;
}
