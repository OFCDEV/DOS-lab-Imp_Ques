#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
//Func to check prime or not
int isPrime(int n){
	if(n <=1){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
//func for fibonacci series
void genarateFibo(int length, int *fibonacci){
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for (int i=2; i< length;i++){
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
	}
}
int main(){
	int length =10;
	int fibonacci[length];
	pid_t child;
	child = fork();
	if(child < 0){
		printf("Child doesnt create");
	}else if(child == 0){
		printf("Child Process with PID %d\n",getpid());
		genarateFibo(length,fibonacci);
		printf("Fibonacci series:");
		for(int i=0; i< length;i++){
			printf("%d",fibonacci[i]);
		}
		printf("\n");
		printf("Prime fibo nums:");
		for(int j=0;j<length;j++){
			if(isPrime(fibonacci[j])){
					printf("%d at position %d\n",fibonacci[j],j+1);
					}
		}
	}
	else{
		wait(NULL);
		printf("Parent process with PID %d\n",getpid());
		return 0;
	}
}
