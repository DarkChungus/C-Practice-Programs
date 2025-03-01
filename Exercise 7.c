#include <stdio.h>

int main(){
	int a = 1, b = 0;
	int n;
	fflush(stdout);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i==n){
			printf("%d. ", b);
		}
		else{
			printf("%d, ", b);
		}
		int c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
