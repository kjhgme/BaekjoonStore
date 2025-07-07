#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = 0;
int k;
bool printed = false;

int partition(vector<int>& v, int p, int r)
{
    int x = v[r];
    int i = p - 1;

    for (int j = p; j <= r - 1; ++j)
    {
        if (v[j] <= x)
        {
            swap(v[++i], v[j]);
            ++cnt;

            if (cnt == k)
            {
                printed = true;

                for (int i = 0; i < v.size(); ++i)
                {
                    cout << v[i] << " ";
                }
            }
        }
    }
    if (i + 1 != r)
    {
        swap(v[i + 1], v[r]);
        ++cnt;
        if (cnt == k)
        {
            printed = true;

            for (int i = 0; i < v.size(); ++i)
            {
                cout << v[i] << " ";
            }
        }
    }   
    
    return i + 1;
}

void quick_sort(vector<int>& v, int p, int r)
{
    if (p < r && !printed)
    {
        int q = partition(v, p, r);
        quick_sort(v, p, q - 1);
        quick_sort(v, q + 1, r);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    quick_sort(v, 0, n - 1);

    if (!printed)    
        cout << -1 << "\n";
}