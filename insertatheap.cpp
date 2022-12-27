class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val; // putting the value at last

        while (index > 1)
        {
            int parent = index / 2; // finiding the index of parent
            if (arr[parent] < arr[index])
            { // max heap
                swap(arr[parent], arr[index]);
            }
            else{
                return;
            }
        }
    }
};
