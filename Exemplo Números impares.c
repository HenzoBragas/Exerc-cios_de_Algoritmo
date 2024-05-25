#include <stdio.h>
int main(){
	int i = 0;

	for(i=1; i<=100 ; i++){
		if(i <= 99){
			if(i%2 == 1 ){
				printf("%d - ", i);
			}
		}
	}
i = i-2;
printf("%d", i);
return 0;
}
