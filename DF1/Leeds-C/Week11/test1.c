#include <stdio.h> 
#define TEST 1
int main(){
	int a = 3;
	#if TEST 
	char * test = "DavidMary";
	printf("%.*s", a, test);
	#endif
	return 0;
}