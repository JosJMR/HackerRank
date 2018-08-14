#include <stdio.h>
#include <stdlib.h>

int main() 
{
	printf("Hello, World!");
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("\n%s", s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}