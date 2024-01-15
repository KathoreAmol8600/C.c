 #include<stdio.h>
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
 }