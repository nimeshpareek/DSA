for (int i = 0; i < n; i++)
        {
            for (int j = i+1; i < n; i++)
            {
                if (arr[j]<arr[i])
                {
                    return false;
                }
                
            }
            return true;
            
            
        }
       