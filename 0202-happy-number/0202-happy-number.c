int sumOfSquares(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n = n / 10;
    }

    return sum;
}

bool isHappy(int n) {
    // seen[i] = 1 means we have already seen number i
    int seen[1000] = {0};

    while (n != 1) {

        // Replace n with the sum of squares of its digits
        n = sumOfSquares(n);

        // If we have seen n before, we are in a cycle
        if (seen[n] == 1) {
            return false;
        }

        // Mark n as seen
        seen[n] = 1;

        
    }

    // n became 1, so it is a happy number
    return true;
}