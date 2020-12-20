#include<stdio.h>

dequeue();
enqueue(int);

int Queue[5];
int size=5;
int front=0,rear=0,count=0;
int main(){
	enqueue(41);
	enqueue(417);
	enqueue(40);
	enqueue(47);
	enqueue(4);
	enqueue(17);
	enqueue(82);

	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

	enqueue(17);
	enqueue(82);

	dequeue();
	return 0;
}

enqueue(int data){
	if(rear<size & count<=5){
		Queue[rear]=data;
		rear=(rear+1)%5;
		count=count+1;
	}else
		printf("%d -Queue Overflow\n",data);

}
dequeue(){
	if(front<size & count>1){
		printf("%d ",Queue[front]);
		front=(front+1)%5;
		count=count-1;
	}else
		printf("\nQueue Underflow");
}
