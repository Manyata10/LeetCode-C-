class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        //if mod 10 the ans will be 0-9
        // if mod n then asn will be 0-n-1
        //n+k%n
        //BETTER APPROACH
        int n = arr.size();
        // vector<int> temp(n);
        // for(int i=0;i<n;i++){
        //     temp[(i+k)%n]=nums[i];
        // }
        // nums=temp;
        ///OPTIMAL APPROACH
        d = d % n;

        vector<int> temp(d);
        for(int i=n-d; i<n; i++){ //suppose d = 3; 
            temp[i-(n-d)]=arr[i];  //stored 0 to 2 index elements = 3
        }                     //so start from index 3 (4th element)
        for(int i=n-d-1; i>=0; i--){
            arr[i+d]=arr[i];
        }
        for(int i=0;i<d;i++){
            arr[i]=temp[i];
        }
    }
};