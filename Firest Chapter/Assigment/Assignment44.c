// Bill of Hotel
#include<stdio.h>
void main()
{
    printf("Enter the No Food Dish\n");
    printf("Enter the No of Pizza\n");
    int iPizaa=0;
    scanf("%d",&iPizaa);
    iPizaa=iPizaa*250;
    // printf("%d",iPizaa);
    
    
    printf("Enter the No of Frenchfries\n");
    int iFrench=0;
     scanf("%d",&iFrench);
    iFrench=iFrench*80;
   

    printf("Enter the No of Burgar\n");
    int iBurgar=0;
    scanf("%d",&iBurgar);
    iBurgar=iBurgar*110;
    

    printf("Enter the No of Patties\n");
    int iPatties=0;
    scanf("%d",&iPatties);
    iPatties=iPatties*25;
    

    printf("Enter the No of Sandwitch\n");
    int isandwitch=0;
     scanf("%d",&isandwitch);
    isandwitch=isandwitch*50;
   

    int Bill=iPizaa+iFrench+iBurgar+iPatties+isandwitch;
    printf("\ntotalBiill With NON GSt=%d Rs\n",Bill);
   float TotalBill=(Bill*18/100);

   printf("Total Bill OF Hotel IS %f\n",TotalBill+Bill);
    
    
   
}