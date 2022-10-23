#include <string>
#include <vector>
#include <numeric>

using namespace std;

string odd_or_even(const vector<int> &arr)
{
  return (accumulate(arr.begin(), arr.end(), 0)&1?"odd":"even");
}