#include<cstdio>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int times;
    int n;
    string b;
    int status;
    scanf("%d", &times);
    
    for(int t = 1; t <= times; t++){
        status = 0;
        scanf("%d", &n);
        
        // 使用vector代替可变长度数组
        vector<unsigned long long int> a;
        a.reserve(n); // 预分配空间，提高效率
        
        for(int i = 1; i <= n; i++){
            cin >> b;
            
            if(b == "push"){
                unsigned long long int num;
                // 统一使用cin读取数据，避免输入流不同步
                cin >> num;
                a.push_back(num);
                status++;
            }
            else if(b == "pop"){
                if(status == 0){
                    printf("Empty\n");
                } else {
                    a.pop_back();
                    status--;
                }
            }
            else if(b == "query"){
                if(status == 0){
                    printf("Anguei!\n");
                } else {
                    printf("%llu\n", a.back());
                }
            }
            else {
                // 处理其他情况，如"size"命令
                printf("%d\n", status);
            }
        }
    }
    return 0;
}