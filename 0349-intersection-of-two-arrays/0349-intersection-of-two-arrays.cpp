class Solution {
public:
    // bool binarySearch(vector<int> &arr, int target){
    //     int left =0, right = arr.size()-1;
    //     while(left<=right){
    //         int mid = (left+right) / 2;
    //         if(arr[mid] == target) return true;
    //         else if(arr[mid] < target) left = mid+1;
    //         else right = mid-1;
    //     }
    //     return false;
    // }
    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     if(nums1.size() > nums2.size()) swap(nums1, nums2);
    //     sort(nums1.begin(), nums1.end());
    //     unordered_set<int> result;
    //     for(int num :nums2){
    //         if(binarySearch(nums1, num)){
    //             result.insert(num);
    //         }
    //     }
    //     return vector<int>(result.begin(), result.end());
    // }

    //using hashing - hashset

    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     unordered_set<int> set1(nums1.begin(), nums1.end());
    //     unordered_set<int> result;
    //     for(int num : nums2){
    //         if(set1.contains(num)){
    //             result.insert(num);
    //         }
    //     }
    //     return vector<int>(result.begin(), result.end()); 
    // }

    //using hashmap
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        for( int num : nums1){
            mpp[num] = 1;
        }
        vector<int> result;

        for(int num : nums2){
            if((mpp.find(num)!=mpp.end()) && mpp[num]==1){
                result.push_back(num);
                mpp[num] = 0;
            }
        }
        return result;
    }
};