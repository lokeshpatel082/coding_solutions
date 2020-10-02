++
void findidx(vector<int> matrix,vector<int> &idx)
{  int k=0;
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i]==1)
        {
            idx.push_back(i);
            //cout<<i<<" ";
        }

    }
   // cout<<"\n";
    return;
}
int chk(vector<int> idx,vector<vector<int> >matrix,int z)
{   set<int> s;int c=0;
    for(int i=0;i<idx.size();i++)
    {
        int k=idx[i];//cout<<"k="<<k<<"\n";
        for(int j=z+1;j<matrix.size();j++)
        {
            if(matrix[j][k]==1)
            {   //cout<<j<<" ";
                if(s.find(j)!=s.end())
                  return 1;
                  else
                s.insert(j);
            }

        }
    }
    s.clear();
    return 0;

}
bool ValidCorner(const vector<vector<int> >& matrix)
{    vector<int> v;
    for(int i=0;i<matrix.size();i++)
          {  //cout<<"i="<<i<<"\n";
              findidx(matrix[i],v);

              if(v.size()<2)
              {v.clear();
              continue;}
              else
              {//cout<<"v[0]="<<v[0]<<" v[1]="<<v[1];
              if(chk(v,matrix,i)) return 1;}
              v.clear();
          }
          return 0;
}
