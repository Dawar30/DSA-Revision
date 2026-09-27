#include <iostream>

using namespace std;

int main()
{
  const int arr[] = {1, 2, 4, 6, 8, 9, 14};
  int target = 10;

  int left = 0;
  int right = 6;

  while (left < right)
  {
    int sum = arr[left] + arr[right];

    if (sum == target)
    {
      cout << "found pair: "
           << arr[left] << " AND " << arr[right];
      break;
    }
    else if (sum < target)
    {
      left++;
    }
    else
    {
      right--;
    }
  }

  return 0;
}