#include <stdio.h>

int main()
{
    FILE *file;
    int n;
    int i, j, temp;
    printf("Enter the number of numbers you want to sort:\n");
    scanf("%d",&n);
    int a[n];
    // 1. Take input from user
    printf("Enter %d numbers:\n",n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 2. Store numbers in file
    file = fopen("C:\\Users\\User\\Desktop\\PF\\file.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%d ", a[i]);
    }

    fclose(file);


    // 3. Read numbers from file
    file = fopen("C:\\Users\\User\\Desktop\\PF\\file.txt", "r");

    for(i = 0; i < n; i++)
    {
        fscanf(file, "%d", &a[i]);
    }

    fclose(file);


    // 4. Bubble Sort
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }


    // 5. Store sorted numbers in SAME file
    file = fopen("C:\\Users\\User\\Desktop\\PF\\file.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%d\n", a[i]);
    }

    fclose(file);

    printf("Numbers sorted and stored in file.txt");

    return 0;
}
