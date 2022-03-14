void modificare(int v[], int n)
{
    int i, j, k1 = 0, k2 = 0, x, v1[10005], v2[10005];
    bool prim;
    for(j = 0; j < n; j ++)
     {
         x = v[j];
         prim = true;
         for (i = 2; i * i <= x; i ++)
          if(x % i == 0)
           {
               prim = false;
               break;
           }
          if(prim) v1[k1 ++] = x;
              else v2[k2 ++] = x;
     }
     for(j = 0; j < k1; j ++)
      v[j] = v1[j];
     for(j = k1; j < n; j ++)
      v[j] = v2[j - k1];
}