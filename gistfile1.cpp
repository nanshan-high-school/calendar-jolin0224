#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cout << "請輸入餅乾 巧克力 蛋糕的數量\n";
    cin >> i >> j >> k;
    
    while(i >= 10 && k >= 2){
        j++;
        i -= 10;
        k -= 2;
    }
    cout << i << "個餅乾 " << j << "盒巧克力 " << k << "個蛋糕\n";
    return 0;
}
