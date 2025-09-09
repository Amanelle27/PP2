#include <iostream>
#include <stack>

using namespace std;
int sum(stack <int> stk){
    int sum = 0;
    while (!stk.empty()){
        sum+=stk.top();
        stk.pop();
    }
    return sum;
}

int main () {
    int n;
    cin >> n;
    stack <int> stk;
    for (int i = 0; i < n; i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 1){
            int a;
            cin >> a;
            stk.push(a);

        }else if (cmd == 2 && !stk.empty()){
            stk.pop();
            
        }else if (cmd == 3){
            cout<<sum(stk) <<endl;
        }
    }


   
    
    return 0;
}