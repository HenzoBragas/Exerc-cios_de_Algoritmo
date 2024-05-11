#include <stdio.h>

int main(){
    int t= 100;
    int i=0, v[t];
    
    for( i = t-1 ; i < 0; i){
        v[i]=i;
    }
    
    for(i=t-1 ; i >= 0 ; i--){
        printf("%d ", v[i]);
    }
    
    return 0;
}
