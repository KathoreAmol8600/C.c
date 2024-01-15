 #include<stdio.h>
 void main()
 {
//  char a='\0';
//  int *b=NULL;
 printf("%d",a);
 printf("%d",b);
    gets(str);
    // int len=0;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        // if(str[i]>=48&&str[i]<=57)
        if(str[i]>='0'&&str[i]<='9')
        {
            count=count+(str[i]-48);
        }
    }
    printf("%d",count);
 }