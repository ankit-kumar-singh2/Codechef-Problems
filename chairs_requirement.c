#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y<=x)
	        printf("%d\n",x-y);
	   else{
	       printf("%d\n",0);
	   }
	}
	return 0;
}

