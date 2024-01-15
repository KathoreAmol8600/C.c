//print the oll Even  nunmbar from 1 to nth wher the
// nth is User numbar
#include<stdio.h>
void main()
{
printf("Enter the Numbar...");
int ino;
scanf("%d",&ino);
int i=1;
while(i<=ino)
{

    if(i%2==0)
    {
    printf("%d\n",i);
    }

    i++;
}
}