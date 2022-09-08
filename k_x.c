#include<stdio.h>

int main()
{
int arr[12]={3,5,2,4,9,3,1,7,3,11,12,3};
int flag=0,k=3,x=3,i,j,m=k;
for(i=0;i<12;i=i+k)
{
    for(j=i;j<m;j++)
    {
        if(arr[i]==x)
        flag=1;
    }
    m=m+k;
}
if(flag==1)
printf("yes");
else
printf("no");

    return 0;
}
