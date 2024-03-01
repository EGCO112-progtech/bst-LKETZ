int fac(int n)
{
   int f=1;
   while(n>1)
   {
      f=f*n;
      n--;
   }
   return f;
}

int fac_r(int n)
{
   if(n==1) return 1;
   if(n==0) return 1;

   return n*fac_r(n-1);
}
