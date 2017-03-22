double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int medianIdx = 0, currentIdx = -1;
    int current = 0, previous;
    int nums1Idx = 0, nums2Idx = 0;
    bool isOdd;
    
    if((nums1Size + nums2Size) % 2)
    {
        isOdd = true;
    }
    else
    {
        isOdd = false;
    }
    medianIdx = (nums1Size + nums2Size) / 2;
    
    while(medianIdx != currentIdx)
    {
        currentIdx++;
        previous = current;
        if(nums1Idx == nums1Size)
        {
            current = nums2[nums2Idx];
            nums2Idx++;
        }
        else if(nums2Idx == nums2Size)
        {
            current = nums1[nums1Idx];
            nums1Idx++;
        }
        else
        {
            if(nums1[nums1Idx] > nums2[nums2Idx])
            {
                current = nums2[nums2Idx];
                nums2Idx++;
            }
            else
            {
                current = nums1[nums1Idx];
                nums1Idx++;
            }
        }
    }
    
    if(isOdd)
    {
        return current;
    }
    else
    {
        return (double)(previous + current) / 2;
    }
}
