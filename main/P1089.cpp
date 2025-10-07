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
    int month=1,spend,save=0,have=0;
    const int give=300;
    while(month<=12){
        scanf("%d",&spend);
        have=have+give-spend;
        if(have<0){
            printf("%d",-month);
            return 0;
        }
        save+=have-have%100;
        have%=100;
        month++;
    }
    printf("%.0f",1.2*save+1.0*have);
    return 0;
}