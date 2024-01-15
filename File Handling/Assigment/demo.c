#include<stdio.h>
void main()
{
  int ret=0;
  FILE *fptr=NULL;
  char Name[20];
  char che;
  printf("Enter thr File name...\n");
  scanf("%s",&Name);
  fptr=fopen(Name,"w");
  if(fptr!=NULL)
  {
    printf("Secseesfuli open....\n");
  }else{
    printf("Secseesfuli Not  open....\n");
  }
 printf(" Enterd Data file \n");
  do{
    scanf("%c",&che);
    if(che=='@')
    {
      break;
    }
  fputc(che,fptr);
  }while(1);
  printf("Data seccsefuley Enterd file \n");
   
  ret=fclose(fptr);
  // printf("%d",ret);
  if(ret==-1)
  printf("Secseesfuli Not  close....\n");
  else
  printf("Secseesfuli  close....\n");

 fptr=fopen(Name,"r");
  if(fptr!=NULL)
  {
    printf("Secseesfuli open for read....\n");
  }else{
    printf("Secseesfuli Not  open for read....\n");
  }
  printf(" read Data file");
  char data;
  do{
    data=fgetc(fptr);
    if(data==-1)
    {
      break;
    }
    printf("%c",data);
  }while(1);
  printf("Data seccsefuley read file \n");
}