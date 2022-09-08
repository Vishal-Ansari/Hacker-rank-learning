// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int count=0, i, j;
//     char arr[1000];
//     int freq[1000];
//     printf("\nVISHAL ANSARI Section:N  Student ID:200111238\n");
//     printf("enter 10 elements\n");
//     gets(arr);

//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='0')
//             {
//                 count++;
//                 freq[0] = count;
//             }
//         }
//      for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='1')
//             {
//                 count++;
//                 freq[1] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='2')
//             {
//                 count++;
//                 freq[2] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='3')
//             {
//                 count++;
//                 freq[3] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='4')
//             {
//                 count++;
//                 freq[4] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='5')
//             {
//                 count++;
//                 freq[5] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='6')
//             {
//                 count++;
//                 freq[6] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='7')
//             {
//                 count++;
//                 freq[7] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='8')
//             {
//                 count++;
//                 freq[8] = count;
//             }
//         }
//         for (i = 0; arr[i]!='\0'; i++)
//         {
//             count=0;
//             if (arr[i] =='9')
//             {
//                 count++;
//                 freq[9] = count;
//             }
//         }


//     for (j = 0; j < 10; j++)
//     {
//         printf(" freq of %d is %d..\n",b[j], freq[j]);
//     }
// }


#include<stdio.h>
#include<string.h>

int main()
{
char str[1000];
fgets(str,1000,stdin);
int n=strlen(str);
int freq[10]={0};
for(int i=0;i<n;i++)
{
    if(str[i]>=48&&str[i]<=57)
    {
        freq[str[i]-48]++;
    }
}
for(int i=0;i<10;i++)
{
    printf("%d ",freq[i]);
}
    return 0;
}
