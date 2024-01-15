#include<stdio.h>
void Displey(int arr[],int size)
{
    if(size>=0)
    {
        printf("%d",arr[size]);
        size--;
         Displey(arr,size);
    }else{
        printf("\nExist here");
    }

}
int main()
{
    int size=5;
    int arr[]={1,3,5,8,6};
    Displey(arr,size);
    return 0;
}