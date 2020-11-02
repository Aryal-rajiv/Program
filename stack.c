//to check overflow and underflow in stack
#include<stdio.h>
#include<conio.h>

int element,stack[5],top=0;



void main(){
	
	
	top =3;
	if (top<5)
	{ 
		printf("Enter the element we need to input");
		scanf("%d",element);
		stack[top]=element;
		top++;
	}
	else 
		printf("Stack is Overflow.");
	
	if (top>0)
	{
		top--;
		element = stack[top];
		return element;
	}
	else
		printf("Underflow");
		
	getch();
	
}




