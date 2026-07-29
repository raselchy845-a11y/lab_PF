#include <stdio.h>

int main()
{
    int a, b, c, d, max;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    max = (max > d) ? max : d;

    printf("Maximum = %d", max);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c, d, max;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = (a > b)
            ? ((a > c) ? ((a > d) ? a : d)
                       : ((c > d) ? c : d))
            : ((b > c) ? ((b > d) ? b : d)
                       : ((c > d) ? c : d));

    printf("Maximum = %d", max);

    return 0;
}
