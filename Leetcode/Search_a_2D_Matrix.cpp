class Solution {
public:
int m,n;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        n = matrix.size();
		m = (n != 0 ? matrix[0].size() : 0);
		int left = 0, right = n * m - 1, x, y;

		while (left <= right) {
			int mid = (left + right) / 2;
			if (target == matrix[mid / m][mid % m]) {
				return true;
			}
			if (target < matrix[mid / m][mid % m]) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		return false;

    }
};
