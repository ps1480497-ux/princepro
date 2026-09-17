#include<stdio.h>
int main()
{
    int arr[10],b,c,sum=0,value,val,f,num,pos;
    printf("enter the size of array\n=");
    scanf("%d",&b);
    printf("enter the element\n");
    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("this is element you can enter the array\n ");
    for(int i=0;i<b;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf(" the sum of element click 1,\n implementaion of array click 2,\n reverse the array click 3, \n deletion in array click 4,\n find the position of element click 5\n= ");
       scanf("%d",&num);
       switch(num)
       {
        case 1:
        {
            printf("the sum of element");
            for(int i=0;i<b;i++)
            {
                sum=sum+arr[i];
            }
            printf("the sum of no. is %d\n",sum);
        } break;
        case 2:
        {
            printf("enter the place of element which was imp..\n");
            scanf("%d",&f);
            printf("enter the value\n");
            scanf("%d",&value);
            for(int i=b;i>f;i--)
            {
              arr[i]=arr[i-1];
            }
            arr[f]=value;
            b++;
            printf("implement of array\n");
            for(int i=0;i<b;i++)
            {
                printf("%d\n",arr[i]);
            }
        }break;
        case 3:
        {
            printf(" reverse the array element\n");
            for(int i=b-1;i>=0;i--)
            printf("%d\n",arr[i]);
        }break;
        case 4:
        {
            printf("deletion the array\n");
            printf("enter the postison you want delete");
            scanf("%d",&pos);
            for(int i=pos-1;i<b;i++)
            {
                arr[i]=arr[i+1];
                
            }
            b--;
            printf("postion delete");
             for(int i=0;i<b;i++)
            {
              printf("%d\n",arr[i]);
            }
        }
        break;
        case 5:
        {
            printf("enter the value you find it");
            scanf("%d",&val);
            for(int i=0; i<b;i++)
            {
               if (arr[i]==val)
                {
                    printf("the position is %d",i+1);
                }
                
            }
        } break;
       }
    return 0;
}