#include <bits/stdc++.h>

using namespace std;
// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {
    

    vector<string> gridcheck= grid;
    for(auto &s : grid)
    {
        sort(s.begin(), s.end()); // strings are sorted
        std::for_each(s.begin(), s.end(), [](char & c){
            c = ::tolower(c); // convert all to lowercase incase any mismatch exists
        });
    }
    
    int x= grid.size(); bool c= true;
    
    for(int i=0;i<x-1;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(grid[j][i] <= grid[j+1][i]) // check if the strings row/columns are sorted or not
            {
                
            }
            else {
                c= false; //if one mismatch found loop is broken 
                break;
            }
        }
    }
    
    if(x==1)
    {
        c=true;
    }

    if(c==true)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }



    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
