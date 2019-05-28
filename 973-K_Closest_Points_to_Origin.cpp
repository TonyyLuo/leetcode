class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        std::multimap<int, int> distances;
        std::vector<std::vector<int>> result;
        int size = points.size();
        
        if (K >= size)
            return points;
        
        for (int i = 0; i < size; ++i) {
            int d = pow(points[i][0], 2) + pow(points[i][1], 2);
            distances.insert(std::make_pair(d, i));
        }
        
        auto it = distances.begin();
        for (int i = 0; i < K; ++i){
            result.push_back(points[it->second]);
            it++;
        }
        return result;
    }
};
