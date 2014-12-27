class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
      int start = 0;
      int end = numbers.size() - 1;
      vector<int> originNumbers(numbers);
      sort(numbers.begin(), numbers.end());
      while (start < end) {
        if (numbers[start] + numbers[end] > target) {
          end--;
        }
        else if (numbers[start] + numbers[end] < target) {
          start++;
        }
        else {
          return getPosition(originNumbers, numbers[start] , numbers[end]);
        }
      }
      return vector<int>();
    }

    vector<int> getPosition(vector<int>& numbers, int startValue, int endValue) {
      vector<int> result;
      for (int i=0; i<numbers.size(); i++) {
        if (numbers[i] == startValue || numbers[i] == endValue) {
          result.push_back(i + 1);
        }
      }
      return result;
    }
};
