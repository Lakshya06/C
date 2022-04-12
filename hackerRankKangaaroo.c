#include <stdio.h>
#include <math.h>

int intersact(int, int, int, int);

int main()
{

    int x1, x2, v1, v2, y;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    // char res[5] = intersact(x1, x2, v1, v2);

    intersact(x1, x2, v1, v2);

    // printf("%s", res);

    return 0;
}

int intersact(int x1, int v1, int x2, int v2)
{

    // char res[] = "NO";

    int y;

    if(v2 > v1)

        // return res;
        printf("NO");

    else
    {

        y = (x2 - x1) / (v1 - v2);

        if(ceil(y) == floor(y))
            // res = "YES";
            printf("YES");

        else
            // res = "NO";
            printf("NO");

    }

    return 0;
}