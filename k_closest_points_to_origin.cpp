/*
    Solução do problema número 973 do leetcode, sessão de algoritmos, K Closest Points to Origin
    https://leetcode.com/problems/k-closest-points-to-origin/
*/

class Solution {
public:
    struct point_and_distance {
        int distance;
        vector<int> point;
    };
    typedef struct point_and_distance point_and_distance;
    
    struct less_than_key {
        inline bool operator() (const point_and_distance& struct1, const point_and_distance& struct2) {
            return (struct1.distance < struct2.distance);
        }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<point_and_distance> distances;
        vector<vector<int>> result;
        for (int i = 0; i < points.size(); i++) {
            point_and_distance myPoint;
            vector<int> xy;
            int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            xy.push_back(points[i][0]);
            xy.push_back(points[i][1]);
            myPoint.distance = dist;
            myPoint.point = xy;
            distances.push_back(myPoint);
        }
        sort(distances.begin(), distances.end(), less_than_key());
        for (int i = 0; i < K; i++) {
            result.push_back(distances[i].point);
        }
        return result;
    }
};