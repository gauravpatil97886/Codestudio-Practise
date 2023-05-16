vector<int> getSecondOrderElements(int n, vector<int> a) {
vector<int> result;

    std::sort(a.begin(), a.end()); 
    
    int secondLargest = a[n-2];
    int secondSmallest = a[1];
    
    result.push_back(secondLargest);
    result.push_back(secondSmallest);
    
    return result;
    
}


----------------------------------
  second approach
  
  
