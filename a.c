#include <stdio.h>

void main(){
	int a=1,b=2,t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}