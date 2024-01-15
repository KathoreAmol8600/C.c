 #include<stdio.h>
 void main()
 {
    // char ch;
    char Name[10];
    char Data;
    FILE *fptr=NULL;
    printf("Enter thr Fielname..\n");        // enter file name that want you create or file have some text in int from
    scanf("%s",&Name);
    fptr=fopen(Name,"w");
    if(fptr!=NULL)
    printf("Secssefuley oppan\n");
    else
    printf("not Secssefuly open\n");
    
    printf("Enter data");
    do{
        scanf("%c",&Data);
        if(Data=='@')                           // whwn if you stop Enter data than Enter @
        {
            break;
        }
        fputc(Data,fptr);
    }while(1);
    
   fclose(fptr);
   
 }