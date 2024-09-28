// O(N) time complexity --
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        int max_d = 0;
        int max = 0;

        // for(int i=0;i<n;i++){
        while(s<e){

            if(height[s]>=height[e]){
                max = height[e] * (e-s);
                e--;

            }
            else{
                max = height[s] * (e-s);
                s++;
            }

            if(max > max_d){
                max_d = max;
            }
        }
        return max_d;

    }
};
