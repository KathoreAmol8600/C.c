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
    printf("Enter the Numbar which you want");
    int num=0;
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("%d",one);
        break;
        
    
        case 2:
        printf("%d",two);
        break;
    
        case 3:
        printf("%d",three);
        break;
    
        case 4:
        printf("%d",four);
        break;
    
        case 5:
        printf("%d",five);
        break;
    
        case 6:
        printf("%d",six);
        break;
    
        case 7:
        printf("%d",seven);
        break;
    
        case 8:
        printf("%d",eight);
        break;
    
        case 9:
        printf("%d",nine);
        break;

        case 0:
        printf("%d",zero);
        break;
        default:
        printf("Invailed numbae");
    }
  
}