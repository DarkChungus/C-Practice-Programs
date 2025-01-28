// NOTE: Works only for small factorial numbers.

#include <stdio.h>
#include <conio.h>

int factorial(int n){
	int factorial = 1;
	if(n==0){
		return 1;
	}
	else{
		for(int i=1; i<=n; i++){
				factorial *= i;
			}
		return factorial;
	}
}

int main(){
	int userInput;
	printf("Enter the number you want to see the factorial of: ");
	fflush(stdout);
	scanf("%d", &userInput);
	printf("The factorial of the number is %d.", factorial(userInput));
	return 0;
}
