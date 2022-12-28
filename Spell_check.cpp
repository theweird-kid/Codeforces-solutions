#include <iostream>

using namespace std;
#define fastIO ios_base::sync_with_stdio(false),cin.tie(NULL);

bool check(string s){
    if(s.find("T") !=string::npos && s.find("i") !=string::npos && s.find("m") !=string::npos && s.find("u") !=string::npos && s.find("r") !=string::npos ){
        return true;
    } else{
        return false;
    }
}



int main(){
    int t;
    cin >> t;

    string name = "Timur";

    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        if(n !=5){
            cout << "NO" << endl;
        } else{
           bool sol= check(s);
          
           if(sol ==true){
            cout << "YES" << endl;
           } else {
            cout << "NO" << endl;
           }
        }
        
        }
}