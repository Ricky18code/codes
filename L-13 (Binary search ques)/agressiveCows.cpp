bool isPossible(vector<int> stalls , int k ,int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i = 1 ; i<stalls.size() ; i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin() , stalls.end());
    int s = 0;
    int max = -1;
    for(int i=0 ; i<stalls.size() ; i++){
        if(stalls[i] > max){
            max = stalls[i];
        }
    }
    int e = max;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isPossible(stalls , k , mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}
