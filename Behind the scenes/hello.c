#include <stdio.h>
#define hello 120
#define add(a,b) a+b+a

int main()
{
	int a=20 , b=10;
	printf("%s" , "Hello World\n");
	printf("Value of hello is %d\n" , (hello+a));
	printf("A+b is %d\n" , add(a,b));
	printf("\n");

	printf("Current File :%s\n", __FILE__ );
   	printf("Current Date :%s\n", __DATE__ );
   	printf("Current Time :%s\n", __TIME__ );
   	printf("Line Number :%d\n", __LINE__ );
	return 0;
}
