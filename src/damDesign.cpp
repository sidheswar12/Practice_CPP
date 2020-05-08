#include<bits/stdc++.h>

using namespace std;

int maxHeight(vector<int> wallPositions, vector<int> wallHeight)
{
    int n = wallPositions.size();
    int m = wallHeight.size();
    int max = 0;    
    for (int i=0; i<n-1; i++) 
    {
        if (wallPositions.at(i)<wallPositions.at(i+1)-1) 
        {
            int heightDiff =  abs(wallHeight.at(i+1) - wallHeight.at(i));
            int gapLen = wallPositions.at(i+1) - wallPositions.at(i) - 1;
            int localMax = 0;
            if (gapLen > heightDiff) 
            {
                int low = std::max(wallHeight.at(i+1), wallHeight.at(i) + 1);
                int remainingGap = gapLen - heightDiff - 1;
                localMax = low + remainingGap/2;

            } 
            else 
            {
                localMax = std::min(wallHeight.at(i+1), wallHeight.at(i) + gapLen);
            }
            max = std::max(max, localMax);
        }
    }
    return max;
   
}

int main()
{   
    vector<int> wallPositions {1, 3, 7};
    vector<int> wallHeight {4, 3, 3};
    int x = maxHeight(wallPositions, wallHeight);
   
    cout<<"x " << x <<endl;
    return 0;
}