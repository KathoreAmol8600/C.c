// Aquranse of numbar.............

#include<stdio.h>
void main()
{
    printf("Enter the numbar");
    int ino=0;
    scanf("%d",&ino);
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
    printf("one is time of=%d\n",one);
    printf("two is time of=%d\n",two);
    printf("three is time of=%d\n",three);
    printf("four is time of=%d\n",four);
    printf("five is time of=%d\n",five);
    printf("six is time of=%d\n",six);
    printf("seveb is time of=%d\n",seven);
    printf("eight is time of=%d\n",eight);
    printf("nine is time of=%d\n",nine);
    printf("zero is time of=%d\n",zero);
  
}