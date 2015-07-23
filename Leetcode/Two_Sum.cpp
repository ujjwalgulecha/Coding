class Solution
{
        public:
        vector<int> twoSum(vector<int> &numbers, int target)
        {
            vector<pair<int, int> > sorted_numbers;
            for (int i = 0; i < numbers.size(); ++i)
            {
                sorted_numbers.emplace_back(numbers[i], i);
            }
            sort(sorted_numbers.begin(), sorted_numbers.end());

            int i = 0, j = sorted_numbers.size() - 1;
            while (i < j)
            {
                int value = sorted_numbers[i].first + sorted_numbers[j].first;
                if (value == target)
                {
                    return {min(sorted_numbers[i].second, sorted_numbers[j].second) + 1, max(sorted_numbers[i].second, sorted_numbers[j].second) + 1};
                }
                else if (value < target)
                {
                    do { i++; } while (i < j && sorted_numbers[i].first == sorted_numbers[i - 1].first);
                }
                else
                {
                    do { j--; } while (i < j && sorted_numbers[j].first == sorted_numbers[j + 1].first);
                }
            }
        return {0, 0};
        }
};
