int zerof (int n)
{
    int c2 = 0, c5 = 0;
    if (n == 0) return 0;
    else {
        for ( int i = 1; i <= n; i++)
        {
            int x=i;
            while ( x %5==0) {c5++;x=x/5;}
            while (x%2==0) {c2++;x=x/2;}
        }
        if (c2<= c5)return c2;
        else return c5;
    }
}