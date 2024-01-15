#include<stdio.h>
#include"file.c"

struct Emploey
{
    int E_id;
    char E_Name[20];
    char E_email[20];
    double E_cont;
    double E_Sal;

};

void main()
{
    int ino1=0;
    int ino2=0;
    int lc=0;
    int iopt=1;
    
    printf("ENter the Total No of Emploey");
    scanf("%d",&ino1);
    
   struct Emploey obj1[3];
   void  Add_Empoley(struct Emploey []);

    do 
    {
            if(lc==0)
            {
                printf(" 1--> Add_Emploeyee_Detalls_\n");
                printf(" 2--> Displey_All_Emploey\n");
                printf(" 3--> found_Emploey_id\n");
                printf(" 4--> Update_by_name\n");
                printf(" 5--> Displey_list_employ\n");
                printf(" 6--> Displey__aase_Em_sai\n");
                printf(" 7--> Displey_Details_high_sail\n");
                printf(" 8--> Displey_Diteles_bit_10000_60000\n");
                lc++;
            }

        printf("Enter the option\n");
        scanf("%d",&iopt);
        switch(iopt)
        {

            case 1:
            Add_Empoley(obj1);
            break;

            // case 2:
            // Displey_All_Emploey(ino1);
            // break;

            // case 3:
            // found_Emploey_id();
            // break;

            // case 4:
            // Update_by_name();
            // break;

            // case 5:
            // Displey_list_employ();
            // break;

            // case 6:
            // Displey__aase_Em_sai();
            // break;

            // case 7:
            // Displey_Details_high_sail();
            // break;

            // case 8:
            // Displey_Diteles_bit_10000_60000();
            // break;
            // default:
            printf("Exsit hear.......");
        }
    }
    while(iopt!=0);                                   
   
}
