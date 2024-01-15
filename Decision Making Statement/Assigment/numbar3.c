// Aquranse of numbar.............

#include<stdio.h>
void main()
{
    printf("Enter the numbar");
    int ino=0;
    scanf("%d",&ino); // 1231322
   int ino2=0;
   int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    while(ino!=0)
    {
       ino2=ino%10;                     // rimendar 1   5

            if(ino2==1)
            {
            one++;
            }else if(ino2==2){
            two++;
            }else if(ino2==3)
            {
                three++;
            }else if(ino2==4)
            {
                four++;
            }else if(ino2==5)
            {
                five++;
            }else if(ino2==6)
            {
                six++;
            }else if(ino2==7)
            {
                seven++;
            }else if(ino2==8)
            {
                eight++;
            }else if(ino2==9)
            {
                nine++;
            }
            else if(ino2==0)
            {
            zero++;
            }
            ino=ino/10;
    }
        if(one>0)
        printf("1->%d",one);
        if(two>0)
        printf("2->%d",two);
        if(three>0)
        printf("%d",three);
        if(four>0)
        printf("%d",four);
        if(five>0)
        printf("%d",five);   
        if(six>0)
        printf("%d",six);
        if(seven>0)
        printf("%d",seven);
        if(eight>0)
        printf("%d",eight);
        if(nine>0)
        printf("%d",nine);
        if(nine>0)
        printf("%d",nine);
        if(zero>0)
        printf("%d",zero);
  
}