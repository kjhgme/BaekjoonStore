#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt = 0;
bool stopped = false;
int K;

void heapify(vector<int>& A, int k, int n) {
    if (stopped) return;

    int left = 2 * k;
    int right = 2 * k + 1;
    int smaller = -1;

    if (right <= n) {
        if (A[left] < A[right])
            smaller = left;
        else
            smaller = right;
    }
    else if (left <= n) {
        smaller = left;
    }
    else {
        return;
    }

    if (A[smaller] < A[k]) {
        swap(A[k], A[smaller]);
        cnt++;
        if (cnt == K) {
            stopped = true;
            return;
        }
        heapify(A, smaller, n);
        if (stopped) return;
    }
}

void build_min_heap(vector<int>& A, int n) {
    for (int i = n / 2; i >= 1; --i) {
        heapify(A, i, n);
        if (stopped) return;
    }
}

void heap_sort(vector<int>& A, int n) {
    build_min_heap(A, n);
    if (stopped) return;

    for (int i = n; i >= 2; --i) {
        swap(A[1], A[i]);
        cnt++;
        if (cnt == K) {
            stopped = true;
            return;
        }
        heapify(A, 1, i - 1);
        if (stopped) return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    K = k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    stopped = (k == 0);
    cnt = 0;

    if (n >= 1) {
        heap_sort(v, n);
    }      

    if (cnt < k) {
        cout << "-1";
    }
    else {
        for (int i = 1; i <= n; ++i) {
            cout << v[i];
            if (i < n) cout << " ";
        }
    }

    return 0;
}