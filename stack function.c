#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void peek();
void display();


void push()
{

		int x;
if(top==size-1)
	{
	printf("Stack overflow"	);
	
	}
		else
	{	
		top++;
		stack[top]=x;
	}
	
	


void pop()
{    
	 	int item;
	 	 if(top==-1)
	  {
	  printf("Underflow");
	  
	  
	  }
	  
	  else
	  {
	  	item=stack[top];
	  	top--;
	  	printf("%d",item);
	  	
	  	
	  }
	  
}


void peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
		
	}
	else
	
	{
		printf("%d",stack[top])
	
	}
}

void(display)
{
	int i;
	for(i=0;i>=0;i--)
	{
		
		printf("%d",stack[i]);
	}


}

void main()
{
int option;

do
printf("Enter your option:1.push 2.pop 3.peek 4.display");
scanf("%d",&option);
switch(option)
{
	case 1:push();
	       break;
	case 2:pop();
	       break;
	case 3:peek();
	       break;
	       
    case 4:display();
    
	        default:printf("Invalid choice");

}

	while(option!=0);
	
}

