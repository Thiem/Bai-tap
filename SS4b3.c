#include <stdio.h>
#include <stdlib.h>

int main(){
	int d,r,p,s;
	printf ("Chieu dai:");
	scanf ("%d",&d);	
	printf ("Chieu rong:");
	scanf ("%d",&r);	
	p = (d+r)*2;
	s = d*r;
	printf ("\nChu vi hinh chu nhat la: %d",p);
	printf ("\nDien tich hinh chu nhat la: %d",s);
	return 0;
}
