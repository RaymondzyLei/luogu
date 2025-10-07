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
    int a,b,n;
    bool c=0;
    scanf("%d",&n);
    bool p[n]={0};
    scanf("%d",&a);
    for(int i=1;i < n;i++){
        if(c)scanf("%d",&a);
        else scanf("%d",&b);
        if(abs(a-b)>=n||abs(a-b)==0){
            printf("Not jolly");
            return 0;
        }
        if(p[abs(a-b)]){
            printf("Not jolly");
            return 0;
        }
        p[abs(a-b)]=1;
        c=1-c;
    }
    printf("Jolly");
    return 0;
}