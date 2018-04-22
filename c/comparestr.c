//if s startswith t return 0
//else return -1
int compare(char s[], char t[]){
	int i=0;	
	while(t[i]!='\0') {
		if(t[i]!=s[i])
			return -1;
		else
			i++;
	}
	return 0;
}
#include<stdio.h>
void main() {
	char s[20];
	char t[20];
	printf("input s:");
	scanf("%s",s);
	printf("input t:");
	scanf("%s",t);

	printf("s: %s",s);
	printf("t: %s",t);

	printf("s startsWith t? %d\n", compare(s,t));
}
