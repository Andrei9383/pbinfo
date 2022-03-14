int FGreater(int a[],int n,int x)

{

   int gasit=0, mn;

   for(int i=0; i<n; i++) {

       if(a[i]>x) {

           if (gasit==0) { mn=a[i]; gasit=1;}

           else { if (a[i]<mn) mn=a[i]; }

       }

   }

   if(gasit) return mn;

   return -1;

}