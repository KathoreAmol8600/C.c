#include<stdio.h>
void main()
{

    printf("\n\n'''''''''''if you Have Pley Game Then Enter Youer Name  As Particepenatn'''''''''''\n");
    char Name[20];
    printf(" Enter Youer Name-->");
    _flushall();
    scanf("%s",Name);
    printf("___________________Welcome %s in Dholkapuer Ladues Game___________________\n",Name);
    printf("%s Your opsit plyer is <  Bheem  > he is Belong to Dholkpuer\n");
    printf("Lets see %s and Bheem this Game hss Some rull\n\n",Name);
    printf("\n '''''''''''''''Read this Rull Caerfulley and Folow its Properley'''''''''''''''''\n");
    // printf("******************One Pleat HAs -> 21 <- ladues**************************************\n");
    printf(" Rull 1>One Pleat has -> 21 <- ladues \n ");
    printf("Rull 1>you can eat ladues at Alternate tme 4\n ");
    printf("Rull 2> you can eat Max ladues 4 or les than 4  \n ");
    printf("Rull 2>Who Tack LAdu Last 1 Taht pleyer Will lost The Game  \n\n ");
    printf(" ____________Lestd Start the Game And Congragulation Of both of you__________________\n",Name);
   int UTLadu=0;
   int Ladu=21;
 for(  ;Ladu>0; )
 {
    UTLadu=0;
    printf("%s term-> ",Name);
    scanf("%d",&UTLadu);
    if(UTLadu>4&UTLadu<0)
    {
        printf("This is the Envelid input  Red Rull Caerfuley............");
    }
    printf("Remening Ladu is-> %d\n",Ladu-UTLadu);
    Ladu=Ladu-UTLadu;
     if(Ladu==1)
    {
        printf(" Congradulation %s win the GAme \n",Name);
        break;
    }
        if(UTLadu==4)                                 // 4
            {
                printf("Bheem tack-> 2\n");  
            Ladu=Ladu-2;
            }
        else if(UTLadu==2)                            //2
            {
                 printf("Bheem tack-> 2\n");
                Ladu=Ladu-4;                           
            }
        
        else if(UTLadu==1)                             //1                
            {
                printf("Bheem tack-> 1\n");
                Ladu=Ladu-3;                           
            }
        else if(UTLadu==3)                             //3                
            {
                printf("Bheem tack-> 3\n");
                Ladu=Ladu-1;                         
            }
        printf("Remening Ladu is-> %d\n\n",Ladu);
        if(Ladu==1)
        {
             printf("-_-_-_-_-_-_-_-______Congredulation to Bheem win the GAme -_-_-_-_-_-_-_-______\n");
             break;
        }
   }
}


//b=n-c
