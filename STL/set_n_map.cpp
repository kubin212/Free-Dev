#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void PrintDiffElement();

int main()
{
    PrintDiffElement();
    return 0;
}

void PrintDiffElement()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        // Using Set
        /* set<int> se;
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            se.insert(x);
        }
        cout << se.size() << endl; */

        // Using map
        /* map<int, bool> mp;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            mp[x] = true;
        }
        cout << mp.size() << endl; */

        // Using array
        int a[100];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int ans = 1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                ans ++;
            }
            //cout << a[i] << endl;
        }
        cout << ans << endl;
    }

}