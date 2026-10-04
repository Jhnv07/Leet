//A Set cannot contain duplicates.
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> result;

        for (int x : nums1) {
            set1.insert(x);
        }

        for (int x : nums2) {
            if (set1.count(x)) {
                result.insert(x);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};