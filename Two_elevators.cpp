#include <iostream>
#include <vector>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false),cin.tie(NULL);

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        
        if(abs(a-1)> abs(b-c) + abs(c-1)){
            cout << 2 << endl;
        }else if(abs(a-1)< abs(b-c) + abs(c-1)){
            cout << 1 << endl;
        } else{
            cout << 3 << endl;
        }
        }
}    