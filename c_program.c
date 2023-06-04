#include <stdio.h>

int main()
{
	int m , n;
	m = 2;
	printf("%d\n",m);
	// prints out an integer
	
	float v ,c;
	v = 2.3; // decimal values can be 5-6 degits
	c = 3.4;
	printf("%f\n",v+c); // %f is used to specify the type

	double r,t; // the normal float but eith even more decimal places
	r = 24.454636;
	t = 4.44534634646;
	printf("%lf\n",r+t); // %lf is used to specify thej type of the values

	char b , z; // char values - chracter 
	b = 'f'; // only one character can be showed
	z = 'g';
	printf("%c\n",b);

	char q[20]="Hello, world!";// define that q has 20 chars
	printf("%s\n",q); // %s is used to specify the char to be printed as sttring

}
