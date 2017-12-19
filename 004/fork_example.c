#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int pid = fork();
	while(1){
		if (pid == 0){
			puts("child");
		}
		if (pid != 0){
			puts("parent");
		}
		sleep(1);
	}
}
