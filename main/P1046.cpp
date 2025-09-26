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
    int a[11],count=0;
    for(int i=1;i<=10;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[0]);
    for(int i=1;i<=10;i++){
        if(a[i]<=a[0]+30) count++;
    }
    printf("%d",count);
    return 0;
}