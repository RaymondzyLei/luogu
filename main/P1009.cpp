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
const long long MAX=50,MAXNUM=1000000000;
using namespace std;
typedef struct bignum{
    long long num[MAX];
    int len;
}bginum;
void output(bignum a){
    printf("%lld",a.num[a.len]);
    for(int i=a.len-1;i>=1;i--){
        printf("%09lld",a.num[i]);
    }
}
bignum zero(){
    bignum a;
    for(int i=0;i<MAX;i++){
        a.num[i]=0;
    }
    a.len=1;
    return a;
}
bignum one(){
    bignum a;
    for(int i=0;i<MAX;i++){
        a.num[i]=0;
    }
    a.num[1]=1;
    a.len=1;
    return a;
}
bignum addlonglong(bignum a,long long b){
    a.num[1]+=b;
    for(int i=1;i<=a.len;i++){
        if(a.num[i]<MAXNUM) break;
        a.num[i+1]+=a.num[i]/MAXNUM;
        a.num[i]%=MAXNUM;
        if(i==a.len) a.len++;
    }
    return a;
}
bignum timelonglong(bignum a,long long b){
    for(int i=1;i<=a.len;i++){
        a.num[i]*=b;
    }
    for(int i=1;i<=a.len;i++){
        a.num[i+1]+=a.num[i]/MAXNUM;
        a.num[i]%=MAXNUM;
        if(i==a.len&&a.num[i+1]>0) a.len++;
    }
    return a;
}
bignum add(bignum a,bignum b){
    a.len=max(a.len,b.len);
    for(int i=1;i<=a.len;i++){
        a.num[i]+=b.num[i];
    }
    for(int i=1;i<=a.len;i++){
        if(a.num[i]>=MAXNUM){
            a.num[i+1]+=a.num[i]/MAXNUM;
            a.num[i]%=MAXNUM;
            if(i==a.len) a.len++;
        }
    }
    return a;
}
int main(){
    long long n=0;
    scanf("%lld",&n);
    bignum ans=zero(),a=one();
    for(long long i=1;i<=n;i++){
        a=one();
        for(long long j=1;j<=i;j++){
            a=timelonglong(a,j);
        }
        ans=add(ans,a);
    }
    output(ans);
    return 0;
}