#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int len = 2 * n - 1;
    int min1, min2, min;
    for (int i = 1; i <= len; i++)
    {

        for (int j = 1; j <= len; j++)
        {
            min1 = i <= len - i ? i - 1 : len - i;

            min2 = j <= len - j ? j - 1 : len - j;

            min = min1 <= min2 ? min1 : min2;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}


//                             or
//  int n;
// scanf("%d", &n);
// int len = n*2 - 1;
// for(int i=0;i<len;i++){
//     for(int j=0;j<len;j++){
//         int min = i < j ? i : j;
//         min = min < len-i ? min : len-i-1;
//         min = min < len-j-1 ? min : len-j-1;
//         printf("%d ", n-min);
//     }
//     printf("\n");

