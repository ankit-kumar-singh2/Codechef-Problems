#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    int m;
	    scanf("%d %d",&n,&m);
	    int result; 
	    result=(n*5)+(m*7);
	    printf("%d\n",result);
	}
	return 0;
}

