#include <stdio.h>

int main()
{
    int num;
    printf("Enter any odd number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Please enter odd number\n");
        return 0;
    }

    int arr[num * num];
    int c;
    //printf("Magic Square\n");
    for (c = 0; c < num * num; c++)
    {
        arr[c] = 0;
    }

    int index = (num / 2);
    int pindex = index;
    int cnt = 1;

    arr[index] = 1;
    while (cnt != num * num)
    {
        // Go Up
        if ((index - num) < 0)
        {
            index = index + (num * num) - num;
        }
        else
        {
            index = index - num;
        }

        // Go Right
        if ((index + 1) % num == 0)
        {
            index = index - (num - 1);
        }
        else
        {
            index = index + 1;
        }

        if (arr[index] == 0)
        {
            pindex = index;
        }
        else
        {
            pindex = pindex + num;
            index = pindex;
        }
        cnt++;
        arr[index] = cnt;
    }

    for (c = 0; c < num * num; c++)
    {
        printf("%5d", arr[c]);

        if ((c + 1) % num == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}
