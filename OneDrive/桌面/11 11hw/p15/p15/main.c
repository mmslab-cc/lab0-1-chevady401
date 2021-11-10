#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);

int main() {
	int n1, n2, n3;
	printf("enter three integer   ");
	scanf_s("%d %d %d",&n1,&n2,&n3);
	printf("masimum is :  %d\n", maximum(n1, n2, n3));
}

int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max) { max = y ; }
	if (z > max) { max = z; }

	return max;
}