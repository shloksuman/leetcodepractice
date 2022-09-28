class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result(queries.size());
        
        for (int i = 0; i < queries.size(); ++i) {
            for (int j = 0; j < points.size(); ++j) {
                int pointRadiusFromCenterSquared = pow(points[j][0] - queries[i][0], 2) + pow(points[j][1] - queries[i][1], 2);
                int circleRadiusSquared = pow(queries[i][2], 2);
                if (pointRadiusFromCenterSquared <= circleRadiusSquared) {
                    result[i]++;
                }
            }
        }
        
        return result;
    }
};