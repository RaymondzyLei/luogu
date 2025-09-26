#include<bits/stdc++.h>
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
    int l,m,a,b;
    scanf("%d%d",&l,&m);
    bool c[l+1]={0};
    for(int i=1;i<=m;i++){
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++){
            c[j]=1;
        }
    }
    int count=0;
    for(int i=0;i<=l;i++){
        count += c[i];
    }
    printf("%d",l+1-count);
    return 0;
}