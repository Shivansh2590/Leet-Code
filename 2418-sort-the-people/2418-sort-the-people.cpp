class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {
        int n = names.size();
        
         for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(height[j] < height[j+1]) {
                    swap(height[j], height[j+1]);
                    swap(names[j], names[j+1]);
                }
            }
        }
        return names;
    }
};