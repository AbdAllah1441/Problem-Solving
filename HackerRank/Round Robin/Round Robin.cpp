#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int quantum;
    char process;
    int time;
    vector<char>processes;
    vector<int>times;
    
    cin >> n;
    cin >> quantum;
    
    for (int i = 0; i < n; i++)
    {
        cin >> process;
        cin >> time;
        processes.push_back(process);
        times.push_back(time);
        times[i] = times[i] - quantum;
    }
    while (1)
    {
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            if (times[i] > 0)
            {
                processes.push_back(processes[i]);
                times[i] = times[i] - quantum;
                t++;
            }
        }
        if (t == 0)
            break;
    }
    
    for (int i = 0; i < processes.size(); i++)
    {
        cout << processes[i];
    } 
    
    return 0;
}
