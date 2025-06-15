int arr2[] = {1,2,3};
    int sz = sizeof(arr2)/sizeof(int);
    int i ,temp;
    for (int i = 0; i < sz/2 ; i++)
    {
        temp = arr2[i];
        arr2[i] = arr2[sz-i-1];
        arr2[sz-i-1] = temp;
    }
    cout << "Reverse Array: " << endl;

    for (int i = 0; i < sz; i++)
    {
        cout << arr2[i] << " ";
    }
    