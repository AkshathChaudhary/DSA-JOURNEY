class Solution {
public:
    bool possible(vector<int>& quantities, int n, int x) {
        int storesNeeded = 0;

        for (int q : quantities) {
            // Number of stores needed for this product type
            storesNeeded += (q + x - 1) / x;

            if (storesNeeded > n)
                return false;
        }

        return true;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin(), quantities.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(quantities, n, mid)) {
                // mid is possible, try a smaller maximum
                answer = mid;
                high = mid - 1;
            }
            else {
                // Need more than n stores
                low = mid + 1;
            }
        }

        return answer;
    }
};