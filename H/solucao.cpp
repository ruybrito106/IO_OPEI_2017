#include <stdio.h>
#include <cstring>

int main(){
    char in[1000001];
    scanf("%s", in);
    int l = 0;
    int r = strlen(in)-1;
    bool palindrome = true;
    while(l < r){
        if(in[l] != in[r]){
            palindrome = false;
        }
        l++; r--;
    }
    if(palindrome){
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}