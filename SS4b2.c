#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,d,e;
	float c,f,z;
	a=10;
 	b=7;
	c=15.75;
	d=4;
	e=2;
	f=5.6;
//	z = a*b+(c/d)-e*f;
	z = a*b;
	z = z + (c/d);
	z = z - e*f;
	printf ("\n Ket qua la : %d",z);
	return 0;
}
