#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
    int n = stoi(argv[1])+1;
    int q = stoi(argv[2])+1;
    printf("%d %d\n", n, q);
    for(int i = 0; i < n; i++){
        if(i != 0) printf(" ");
        printf("%d", (rand()%100)+1);
    }
    printf("\n");
    for(int i = 0; i < q; i++){
        int k = (rand()%2)+1;
        printf("%d ", k);
        if(k == 1){
            printf("%d\n", (rand()%n)+1);
        } else {
            int l = (rand()%n)+1;
            int r = (rand()%n)+1;
            if(l > r) swap(l, r);
            printf("%d %d\n", l, r);
        }
    }
    return 0;
}