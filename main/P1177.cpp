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
    int n;
    long long int a[100001];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",a+i);
    }
    sort(a+1,a+n+1);
    for(int i=1;i<n;i++){
        printf("%lld ",*(a+i));
    }
    printf("%lld\n",a[n]);
    return 0;
}