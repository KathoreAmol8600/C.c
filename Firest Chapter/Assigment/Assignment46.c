// Enter the 5 Sub MArk And Cal  Persentage Abd Grade
#include<stdio.h>
void main()
{
    printf("Enter the Mark Have You Subject\n");
    printf("Enter the mark OF Physicn out of 100\n");
    int Phi=0;
    scanf("%d",&Phi);
    

    printf("Enter the Mark of Chemestry out of 100\n");
    int Chem=0;
     scanf("%d",&Chem);
    
   

    printf("Enter the Mark Bilogey out of 100\n");
    int Bio=0;
    scanf("%d",&Bio);
    

    printf("Enter the Mark of Mathematics out of 100\n");
    int math=0;
    scanf("%d",&math);
  
    

    printf("Enter the No of Coumputer out of 100\n");
    int Com=0;
     scanf("%d",&Com);
  

    float Mark=Phi+Chem+Bio+math+Com;
        float   TMark =Mark/500;
    // printf("\n Total Mark=%d \n",Mark);
   float Par=TMark*100;

   printf("Your Persentage is %f\n",Par);
    

   (Par>=90)?printf("Your Grade A"):
   (Par>=80)?printf("Your Grade B"):
   (Par>=70)?printf("Your Grade C"):
   (Par>=60)?printf("Your Grade D"):
   (Par>=40)?printf("Your Grade Is E"):printf("Your Grade is F");
    

}