#include<vector>
#include<cmath>
#include<iostream>

using std::cout;
using std::min;
using std::max;
using std::vector;

 int maxArea(vector<int>& height) {
        
        int len = height.size();
        int maxArea=0;
        int cur=0;
        int start=0;
        int end = len-1;
        while(start<end){
            cur = min(height[start], height[end])*(end-start);
            maxArea= max(cur, maxArea);
            if(height[start]<height[end]) start++;
            else end=end-1;
        } 
        return maxArea;
    }
int main()
{
   vector<int> test{1,2,6,2,5,4,8,3,7};

   cout<<maxArea(test);
}