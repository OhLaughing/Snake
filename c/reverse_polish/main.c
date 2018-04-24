#include<stdio.h>
#include<string.h>
void push(double );
double pop();
double atof( char *);
void main(){
	char *s[]= {
	"1",
	"2",
	"+",
	"9.2",
	"*",
	""
	};	
	int j=0;
	char * c;
	while(strlen(c = s[j])!=0) {
		if(*c=='*') {
			push(pop() * pop());
		}
		else if(*c=='+') {
			push(pop() + pop());
		}
		else if(*c=='-') {
			double v2 = pop();
			push(pop() - v2);
		}
		else if(*c=='/') {
			double v2 = pop();
			if(v2 == 0.0 ) 
				printf("zero divider");
			else
				push( pop() / v2);
		} else
			push(atof(s[j]));
		printf("%s\n", s[j]);
		j++;
	}
	printf("result: %f\n", pop());
}
