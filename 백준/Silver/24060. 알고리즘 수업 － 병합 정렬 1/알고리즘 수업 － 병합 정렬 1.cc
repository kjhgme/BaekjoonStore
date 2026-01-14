#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<int> tmp;  // 병합용 임시 배열
int cnt = 0;
int K;
int ans = -1;

void merge(vector<int>& A, int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 0;

    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    // 왼쪽 배열이 남은 경우
    while (i <= q)
        tmp[t++] = A[i++];

    // 오른쪽 배열이 남은 경우
    while (j <= r)
        tmp[t++] = A[j++];

    // 결과를 A[p..r]에 복사
    for (int k = 0; k < t; ++k)
    {
        A[p + k] = tmp[k];
        cnt++;

        if (cnt == K)
            ans = A[p + k];
    }
}

void merge_sort(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);       // 전반부
        merge_sort(A, q + 1, r);   // 후반부
        merge(A, p, q, r);         // 병합
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> K;

    vector<int> v(n);
    tmp.resize(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    merge_sort(v, 0, n - 1);

    cout << ans;
}