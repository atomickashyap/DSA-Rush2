class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {

            int xCoordinate = abs(points[i][0] - points[i + 1][0]);
            int yCoordinate = abs(points[i][1] - points[i + 1][1]);
            int min1 = min(xCoordinate, yCoordinate);
            int max1 = max(xCoordinate, yCoordinate);
            sum += min1 + abs(max1 - min1);
        }
        return sum;
    }
};