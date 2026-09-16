#include<stdio.h>
int main()
{
    int arr[10],b,c,temp;
    printf("enter te element");
    scanf("%d",&b);
    for(int i=0; i<b;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the no. you want rotate");
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
      temp=arr[0];
      for(int k=0;k<b-1;k++)
      {
        arr[k]=arr[k+1];
      }
      arr[b-1]=temp;
     
      }
      printf("rotate ke baad");
      for(int i=0;i<b;i++)
        printf("%d",arr[i]);
    
    return 0;
}