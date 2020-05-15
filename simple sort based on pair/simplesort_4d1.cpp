#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;    string t;
    int n;
    cout << "how many test cases do you have ? " << endl;
    cin >> n ;

    vector< pair <string,string> > ss;
    for(int i =0;i< n;i++){
        cin >> s;
        cin >> t;
        ss.push_back(make_pair(s,t));
    }
    sort(ss.begin(),ss.end());

    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << ss[i].first << " "
             << ss[i].second << endl;
    }
    return 0;
}
