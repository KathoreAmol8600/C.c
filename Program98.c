
 //Input : 7
// Output : 0   1   2   3   4   5   6

// Input : 3
// Output : 0   1   2
#include<stdio.h>
void Displey(int no1)
{
    for(int i=0;i<no1;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    printf("Enter the numbaar:");
    int ino=0;
    scanf("%d",&ino);
    Displey(ino);

    return 0;
}