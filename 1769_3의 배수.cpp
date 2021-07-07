    #define _CRT_SECURE_NO_WARNINGS

    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        cin.tie(NULL);
        ios::sync_with_stdio(false);
    
        string X;
        cin >> X;
    
        int ct = 0;
        while (X.size() != 1)
        {
            int sum = 0;
        
            for(int i = 0 ; i< X.size(); i++)
            {
                sum += (X[i] - 48);
            }
            X = to_string(sum);
            ct++;
        }
    
        cout << ct << "\n";
        if (stoi(X) % 3 == 0)
            cout << "YES";
        else
            cout << "NO";
    }