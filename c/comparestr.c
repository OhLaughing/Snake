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
