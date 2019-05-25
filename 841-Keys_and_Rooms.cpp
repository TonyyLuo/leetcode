class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        std::stack<int> keys;
        std::unordered_set<int> visited;
        keys.push(0);
        while (!keys.empty()){
            int currRoom = keys.top();
            visited.insert(currRoom);
            keys.pop();
            for (int i = 0; i < rooms[currRoom].size(); i++){
                if (visited.find(rooms[currRoom][i]) == visited.end()){
                    keys.push(rooms[currRoom][i]);
                }
            }
        }
        return (visited.size() == rooms.size());
    }
};
