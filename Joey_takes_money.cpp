#include <iostream>

void func(int n){
    long long prod{1};
    for(int i =0; i<n; i++){
        int a;
        std::cin >> a;
        prod = prod*a;
    }
    prod = prod + n -1;
    std::cout << prod*2022 << "\n";
}


int main(){
 
    int t;
    std::cin >> t;
    for(int j = 0; j<t; j++){
        int n;
        std::cin >> n;
        func(n);
    }
    return 0;
}
