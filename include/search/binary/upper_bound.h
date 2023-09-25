
int upperBound(vector<int> &arr, int x, int n){
	int low{0};
	int high{n-1};
	int upperB{n};

	while(low<=high){
		int mid {(low+high)/2};
		if(arr[mid]>x){
			upperB = mid;
			high=mid-1;
		}else{
			low =mid+1;
		}
	}
	return upperB;//=std::max(high, upperB);
}

void testUpperBound(){
    std::vector<int> v {1,2,3,4,5,6,7,8,9};
    int n{static_cast<int>(v.size())};
    std::cout<<upperBound(v, 5, n)<<std::endl;
}