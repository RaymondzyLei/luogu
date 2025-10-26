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
bool huzhi(int a,int b){
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0)return 0;
    }
    return 1;
}
int solve(int n){
    int ans=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0&&huzhi(i,n/i)){
            ans++;
        }
    }
    return 2*ans;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<=0||y<=0){
        printf("0");
        return 0;
    }
    if(x==y){
        printf("1");
        return 0;
    }
    if(x*(y/x)!=y){
        printf("0");
        return 0;
    }
    printf("%d",solve(y/x));
    return 0;
}