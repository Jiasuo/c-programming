#include <stdio.h>

void sayHello(void){
	printf("Hello I'm a function declared outside main()\n");
}

int main(){
	sayHello();
	return 0;
}

