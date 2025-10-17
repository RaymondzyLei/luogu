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
int k[22]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765};
int main(){
    int a,n,m,x,b;
    scanf("%d%d%d%d",&a,&n,&m,&x);
    if(n==x){
        printf("0");
        return 0;
    }
    if(x==n-1){
        printf("%d",m);
        return 0;
    }
    if(x==1||x==2){
        printf("%d",a);
        return 0;
    }
    int cnta=2,cntb=0;
    for(int i=0;i<=n-1-4;i++) cnta+=k[i];
    for(int i=0;i<=n-1-3;i++) cntb+=k[i];
    b=(m-a*cnta)/cntb;
    cnta=2;cntb=0;
    for(int i=0;i<=x-4;i++) cnta+=k[i];
    for(int i=0;i<=x-3;i++) cntb+=k[i];
    printf("%d",a*cnta+b*cntb);
    return 0;
}
// a b a+b a+2b 2a+3b 3a+5b 5a+8b 8a+13b 
// 0 b  b   a+b  a+2b 2a+3b 3a+5b 5a+8b
// a 0  a   b     a+b  a+2b 2a+3b 3a+5b
// a a  2a  2a+b  3a+2b 4a+4b 6a+7b 9a+12b