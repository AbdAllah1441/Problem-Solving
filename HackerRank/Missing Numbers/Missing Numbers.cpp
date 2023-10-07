#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'missingNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER_ARRAY brr
 */

vector<int> missingNumbers(vector<int> arr, vector<int> brr) 
{
    vector<int> missing;
    if ((arr.size() <= brr.size()) && (((*max_element(brr.begin(), brr.end())) - (*min_element(brr.begin(), brr.end()))) <= 100) && (arr.size() <= (2 * 100000)) && (brr.size() <= (2 * 100000)))
    {
        // finding the missing integers
        for (int i = 0; i < brr.size(); i++)
        {
            if (brr[i] <= 10000)
            {
                int countBrr = 1;
                int countArr = 0;
                int repeated = 0;
                for (int b = 0; b < brr.size(); b++)
                {
                    if ((brr[i] == brr[b]) && (b != i))
                    {
                        countBrr++;   
                    }
                }
                for (int j = 0; j < arr.size(); j++)
                {
                    if (brr[i] == arr[j])
                    {
                        countArr++;
                    }
                }
                for (int k = 0; k < missing.size(); k++)
                {
                    if (missing[k] == brr[i])
                    {
                        repeated++;
                        break;
                    }
                }
                if ((countBrr > countArr) && (repeated == 0))
                {
                    missing.push_back(brr[i]);
                }
            }
        }
        // insertion sort
        int key, j ;
        for(int i = 1; i < missing.size(); i++)   
        {  
            key = missing[i];  
            j = i - 1;  
            while(j >= 0 && missing[j] > key)  
            {  
                missing[j + 1] = missing[j];   
                j = j - 1;  
            }  
            missing[j + 1] = key;  
        }
        return missing ;
    }
    return missing ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    vector<int> result = missingNumbers(arr, brr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
