#include <stdio.h>

int main()
{
    int n = 0, k = 0, flag = 0, max = 0, min = 0, arr[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        max = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
            {   flag=flag+1;
                for (int k = 0; k < n; k++)
                {
                    min = arr[0][j];
                    if (min > arr[k][j])
                    {
                        min = arr[k][j];
                        flag=flag+1;
                        printf("(%d,%d) =%d ", k, j, arr[k][j]);
                    }
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("NONE\n");
    }
}
