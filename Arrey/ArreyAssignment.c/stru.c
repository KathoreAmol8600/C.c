#include<stdio.h>
void  main(){
	
	int q[5],front=0,rear=-1,i,MAX,choice,value;
	MAX=sizeof(q)/sizeof(q[0]);
	do{
		printf("1:INSERT\n");
		printf("2:DELETE\n");
		printf("3:DISPLAY");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			 case 1:
			 	if(rear==MAX-1){
			 		printf("Queue is full");
				 }
				 else{
				 	rear=rear+1;
				 	printf("\nEnter your value\n");
				 	scanf("%d",&value);
				 	q[rear]=value;
				 }
			 	break;
			 case 2:
			 	if((rear==-1 &&front==0)||(front==rear+1)){
			 		printf("Queu is empty");
				 }
				 else{
				 	value=q[front];
				 	front=front+1;

				 	printf("\ndeleted value is %d\n",value);
				 }
			 	break;
			 case 3:
			 	if((rear==-1 &&front==0)||(front==rear+1)){
			 		printf("Queu is empty");
				 }
				 else{
				 	for(int i=front;i<=rear;i++){
				 		printf("%d\t",q[i]);
					 }
				 }
			 	break;
			 default:
			 	printf("Wrong choice");
		}
	}while(choice!=4);
	

}