#include <iostream>
using namespace std;

// Find sum of digits
int digitSum(int x)
{
    int sum = 0;

    while (x > 0)
    {
        sum = sum + x % 10;
        x = x / 10;
    }

    return sum;
}

void solve()
{
    int N;
    cin >> N;

    int nums[100];
    int freq[1000] = {0};

    long long ans = 0;

    cout << "Enter " << N << " numbers:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];

        int sum = digitSum(nums[i]);

        // Add previous numbers having same digit sum
        ans = ans + freq[sum];

        freq[sum]++;
    }

    cout << "Number of special pairs = " << ans << endl;
}

int main()
{
    cout << "===== LAB SHEET 10 =====" << endl;
    cout << "Digit Sum Pair Count" << endl;

    solve();

    return 0;
}