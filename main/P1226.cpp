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
long long quickmi(long long base,long long power,long long mod){
    long long ans=1;
    while(power>0){
        base%=mod;
        if(power&1){
            ans*=base;
            ans%=mod;
        }
        base*=base;
        power>>=1;
    }
    return ans;
}
int main(){
    long long a,b,p;
    scanf("%lld%lld%lld",&a,&b,&p);
    printf("%lld^%lld mod %lld=%lld",a,b,p,quickmi(a,b,p));
    return 0;
}