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
int b[15]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};
void solve(int a){
    int n=a;
    for(int i=14;i>=0;i--){
        if(n>=b[i]){
            if(n!=a)printf("+");
            if(i==1)printf("2");
            else if(i==0)printf("2(0)");
            else{
                printf("2(");
                solve(i);
                printf(")");
            }
            n-=b[i];
        }
        if(n==0)break;
    }
    return ;
}
int main(){
    int a;
    scanf("%d",&a);
    solve(a);
    return 0;
}