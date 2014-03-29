#include <stdio.h>

void main(){
	union w {
		int a;
		char b;
	} c;
	c.a=1;
	printf("%d\n",c.b==1);
}
