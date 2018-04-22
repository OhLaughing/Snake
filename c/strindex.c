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
