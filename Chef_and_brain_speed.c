#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y;
	scanf("%d %d",&x,&y);//x=threshold and y=chef currently working
	if(y>x){
	    printf("YES");
	}else{
	    printf("No");
	}
	return 0;
}

