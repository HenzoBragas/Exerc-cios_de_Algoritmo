#include <stdio.h>
int main(){
	int i = 0;
	
	for(i=1; i<=100 ; i++){
		if(i != 100){
			if(i%2 == 0 )
			printf("%d - ", i);
		}		
	 else 
		printf("%d ", i);
}
	return 0;
}
