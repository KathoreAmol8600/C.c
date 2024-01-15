#include<stdio.h>
void main()
{
    printf("Enter the Age\n");
    int Age;
    scanf("%d",&Age);

    if(Age>18)
    {
        if(Age<25)
        {
            printf("this person abal to geting sutebal job");
        }else{
             printf("this person  Not abal to geting sutebal job");

        }
    }else{
        printf("this person  Not abal to geting sutebal job");
    }
}