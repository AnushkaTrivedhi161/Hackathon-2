int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
        return i;
        break;
        }
        else if(nums[i]>target)
        {
        return i;
        break;
        }
    }
    return i;
}

