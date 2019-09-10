#include <stdio.h>
int main(){
	
	int digit = 31;
	int bin,hex,octal;
	int sumb[16] = {0} ;
	int i=0;
	
	do{
		sumb[i] = digit%2;
		digit /= 2;
		printf("sum =%d\n",sumb[i]);
		printf("di =%d\n",digit);
		printf("i =%d\n",i);
		i++;
	}
	 while(digit>2 );
	 
    for(i=8;i>=0;i--){
	    printf("%d",sumb[i]);
	}
	
	
	return 0;
}
