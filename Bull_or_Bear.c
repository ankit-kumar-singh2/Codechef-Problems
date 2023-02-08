#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y>x){
	        printf("PROFIT\n");
	    }else if(y==x){
	        printf("NEUTRAL\n");
	    }else{
	        printf("LOSS\n");
	    }
	}
	return 0;
}

