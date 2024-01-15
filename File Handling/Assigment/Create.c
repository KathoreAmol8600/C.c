#include<stdio.h>
int main()
{
    int ret=0;
     FILE *fptr=NULL;
    char Name[20];
    
    char Data[20];

    printf("Enter thr Fielname..\n");                         
    scanf("%s",&Name);
    //   logic for open
    fptr=fopen(Name,"w+");
    if(fptr==NULL)
    {
        printf("File not open");
    }else printf("File open\n");
    
// Enter data
    printf("Enter thr Data..\n");                   
    scanf("%s",&Data);
    fputs(Data,fptr);

// Read data

   char Rdat[20];
   fgets(Rdat,6,fptr);
   printf("%s\n",Rdat);
  
   // logic close
   ret=fclose(fptr);
   if(ret==-1)
   printf("File not close sec...");
   else printf("File close sec.. ");
 return 0;
}

// function
// 1> fopen()     ->open file           
// 2> fputc()     ->write in filr
// 3> fgetc()     -> read
// 4> fclose()    -> close file 

// mode
 // 'w'-> write mode
 // 'r'->write mode
 // 'a'->data not lost

