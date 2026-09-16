#include<stdio.h>
int main()
{
    int arr[10],b;
    printf("enter te element");
    scanf("%d",&b);
    for(int i=0; i<b;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=b-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}