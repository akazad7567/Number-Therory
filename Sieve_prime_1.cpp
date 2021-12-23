void sieve()
{
    vec.push_back(2);
 long long i,j,k;
    for(i=3;i<FLAG_SIZE;i+=2)
         if(!(flag[i/64]&(1LL<<(i%64))))
                for(j=i*i;j<FLAG_SIZE;j+=2*i)
                    flag[j/64]|=(1LL<<(j%64));

 for (int i=3;i<FLAG_SIZE;i+=2)
        if(!(flag[i/64]&(1LL<<(i%64)))) vec.push_back(i);

//    for(int i=0;i<100;i++) cout<<i<<"-> "<<vec[i]<<endl;
}



void sieve()
{
    pchk[0]=pchk[1]=true;
    for(ll i=3;i<M;i+=2)
    {
        for(ll j=i*i;j<M;j+=2*i)
        {
            pchk[j]=true;
        }
    }

    prime.push_back(2);
    for(ll i=3;i<M;i+=2)
    {
        if(pchk[i]==false) prime.push_back(i);
    }
}
