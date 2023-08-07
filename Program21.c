#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckPrime(int ino)
{
    if((ino%2)==0)
    {
        return true;
    }
   return false;
}
int main()
{
    int i =0;
    bool bret = true;
    printf("Enetr thr numbar :\n");
    scanf("%d",&i);
    bret=CheckPrime(i);
    // printf("%d",i);
    if(bret==true)
    {
        printf("The numbar is Prime numbar");
    }else if(bret==false){
        printf("Its not prime numbar:");
    }
    return 0;
}