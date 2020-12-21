#include<stdio.h>

dequeue();
enqueue(int);

int Queue[5];
int size=5;
int front=0,rear=0;
int main(){
	enqueue(41);
	enqueue(417);
	enqueue(41);
	enqueue(47);
	enqueue(4);
	dequeue();
	enqueue(17);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}

enqueue(int data){
	if(rear<size){
		Queue[rear]=data;
		rear=rear+1;
	}else
		printf("Queue Overflow\n");

}
dequeue(){
	if(front<size & front<rear){
		printf("%d ",Queue[front]);
		front=front+1;
	}else
		printf("\nQueue Underflow");
}
