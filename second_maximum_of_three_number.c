#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(x>y && x>z){
	        if(y>z){
	            printf("%d\n",y);
	        }else{
	            printf("%d\n",z);
	        }
	    }else if(y>z && y>x){
	        if(z>x){
	             printf("%d\n",z);
	        }else{
	            printf("%d\n",x);
	        }
	    }else if(x>y){
	         printf("%d\n",x);
	        }else{
	            printf("%d\n",y);
	        }
	    }
	return 0;
}

