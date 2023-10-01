int findFirst(std::vector<int>& arr, int n, int k){
    int low{0};
    int high{n-1};
    int first{-1};

    while(low<=high){
        int mid{low+(high-low)/2};
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}

int findLast(std::vector<int>& arr, int n, int k){
    int low{0};
    int high{n-1};
    int last{-1};

    while(low<=high){
        int mid{low+(high-low)/2};
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
}

std::pair<int, int> firstAndLastPosition(std::vector<int>& arr, int n, int k)
{
    std::pair<int, int> p(findFirst(arr, n, k), findLast(arr, n, k));
    return p;
}


void testFirstAndLastPosition(){
  int n = 7;
  int key = 13;
  std::vector <int> v {3,4,13,13,13,20,40};
  
  std::pair<int, int> p {firstAndLastPosition(v, n, key)};
  std::cout<<p.first << ", " << p.second << std::endl;
}