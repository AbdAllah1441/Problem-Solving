#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <stack>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack<int> stkEnq, stkDeq;  
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int n;
            cin >> n;
            stkEnq.push(n);
        }
        else if (query == 2)
        {
            if (!stkDeq.empty())
            {
                stkDeq.pop();
            }
            else 
            {
                while (!stkEnq.empty()) 
                {
                    stkDeq.push(stkEnq.top());
                    stkEnq.pop();
                }
                stkDeq.pop();
            } 
        }
        else if (query == 3)
        {
            if (!stkDeq.empty())
            {
                cout << stkDeq.top() << endl;
            }
            else 
            {
                while (!stkEnq.empty()) 
                {
                    stkDeq.push(stkEnq.top());
                    stkEnq.pop();
                }
                cout << stkDeq.top() << endl;
            }
        }
    }
    return 0;
}
