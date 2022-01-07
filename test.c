#include <string.h>
void main()
{

    char arr[20];

    // arr = "hey";

    strcpy(arr, "hey");

    // printf("%s", arr);

    int a[2] = {1, 2};
    int b[3];

    memcpy(b, a, sizeof(b));

    printf("%d", b[0]);

}