#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n > 0){
        int x = 0;
        for(int i = 0; i < 3; i++){
            int a;
            scanf("%d", &a);
            x += a;
        }
        if(x >= 2){
            ans++;
        }
        n--;
    }
    printf("%d\n", ans);
}
