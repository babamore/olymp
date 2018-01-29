#include <iostream>

using namespace std;

int main(){
    int n , m ,x ,y , i , j , ot;
    bool f = true;
    cin >> m >> n >> x >> y;
    int o[1000][1000];
    for (i=1;i<=n;i++){
        for (j=1;j<=m;j++){
            o[i][j]=1;
            
        }
    }
    i = 0;
    ot = 0;
    while (f==true){
        i++;
        if (o[x][y+i]==1){
            ot+=i;
            x+=i;
        }else{break;}
                                cout << o[x][y+i]<<endl;
        if (o[x-i][y]==1){
            ot+=i;
            j-=i;
        }else{break;}
                                cout << o[x-i][y]<<endl;
        i++;
        if (o[x][y-i]==1){
            ot+=i;
            x-=i;
        }else{break;}
                                cout << o[x+i][y]<<endl;
        if (o[x+i][y]==1){
            ot+=i;
            j+=i;
        }else{
            break;}
    }
    cout << ot+1;
    return 0;
}
