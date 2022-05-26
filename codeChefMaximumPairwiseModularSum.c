#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{

    int t, n, m, i, a, b, res=0, t1, t2, mod=0;
    scanf("%d", &t);

    while(t--)
    // for(j=0;j<t;j++)
    {

        scanf("%d %d", &n, &m);
        int arr[n];

        for(i=0; i<n; i++)
            scanf("%d", &arr[i]);

        a = arr[0];

        for(i=0; i<n; i++)
        {
            if(arr[i]> a);
                a = arr[i];
        }

        // printf("a=%d\n", a);

        res=0;

        for(i=0; i<n; i++)
        {  
            
            // res=0;
            
            b = arr[i];

            // printf("a=%d\nb=%d\n", a, b);
            
            if((a-b)> 0)
                t1 = (a+b) + (a-b) % m;

            else
            {
                mod = (((a-b)%m) + m )%m;
               t1 = (a+b) + mod;
            }
            
            if((b-a)>0)
                t2 = (a+b) + (b-a) % m;
            else
            {
                mod = (((b-a)%m) + m )%m;
               t2 = (a+b) + mod;
            }
            
            if((res <= t1)||(res <= t2))
            {

                if(t1 >= t2)
                    // res = (a + b) + (a - b)%m;
                    res = t1;
    
                // if(t2 > t1)
                else if(t2 >= t1)
                    // res = (a + b) + (b - a) % m;
                    res = t2;

            }
            // if(res>t1 && res>t2)
            //     res = res;

            // printf("t1=%d\nt2=%d\n", t1, t2);

            // printf("b=%d\n", b);

        }

        printf("%d\n", res);
    }
}
