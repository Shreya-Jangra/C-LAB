#include <stdio.h>
int main()
{

    int i, j, m, n;

    printf("enter the no of cities : ");
    scanf("%d", &m);
    printf("enter the no of days : ");
    scanf("%d", &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the value for city%d, day%d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("city%d,day%d=%d\n", i+1, j+1, a[i][j]);
        }
    }
    return 0;
}
