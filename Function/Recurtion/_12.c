
#include<stdio.h>
int i=1;
void natueral(int inum)
{
    if(i<=inum)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        i++;
        natueral(inum);
    }
}
int main()
{
    printf("Enter the natueralnumber\n");
    int inum=0;
    // scanf("%d",&inum);
    natueral(100);
    return 0;
}