#include<stdio.h>

/*1から50までの数字の中で、3で割り切れる数字を出力するプログラム。
ただし、1から25まではforループ、26から50まではwhileループを使用*/

int main(){
    int i, k = 1;

    for(i = 1; i <= 25 ; i++){
        if(i == 3*k){
            printf("%d\n",i);
            k++;
        }
    }
    while(i <= 50){
        if(i == 3*k){
            printf("%d\n",i);
            k++;
        }
        i++;
    }
    return 0;
}