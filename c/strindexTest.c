#include<stdio.h>
void main() {
	char s[20];
	char t[20];
	printf("input s:");
	scanf("%s",s);
	printf("input t:");
	scanf("%s",t);

	printf("s: %s\n",s);
	printf("t: %s\n",t);

	printf("index of t in s: %d\n", strindex(s,t));
	printf("index of t in s: %d\n", strindex_right(s,t));
}
