class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        std::vector<std::pair<int,int>> sortedPosition;
        int fleetCount = 0;
        float maxTime = 0.0;

        for (int i = 0; i < n; ++i)
        {
            sortedPosition.push_back({position[i], i}); 
        }
        std::sort(sortedPosition.begin(),sortedPosition.end(),std::greater<pair<int,int>>());

        for (int i = 0; i < n; ++i)
        {
            float time = (float)(target - sortedPosition[i].first) / speed[sortedPosition[i].second];
            if (time > maxTime)
            {
                ++fleetCount;
                maxTime = time;
            }
        }
        return fleetCount ;
    }
};
