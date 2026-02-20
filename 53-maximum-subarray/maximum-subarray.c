int maxSubArray(int* nums, int numsSize) {
    int currentsum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(currentsum<0)
        {
            currentsum=nums[i];
        }
        else
        {
        currentsum=currentsum+nums[i];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    } 
    return maxsum;   
}