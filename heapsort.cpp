void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest=i, l=(2*i)+1, r=(2*i)+2;
    if(l<n && arr[l]>arr[largest]) largest=l;
    if(r<n && arr[r]>arr[largest]) largest=r;
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int n){
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
void buildHeap(int arr[], int n) {
    // Build max heap
    for(int i=(n-2)/2;i>=0;i--) heapify(arr,n,i);
    heapSort(arr,n);
    
}
