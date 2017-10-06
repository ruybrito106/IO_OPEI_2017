#include <stdio.h>
#include <string>
#include <algorithm>
#include<ctime>

using namespace std;

int main(int argc, char *argv[]){
    int n = stoi(argv[1])+1;
    int p = stoi(argv[2]);
    srand(n);
    string str;
    if(p){
        for(int i = 0; i < n; i++){
            str += 'a'+(rand()%26);
        }
    } else {
        for(int i = 0; i < n/2; i++){
            str += 'a'+(rand()%26);
        }
        if(n%2 == 1) str += 'a'+rand()%26;
        for(int i = n/2-1; i >= 0; i--){
            str += str[i];
        }
    }
    printf("%s\n", str.c_str());
}