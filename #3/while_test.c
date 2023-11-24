#include<stdio.h>

int main(){
    int count = 1;
    int i = 1;
    while(count <= 10){
        if(count == 2*i){
            printf("%d\n", count);
            i++;
        }
        count++;
    }
    return 0;
}