// Problem Link: https://leetcode.com/problems/trapping-rain-water/
// Difficulty : Hard Level
// Faster than 95.20% of C++ online submissions for Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& A) {
        int N = A.size(), ans = 0;
        vector<int> left(N, 0), right(N, 0);
        for(int i = 1; i < N; i++) {
            left[i] = max(left[i - 1], A[i - 1]);
        }
        for(int i = N - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], A[i + 1]);
        }
        for(int i = 1; i < N - 1; i++) {
            ans += max(0, min(left[i], right[i]) - A[i]);
        }
        return ans; 
    }
};