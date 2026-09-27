#include <iostream>

using namespace std;

int main()
{
  const int arr[] = {1, 2, 4, 6, 8, 9, 14};
  const int size = sizeof(arr) / sizeof(arr[0]);
  const int target = 10;
  bool found = false;

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        cout << "Found: " << arr[i] << " + " << arr[j]
             << " = " << target << '\n';
        found = true;
      }
    }
  }

  if (!found)
  {
    cout << "No pair found for target " << target << '\n';
  }
}