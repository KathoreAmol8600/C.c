
#include<stdio.h>
int i=1;
char a='a';
void natueral()
{
    if(a<='z')
    {
        printf("%c ",a);
        a++;
        natueral(a);
    }
}
int main()
{
    printf("Enter the natueralnumber\n");
    int inum=0;
    // scanf("%d",&inum);
    natueral();
    return 0;
}