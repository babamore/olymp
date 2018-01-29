#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    int i,f = 0;
    for (i=3;i<sqrt(n)+1;i++){
        if (n%i==0 && n!=i*i){
            cout << "1 "<<i<<" "<<n/i;
            f = 1;
            break;
        }
    }
    if (f==0){
        cout << "0 0 0";
    }
    return 0;
}
