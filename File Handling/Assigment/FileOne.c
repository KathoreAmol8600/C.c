#include<stdio.h>
int main(){

        FILE *f;
        //char fname[10];
        // printf("Enter File Name:");
        // scanf("%s",&fname);
        // f = fopen(fname,"w");
        // if(f!=NULL){
        //     printf("Yes");
        // }else{
        //     printf("No");
        // }
        char mes[100];
        f = fopen("C:\\Teck Giri\\C programing\\C Languae\\File Handling\\Assigment\\test.txt","a");
        printf("Enter message:");
        scanf("%s",&mes);
        fputs(mes,f);
        fclose(f);
    return 0;
}