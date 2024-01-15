#include<stdio.h>
void main()
{
    int ret=0;
    FILE *fptr=NULL;
    char Name[20];
    printf("Enter the file name\n");;
    scanf("%s",&Name);
    fptr=fopen(Name,"r");
    char chare[20];
    char *ptr=chare;
    int id=0;
    char Uname[20];
    printf("Enter the file name\n");;
    scanf("%s",&Uname);
   
    int flag=0;
      while( fscanf(fptr,"%s %d",&chare,&id)!=-1)
      {
             
      }
           // printf("flag%d",flag);
      
    printf("flag%d",flag);
     if(flag==1)
     {
        printf("Found ...\n");
     }else{
        printf("Not fount\n");
     }

      ret=fclose(fptr);
     if(ret==0)
      printf("File secsfuley close\n\n");
    else{
        printf("file not secsefuleey close...\n");
    }
}