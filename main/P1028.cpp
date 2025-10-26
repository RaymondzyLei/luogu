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
    long long a[1001]={0};
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)a[i]=1;
    for(int i=2;i<=n/2;i++){
        for(int j=1;j<=i/2;j++){
            a[i]+=a[j];
        }
        //printf("%lld ",a[n]);
    }
    int ans=1;
    
    for(int i=1;i<=n/2;i++)ans+=a[i];
    printf("%lld",ans);
    return 0;
}