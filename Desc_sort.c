#include<stdio.h>
int main()
{
    int size =0;
    printf("Enter the size of the array \n ");
    scanf("%d",&size);
    //printf("%d", size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("array \n ");
    for(int i=0;i<size;i++)
    {
      printf("%d \t", arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("The sorted array in descending order is: \n ");
    for(int i=0;i<size;i++)
    {
      printf("%d \t", arr[i]);
    }
return 0;
}
