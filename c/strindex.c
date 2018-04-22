// return the left position of t in s
int strindex(char s[], char t[]){
	int i=0;
	while(s[i]!='\0') {
		if(compare(s+i,t)==0)
			return i;
		else
			i++;
	}	
	return -1;
}
// return the right position of t in s
int strindex_right(char s[], char t[]){
	int i=0;
	int pos = -1;
	while(s[i]!='\0') {
		if(compare(s+i,t)==0){
			pos = i; 
		}
			i++;
	}	
	return pos;
}
