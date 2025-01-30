#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, c;
	printf("\nEnter any three different numbers: ");
	scanf("%d, %d, %d", &a, &b, &c);
	if(a>b&&a>b){
		printf("%d is the greatest number\n", a);
	}
	else if(b>a&&b>c){
		printf("%d is the greatest number\n", b);
	}
	else if(c>a&&c>b){
		printf("%d is the greatest number\n", c);
	}
	else{
		printf("PLease enter different numbers!\n");
	}
	// getch();
	return 0;
}
