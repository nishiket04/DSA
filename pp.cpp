#include <iostream>
using namespace std;

int main() {
    int t;
    while(t--){
        int ts,n,sum,s=0,p=0,k=0;
        cin >> ts >> n >> sum;
        while(s<sum && p<ts){
            s=s+n;
            p++;
        }
        for(int i=1;i<=p;i++){
            k=k+n*n;
        }
        cout << k << endl;
    }
    return 0;
}
