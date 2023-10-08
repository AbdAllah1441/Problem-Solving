#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack<string> stk;
    stk.push("");
    int Q;
    cin >> Q;
    
    for(int i=0; i < Q; i++)
    {
        int ops;
        cin >> ops;
        string appended = "";
        int k;
        switch (ops) 
        {
            case 1:
                cin >> appended;
                stk.push(stk.top() + appended);
                break;
            case 2:
                cin >> k;
                stk.push(stk.top().substr(0,stk.top().size() - k));
                break;
            case 3:
                cin >> k;
                cout << stk.top()[k-1] << endl;
                break;
            case 4: 
                stk.pop();
                break; 
        }
    }
    return 0;
}

