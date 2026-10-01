#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of elements must be positive." << endl;
        return 1;
    }

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}