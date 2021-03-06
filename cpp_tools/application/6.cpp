#include <iostream>
#include <list>
#include <cmath>

using namespace std;

class separate {
    public :
    int a,num;
    int stage1(int a);
    int stage2(int a, int b);
    int stage3(int a, int b);
};

int separate::stage1(int a) {
    // a is the number
    // num is the digits
    int num =0;
    while(a > pow(10,num)) {
        num = num+1;
    }
    cout << "num is : " << num << endl;
    return num;
}

int separate::stage2(int a, int b) {
    separate sp;
    b = sp.stage1(a);
    int n,m,l; n = 0; m = 0; l=0;
    // 진수 결정
    cout << "what is the value of l? "; cin >>l;
    while(n < b) {
        int c;
        c = a % 10;
        a = a - c;
        a = a/10;
        m = m + c * pow(l,n);
        n ++;
        cout << c <<endl;
    }
    // 10진수 값 도출 
    cout << m << endl;
    return 0;
}

int main() {
    separate sp;
    int a; cout << "a is : "; cin >> a;
    // 1234
    // 4, 3, 2, 1
    int b;
    b = sp.stage1(a);
    sp.stage2(a, b);
}
