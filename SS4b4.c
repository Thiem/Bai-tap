#include <stdio.h>
#include <stdlib.h>

int main(){
	int h,r,v;
	printf ("Chieu cao:");
	scanf ("%d",&h);	
	printf ("Ban kinh:");
	scanf ("%d",&r);	
	v = 3,14*r*r*h;
	printf ("\nThe tich hinh tru la: %d",v);
	return 0;
}
