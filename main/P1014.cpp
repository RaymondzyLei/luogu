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
    scanf("%d",&n);
    int a=(int)sqrt(2*n)-1;
    int b=a*(a+1)/2;
    if(a%2){
        if(n-b<=a+1){
            printf("%d/%d",n-b,a+1-(n-b-1));
        }
        else{
            printf("%d/%d",a+2-((n-b)-a-1-1),(n-b)-a-1);
        }
    }
    else{
        if(n-b<=a+1){
            printf("%d/%d",a+1-(n-b-1),n-b);
        }
        else{
            printf("%d/%d",(n-b)-a-1,a+2-((n-b)-a-1-1));
        }
    }
    return 0;
}