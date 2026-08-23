int mySqrt(int x) {

    if (x == 0 || x == 1) {
        return x;
    }

    int left = 1;
    int right = x / 2;
    int answer = 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {
            // mid * mid <= x
            answer = mid;
            left = mid + 1;
        }
        else {
            // mid * mid > x
            right = mid - 1;
        }
    }

    return answer;
}