
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int pat[100][100];
  int x=0,y=2*n-2;
  while(x!=y)
  {
  for(int i=x;i<=y;i++)
  {
    for(int j=x;j<=y;j++)
    {
      if(i==x||j==x||i==y||j==y)
      pat[i][j]=n-x;
    }
  }
  x++;
  y--;
  }
  pat[x][y]=1;
  for(int i=0;i<(2*n-1);i++)
  {
    for(int j=0;j<(2*n-1);j++)
    printf("%d\t",pat[i][j]);
    printf("\n");
  }
  return 0;  
}


// #include <stdio.h>
// int sum(int x);

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d", sum(a));

//     return 0;
// }

// int sum(int x)
// {
//     if (x == 1)
//     {
//         return 1;
//     }
//     else if (x == 2)
//     {
//         return 2;
//     }
//     else if (x == 3)
//     {
//         return 3;
//     }
//     else
//     {
//         return sum(x-1) + sum(x - 2)+sum(x-3);
//     }
// }