#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    vector<int> stars(n, 0);
    for(int i = 0; i < n; i++){
        scanf("%d", &stars[i]);
    }
    for(int i = 0; i < q; i++){
        int k;
        scanf("%d", &k);
        if(k == 1){
            int x;
            scanf("%d", &x);
            stars[x-1]++;
        } else {
            int l, r;
            scanf("%d %d", &l, &r);
            int k = 0;
            for(int a = l-1; a <= r-1; a++){
                k += stars[a];
            }
            printf("%d\n", k);
        }
    }
    return 0;
}