

void set_same bits()
{
   int x=10;
    int y=13;
    int l=2,r=4;

    l--;
    
    int mask = ((1<<r)-1)&(~((1<<l)-1));
    
    int res=y&mask;
    x=x|res;

    printf("%x %x %d",mask,res,x);
    
}

void swap_range_bits()
{

   int a = 0xF; // 0000_1111
    int p=2;
    int q=5;
    int range=2;
    
    int mask1,mask2;
    
    mask1=((1<<(p+range))-1) & (~((1<<p)-1));
    mask2=((1<<(q+range))-1) & (~((1<<q)-1));
    printf("%x %x\n",mask1,mask2);
    
    int upper=(a&mask2)>>q;
    int lower=(a&mask1)>>p;
    
    int res=upper^lower;
    
    a=a^(res<<q)^(res<<p);
    
    printf("%x\n",a);

}
