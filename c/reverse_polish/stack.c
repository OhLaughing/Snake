#include<stdio.h>
int NUM = 100;
double stack[100];
int ps = 0;
void push(double a) {
	if(ps < NUM) {
		stack[ps++] = a;
	} else
	printf("stack is full \n");
}
double pop() {
	if(ps>0)
		return stack[--ps];
	else
		printf("stack is empty\n");

	return 0;		
}
