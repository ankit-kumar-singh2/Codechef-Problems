#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,h;
	    scanf("%d %d",&x,&h);
	    if(x>=h){
	        printf("YES\n");
	    }else  
	        printf("NO\n");
	}
	return 0;
}

