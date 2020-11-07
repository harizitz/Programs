
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int number;
        scanf("%lld", &number);
        for (int i = 0; i < 100; i++)
        {
            long long int res = pow(2, i);
            if (res == number)
            {
                printf("YES\n");
                break;
            }
            if (res > number)
            {
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}