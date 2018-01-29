#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


bool Pld(long long x){      //proverka na palin
    string y = to_string(x);
            string z = "";
            int len = y.length();
            for (int i = 0; i < len; i++)
            {
                z = y[i] + z;
            }
            if (y == z) return true;
            return false;
}
long long perevod(long long  x){  //perevod string v long long
    string y = to_string(x);
            string z = "";
            int len = y.length();
            for (int i = 0; i < len; i++)
            {
                z = y[i] + z;
            }
            return atoll(z.c_str());
}
int main(){
    long long  n, ot ;
    cin >> n;
    ot = 0;
    for (int i = 0; i < 10000; i++)
            {
                if (!Pld(n))
                {
                    n = n + perevod(n);
                    ot++;
                }
                else break;
            }
    cout << ot;
    return 0;
}
