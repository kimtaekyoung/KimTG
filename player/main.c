#include "func1.h"
#include "func2.h"

void main(){
	printf("hello bug123\n");
	func2();
	printf("hello bug123 3\n");
	func1();
	printf("hello bug123 2\n");
	return 0;
}
