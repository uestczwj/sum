 #include <stdio.h>

 int a  = 0;
 int b  = 0;
 int c  = 0;

 int main(int argc, char * argv[])
 {
   	printf("please input two integer:\n");
   	scanf("%d%d", &a, &b); 
	c = a + b;
   	printf("%d + %d = %d", a, b, c);
	return 0;
 }
