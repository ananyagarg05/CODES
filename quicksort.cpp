//quick sort algorithm
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int start, int end)
    {
        if(start>=end) return;
        int pivot=end;
        int i=start-1;
        int j=start;
        while(j<pivot){
        if(arr[j]<arr[pivot])
        {
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    //out of bound hogya
    ++i;
    swap(arr[i],arr[pivot]);
    //recursive baaki ke liye
    quickSort( arr, start,i-1);//humara i 4 pr hai eg. i abhi joh huamre pivot tha uspr h
    quickSort( arr,i+1,end);
}
    
