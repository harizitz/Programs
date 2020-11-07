using namespace std;
map<long long, long long> mp;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        for (long long i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            mp[k]++;
        }

        for (long long i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            mp[k]--;
        }

        bool flag = false;

        for (auto i = mp.begin(); i != mp.end(); i++)
        {

            if (i->second != 0)
            {
                cout << 0 << endl;
                flag = true;
                break;
            }
        }

        if (flag == false)
            cout << 1 << endl;

        mp.clear();
    }
    return 0;
}