#include<stdio.h>
#define size 5
struct Stack
{
	int stack[size];
	int top;
}s;
void Push(int data)
{
	if(s.top==size-1)
	{
		printf("Overflow\n");
		return;
	}
	
	s.stack[++s.top]=data;
}
int Pop(int data)
{
	if(s.top==-1)
	{
		printf("UnderFlow\n");
		return -999;
	}
	
	return s.stack[s.top--];
}
int Peek(int data)
{
	if(s.top==-1)
	{
		printf("UnderFlow\n");
		return -999;
	}
	
	return s.stack[s.top];
}
void Display()
{
	if(s.top==-1)
	{
		printf("Stack is Empty\n");
		return;
	}
	
	for(int i=s.top;i>=0;i--)
	printf("%d\n",s.stack[i]);
}

int main()
{
	int choice,data,f;
	s.top=-1;
	
	do
	{
		printf("Enter Your Choice:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter Data:");
					scanf("%d",&data)
					Push(data);
					break;
			case 2: f=Pop();
					if(f!=-999)
					printf("%d",f);
					break;
			case 3: f=Peek();
					if(f!=-999)
					printf("%d",f);
					break;
			case 4: printf("Enter Data:");
					scanf("%d",&data)
					Push(data);
					break;
		}
	}while(choice!=5);
		
}
