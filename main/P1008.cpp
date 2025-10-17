#include<bits/stdc++.h>
//#include<cstdio>
//#include<iostream>
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<iomanip>

//#include<vector>
//#include<list>
//#include<deque>
//#include<map>
//#include<set>
//#include<unordered_map>
//#include<unordered_set>
//#include<stack>
//#include<queue>
//#include<array>

//#include<algorithm>
//#include<functional>
//#include<iterator>
//#include<cmath>
//#include<math.h>
//#include<numeric>
//#include<string>
//#include<cstring>
//#include<memory>
//#include<new>
//#include<random>
//#include<bitset>
using namespace std;
int a,b,c,status,x,y,z;
int tmp[7];
void solve(){
    tmp[0]=0;
    for(int i=1;i<=6;i++){
        tmp[i]=tmp[i-1]+1;
        while(tmp[i]==a||tmp[i]==b||tmp[i]==c) tmp[i]++;
    }
    for(int a1=1;a1<=6;a1++){
        for(int a2=1;a2<=6;a2++){
            if(a2==a1) continue;
            for(int b1=1;b1<=6;b1++){
                if(b1==a1||b1==a2) continue;
                for(int b2=1;b2<=6;b2++){
                    if(b2==b1||b2==a2||b2==a1) continue;
                    for(int c1=1;c1<=6;c1++){
                        if(c1==b2||c1==b1||c1==a2||c1==a1) continue;
                        for(int c2=1;c2<=6;c2++){
                            if(c2==c1||c2==b2||c2==b1||c2==a2||c2==a1) continue;
                            x=a*100+tmp[a1]*10+tmp[a2];
                            y=b*100+tmp[b1]*10+tmp[b2];
                            z=c*100+tmp[c1]*10+tmp[c2];
                            if(x*2==y&&x*3==z){
                                cout<<x<<" "<<y<<" "<<z<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
int main(){
    for(int i=1;i<=7;i++){
        for(int j=i+1;j<=8;j++){
            for(int k=j+1;k<=9;k++){
                a=i;b=j;c=k;
                solve();
            }
        }
    }
    return 0;
}