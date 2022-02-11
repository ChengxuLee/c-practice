#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给定两个数组?nums1?和?nums2 ，返回 它们的交集?。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
//
//
//
//示例 1：
//
//输入：nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出：[2]

//解法1:set集合 find方法 
#include <vector>
#include <set>
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;
		set<int> s;
		for (int i = 0; i < nums1.size(); i++)
		{
			if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
			{
				s.insert(nums1[i]);
			}
		}
		ret.assign(s.begin(), s.end());

		return ret;
	}
};
//解法2： 双指针+集合
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int f1 = 0;int f2 = 0;
        set<int>m;
        vector<int>a;
        sort(nums1.begin(), nums1.end());sort(nums2.begin(), nums2.end());
        while (f1 < nums1.size() && f2 < nums2.size()) {
            if (nums1[f1] == nums2[f2]) {
                m.insert(nums1[f1]);
                f1++;
                f2++;
            }
            else if (nums1[f1] > nums2[f2]) {
                f2++;
            }
            else {
                f1++;
            }
        }
        a.assign(m.begin(), m.end());
        return a;
    }
};
int main() {
	system("pause");
	return 0;
}