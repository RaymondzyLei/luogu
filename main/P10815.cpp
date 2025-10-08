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
#ifdef __unix__
#define getcharq getchar_unlocked
#define putcharq putchar_unlocked
#else
#define getcharq _getchar_nolock
#define putcharq _putchar_nolock
#endif
using namespace std;
//快读
long long getit(){
    bool f=0;
    long long ans=0;
    char c;
    c=getcharq();
    while(c<'0'||c>'9'){
        if(c=='-') f=1;
        c=getcharq();
    }
    while(c>='0'&&c<='9'){
        ans=(ans<<1)+(ans<<3)+c-'0';
        c=getcharq();
    }
    return f?-ans:ans;
}
void printit(long long a){
    if(a==0)return;
    if(a<0){
        putcharq('-');
        printit(-a);
        return;
    }
    if(a>9) printit(a/10);
    putcharq(a%10+'0');
    return;
}
int main(){
    long long n,tmp,ans=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        ans+=getit();
    }
    printit(ans);
    return 0;
}