//write and read difrrent types of data in file 
// fprintf(),fscanf()
#include<stdio.h>
// #include<iostram.h>
void main()
{
    FILE *fptr=NULL;
    char Name[20];
    int id=0;
    char data[40];
    printf("Enter thr Fielname..\n");
    scanf("%s",&Name);
    fptr=fopen(Name,"a");
    if(fptr!=NULL)
    printf("Secssefuley oppan\n");
    else
    printf("not Secssefuly open\n");
    
    printf("Enter the Data\n");
    


    fprintf(fptr,"%s\t%d\t\n",data,id);

    fclose(fptr);

}