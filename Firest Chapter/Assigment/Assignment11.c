// Entre the Mark And Calculate total and Persentage
#include<stdio.h>
void main()
{
    int SUB1=0;
    int SUB2=0;
    int SUB3=0;
    int SUB4=0;
    int SUB5=0;
    int total=0;
    
    printf("Enter Mark the Sub1:\n");
    scanf("%d",&SUB1);

    printf("Enter Mark the Sub2:\n");
    scanf("%d",&SUB2);

    printf("Enter Mark the Sub3:\n");
    scanf("%d",&SUB3);

    printf("Enter Mark the Sub1:\n");
    scanf("%d",&SUB4);

    printf("Enter Mark the Sub1:\n");
    scanf("%d",&SUB5);

    total=SUB1+SUB2+SUB3+SUB4+SUB5;
    int per=0;
    per=(100*(total/500));
  
     printf("total mark is =%d\n",total);
     printf("Persentage is  =%d\n",per);

}