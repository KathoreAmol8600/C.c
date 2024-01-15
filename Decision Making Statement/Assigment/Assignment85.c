// nth time Strong numbar 
#include<stdio.h>
void main()
{
    int ino=0,fact=1,ino2;
    printf("Enterr the numbar");
    scanf("%d",&ino);                    // 10
while(ino!=0)
{
    ino2=ino%10;
    printf("Digit = %d\n",ino2);
    fact=1;
    while(ino2>0)
    {

        fact=fact*ino;
        ino--;
    }
    printf("FActorial is %d\n",fact);

    ino=ino/10;
}

}