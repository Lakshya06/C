    #include <stdio.h>

    int main()
    {

        int numberOfBoxes;
        int height = 0, length = 0, width = 0;

        scanf("%d", &numberOfBoxes);

        int boxesArr[numberOfBoxes];
    
        for(int i = 0; i < numberOfBoxes; i++)
        {

            scanf("%d %d %d", &length, &width, &height);

            if(height < 41)
            {

                boxesArr[i] = length*width*height;
            }
            else
                boxesArr[i] = 0;
        }

        for(int i = 0; i < numberOfBoxes; i++)
        {

            if(boxesArr[i] != 0)
                printf("%d\n", boxesArr[i]);

        }

        return 0;
    }