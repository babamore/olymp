#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;

bool perevod(int x){
            string y;
            y = to_string(x);
            string z = "";
            int len = y.length();
            for (int i = 0; i < len; i++)
            {
                z = y[i] + z;
            }
            //cout << z << endl;
            return atoi(z.c_str());
}

int prost(int x){
    //cout << x << endl;
            if ((x == 0) || (x == 1)) return false;
            if ((x == 2) || (x == 3)) return true;
            if (x%2 == 0) return false;
            int kok;
            kok =  (int) sqrt(x) + 1;
            //cout << (int) sqrt(x)+1<<endl;
            for (int i = 3; i <kok; i = i + 2)
            {
                if (x%i == 0) return false;
            }
            return true;   
}
int main(){
    int a , b , i ,ot;
    cin >> a >> b;
    ot = 0;
    if (a>b){
        ot = a;
        a = b;
        b = ot;
        ot = 0;
    }
    for ( i = a; i<=b; i++){
         if (prost(i))
                {
                    //cout << prost(perevod(i))<<endl;
                    if (prost(perevod(i))){ot++;}
                }
    }
    cout << ot;
    return 0;
}
