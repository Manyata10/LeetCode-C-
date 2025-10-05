class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        for(int i=0; i<tasks.size(); i++){
            count[tasks[i]-'A']++;
        }
        sort(count.begin(), count.end());
        int maxFreq = count[25];
        int idle = (maxFreq - 1)* n;
        for(int i=24; i>=0; i--){
            idle -= min(maxFreq -1, count[i]);
        }
        idle = max(0, idle);
        return tasks.size()+idle;
    }
};