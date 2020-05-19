 #include <stdio.h>

 int a  = 0;
 int b  = 0;
 int c  = 0;

 int add(int a, int b)
 {
      return a + b;
 }


 int mul(int a, int b)
 {
      return a * b;
 }

 int sub(int a, int b)
 {
      return a - b;
  }

 int main(int argc, char * argv[])
 {
   	printf("please input two integer:\n");
   	scanf("%d%d", &a, &b); 
	c = add(a, b);
       c = mul(a, b);
   	printf("%d + %d = %d", a, b, c);
	return 0;
 }
