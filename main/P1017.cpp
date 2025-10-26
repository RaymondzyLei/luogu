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

int main(){
    int n,r;
    bool fu=0;
    int a[100]={0};
    scanf("%d%d",&n,&r);
    printf("%d=",n);
    if(n<0) fu=1;
    n=abs(n);r=abs(r);
    int cnt=0,tmp;
    while(n!=0){
        if(n%r==0){
            a[++cnt]=0;fu=1-fu;
            n=n/r;
            continue;
        }
        tmp=n/r;
        if(fu){
            tmp++;
            a[++cnt]=tmp*r-n;
        }
        else{
            a[++cnt]=n-tmp*r;
        }
        fu=1-fu;
        n=tmp;
    }
    for(int i=cnt;i>=1;i--){
        if(a[i]<10) printf("%d",a[i]);
        else putchar('A'+a[i]-10);
    }
    printf("(base-%d)",r);
    return 0;
}