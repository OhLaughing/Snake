#include<ctype.h>
double atof(char s []) {
	int i=0;
	int c;
	double var;
	double power;
	int sign = (s[i] == '-') ? -1:1;
	if(s[i] == '+' ||s[i] =='-')
		i++;
	
	for(var = 0;isdigit(s[i]);i++)
		var = 10*var+(s[i] - '0');
	if(s[i]=='.')
		i++;
	for(power = 1.0;isdigit(s[i]);i++) {
		var = 10 * var + s[i] - '0';
		power *=10;
	}
	return sign*var/power;
}
