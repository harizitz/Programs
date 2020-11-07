
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int no = 0, k = 0, f = 0, start = 0, last = 0;
        scanf("%d %d", &no, &k);
        int arr[no], sum = 0;
        for (int i = 0; i < no; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < no; i++)
        {
            sum += arr[i];
            if (sum >= k)
            {
                last = i;
                while (k < sum && start < last)
                {
                    sum -= arr[start];
                    ++start;
                }

                if (sum == k)
                {
                    printf("%d %d\n", start + 1, last + 1);
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}