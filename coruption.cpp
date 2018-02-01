#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main(){
    int n , i , a;
    double proc , tmpa , tmpb;
    vector<double> v;
    cin >> n >> proc;
    
    for (i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    while (v.size()!=0){
        sort(v.begin() , v.end());
        tmpa = v[0];
        tmpb = v[v.size()-1];
        cout << tmpa << " "<<tmpb<<endl;
        v.erase(v.begin());
        v.pop_back();
        que.push((tmpa+tmpb)*(1-(proc/100)));
    }
    cout << v[0]<<endl;
}
