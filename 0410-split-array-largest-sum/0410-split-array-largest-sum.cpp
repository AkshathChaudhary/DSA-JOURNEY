class Solution {
public:
    int splitArray(vector<int>& arr, int m) {
        int n = arr.size();
        if (m > n) {
            return -1;
        }
        
        long long sum = 0;
        int max_element = 0;
        
        // Calculate the sum AND find the max element simultaneously
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (arr[i] > max_element) {
                max_element = arr[i];
            }
        }

        long long ans = -1;
        // The answer must be at least the max single element, and at most the total sum
        long long st = max_element, end = sum; 
        
        while (st <= end) {
            long long mid = st + (end - st) / 2;
            
            if (isValid(arr, m, n, mid)) {
                ans = mid;
                end = mid - 1; // Try to find a smaller maximum sum
            } else {
                st = mid + 1;
            }
        }
        
        // Safe to cast back to int, as the final answer fits within the problem's expected bounds
        return (int)ans; 
    }

    // maxAllowedPages must also accept a long long to match mid
    bool isValid(vector<int>& arr, int m, int n, long long maxAllowedPages) {
        int stu = 1;
        long long pages = 0; // Use long long to prevent overflow during addition
        
        for (int i = 0; i < n; i++) {
            // We no longer need to check if (arr[i] > maxAllowedPages) 
            // because our binary search starts at the maximum element.
            
            if (pages + arr[i] <= maxAllowedPages) {
                pages += arr[i];
            } else {
                stu++;
                pages = arr[i];
            }
        }
        
        // Simplified boolean return
        return stu <= m;
    }
};