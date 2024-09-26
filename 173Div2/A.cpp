#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int ans = 0;
    while(n > 0){
        std::string s;
        std::cin >> s;
        for(int i = 0; i < 3; i++){
            if(s[i] == '-'){
                ans--; 
                break;
            }
            if(s[i] == '+'){
                ans++; 
                break;
            }
        }
        n--;
    }
    std::cout << ans;
}
