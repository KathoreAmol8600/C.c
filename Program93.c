#include<stdio.h>
#include<stdlib.h>
int main()
{
    int isize=0;
    printf("Enter the numbar iSize:");
    scanf("%d",&isize);
    int *ptr=NULL;
    // ptr = new int[isize];// in c using malloc function
    ptr=(int*)malloc((sizeof(isize)));    // dynamic memoery allocation
    printf("Enter the numbr :");
    for(int i=0;i<(isize);i++)
    {
        scanf("%d",&ptr[i]);
    }
    // for(int j=0;j<(isize);j++)
    // {
    //     // printf("Amol");
    //     printf("%d",ptr[j]);
    // }
    printf("\nEnter the numbar that want youSearch:");
    int iSearch =0;
    scanf("%d",&iSearch);
    int Ans=(isize-1);
    for(int i=(isize-1);i>=0;i--)
    {
        if(ptr[i]==iSearch)
        {
            break;
        }
        Ans--;
    }
    // cout<<"Last refranse is :"<<Ans;
    printf("Last refranse is %d:",Ans);

    return 0;
}