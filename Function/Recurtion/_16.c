
#include<stdio.h>
int i=1;
int sum=0;
void natueral(int inum)
{
    if(i<=10)
    {
        printf("%d\n",i*inum);

        i++;
        natueral(inum);
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