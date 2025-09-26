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
    double n,sum=0;
    scanf("%lf",&n);
    //printf("%lf",n);
    for(int i=1;;i++){
        sum += 1.0/i;
        if(sum>n){
            printf("%d",i);
            return 0;
        }
    }
    
    return 0;
}