 int sum=0;
        int total_sum=n*(n+1)/2;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                arr[0]=arr[i];
                break;
                
            }
            sum = sum+arr[i];
            
        }
        total_sum=total_sum-sum;
        arr[1]=total_sum;
        return arr;