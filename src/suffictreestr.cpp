#include <bits/stdc++.h> 
using namespace std; 
  

struct data
{ 
    int idx;   
    int rank[2];                  
}; 

int compare(struct data x, struct data y) 
{ 
    return (x.rank[0] == y.rank[0])?
           (x.rank[1] < y.rank[1]?1:0): 
           (x.rank[0] < y.rank[0]?1:0); 
} 

vector<int> prepareDataArray(string str) 
{  
    int n = str.length();
    struct data dataArr[n];   
    for (int i = 0; i < n; i++) 
    { 
        dataArr[i].idx = i; 
        dataArr[i].rank[0] = str[i] - 'a'; 
        dataArr[i].rank[1] = ((i+1) < n)?(str[i + 1] - 'a'): -1;
    }   
    sort(dataArr, dataArr+n, compare);   
    int idxArr[n];  
    for (int k = 4; k < 2*n; k = k*2) 
    { 
        int rank = 0; 
        int prev_rank = dataArr[0].rank[0]; 
        dataArr[0].rank[0] = rank; 
        idxArr[dataArr[0].idx] = 0;   
        for (int i = 1; i < n; i++) 
        { 
            if (dataArr[i].rank[0] == prev_rank && 
               dataArr[i].rank[1] == dataArr[i-1].rank[1]) 
            { 
                prev_rank = dataArr[i].rank[0]; 
                dataArr[i].rank[0] = rank; 
            }   
            else 
            { 
                prev_rank = dataArr[i].rank[0]; 
                dataArr[i].rank[0] = ++rank; 
            } 
            idxArr[dataArr[i].idx] = i; 
        } 
  
        for (int i = 0; i < n; i++) 
        { 
            int nextindex = dataArr[i].idx + k/2; 
            dataArr[i].rank[1] = (nextindex < n)? 
                      dataArr[idxArr[nextindex]].rank[0]: -1; 
        }   
        sort(dataArr, dataArr+n, compare); 
    }   
    vector<int>dataVect; 
    for (int i = 0; i < n; i++) 
    {
        dataVect.push_back(dataArr[i].idx);
    }
    return  dataVect; 
} 
  
vector<int> longestCommonPrefix(string str, vector<int> dataVect) 
{ 
    int n = dataVect.size();   
    vector<int> lcp(n, 0);   
    vector<int> invData(n, 0);   
    for (int i=0; i < n; i++)
    {
        invData[dataVect[i]] = i;
    }  
    int k = 0;   
    for (int i=0; i<n; i++) 
    { 
        if (invData[i] == n-1) 
        { 
            k = 0; 
            continue; 
        }   
        int j = dataVect[invData[i]+1];   
        while (i+k<n && j+k<n && str[i+k]==str[j+k])
        { 
            k++;
        }
        lcp[invData[i]] = k;   
        if (k>0) 
            k--; 
    } 
    return lcp; 
}

int countDistinctSubStr(string str) 
{ 
    vector<int> dataArr = prepareDataArray(str); 
    vector<int> lcp = longestCommonPrefix(str, dataArr);  
    int subStrCount = str.length() - dataArr[0];   
    for (int i = 1; i < lcp.size(); i++) 
    {
        subStrCount += (str.length() - dataArr[i]) - lcp[i - 1]; 
    }    
    return subStrCount; 
} 
  
int main() 
{  
    string str = "ababafgdfhfgjgghkhlkl";
    for_each(str.begin(), str.end(), [](char & c){
	c = ::tolower(c); });
    cout <<"Count: "<<countDistinctSubStr(str)<<endl; 
    return 0; 
} 