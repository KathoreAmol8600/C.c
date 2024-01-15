#include<stdio.h>
#include<string.h>
void Rivrs_string(char str[])
{
    int count=0;
    char temp='\0';

    for(int i=0;str[i]!='\0';i++)
    {    
              count++;
    }

    int count1=count/2;

    for(int i=0;i<count1;i++)
    {    
        temp=str[i];
        str[i]=str[count-1];
        str[count-1]=temp;
        count--;
    }
    printf("String is %s",str);
}

    // void arrarev(char a[],int l ){
    // int mid=l/2;
    // int end=l-1;
    // for(int i=0;i<mid;i++){
    //     char temp=a[i];
    //     a[i]=a[end];
    //     a[end]=temp;
    //     end--;
    // }
    // for(int i=0;i<l;i++){
    //     printf("%c",a[i]);
    // }

void main()
{
    char str[20];
    gets(str);
    Rivrs_string(str);
}