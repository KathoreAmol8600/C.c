
#include<stdio.h>
int i=1;
int sum=0;
void natueral(int inum)
{
    if(i<=inum)
    {
        if(i%2==0)
       sum=sum+i;
    
        i++;
        natueral(inum);
    }else{
        printf("Sumis the %d -> ",sum);
    }
}
int main()
{
    printf("Enter the natueralnumber\n");
    int inum=0;
    scanf("%d",&inum);
    natueral(inum);
    return 0;
}