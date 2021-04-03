unordered_set<int> s;
    for (int i = 0; i < arr_size; i++) 
    {
        int temp = sum - arr[i];

        if (s.find(temp) != s.end())
            cout << "Pair with given sum "
                 << sum << " is (" << arr[i] << "," 
                    << temp << ")" << endl;

        s.insert(arr[i]);
    }
