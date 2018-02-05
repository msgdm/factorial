#include<stdio.h>
int main()
{
	int a,b;
	long int c=1;
	printf("enter the number\n");
	scanf("%d",&a);
	
        for(b=1; b<=a;++b)
        {
            c*= b; 
        }
         printf("Factorial of %d = %llu", a, c);
	return 0;
}
