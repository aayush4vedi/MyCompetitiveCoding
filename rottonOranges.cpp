/*Rotton Oranges*/
// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++)
// 	{
// 	    int r,c;
// 	    cin>>r>>c;
// 	    int arr[r][c];
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            cin>>arr[j][k];
// 	        }
// 	    }
// 	    queue<pair<int,int>> q;
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            pair<int,int> p;
// 	            if(arr[j][k]==2){
// 	            if(k!=0){
// 	                if(arr[j][k-1]==1){
// 	                arr[j][k-1]=3;
// 	                p.first=j;
// 	                p.second=k-1;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=0){
// 	                if(arr[j-1][k]==1){
// 	                arr[j-1][k]=3;
// 	                p.first=j-1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=r-1)
// 	            {
// 	                if(arr[j+1][k]==1){
// 	                arr[j+1][k]=3;
// 	                p.first=j+1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(k!=c-1){
// 	                if(arr[j][k+1]==1){
// 	                arr[j][k+1]=3;
// 	                p.first=j;
// 	                p.second=k+1;
// 	                q.push(p);
// 	                }
// 	            }
// 	        }}
// 	    }
//
// 	    pair<int,int> pq(-1,-1);
// 	    //cout<<q.size()<<endl;
// 	    int count=0;
// 	    q.push(pq);
// 	  while(q.size()>1){
// 	        while(q.front()!=pq){
// 	            int j=q.front().first;
// 	            int k=q.front().second;
// 	            pair<int,int> p;
// 	            if(k!=0){
// 	                if(arr[j][k-1]==1){
// 	                arr[j][k-1]=3;
// 	                p.first=j;
// 	                p.second=k-1;
// 	                q.push(p);
// 	                }
// 	            }
// 	           if(j!=0){
// 	                if(arr[j-1][k]==1){
// 	                arr[j-1][k]=3;
// 	                p.first=j-1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=r-1)
// 	            {
// 	                if(arr[j+1][k]==1){
// 	                arr[j+1][k]=3;
// 	                p.first=j+1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(k!=c-1){
// 	                if(arr[j][k+1]==1){
// 	                arr[j][k+1]=3;
// 	                p.first=j;
// 	                p.second=k+1;
// 	                q.push(p);
// 	                }
// 	            }
// 	            q.pop();
//
// 	        }
// 	        count++;
// 	        q.push(pq);
// 	        q.pop();
//
// 	        if(q.size()==1)
// 	        break;
// 	    }
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            if(arr[j][k]==1)
// 	            count=-1;
// 	        }
//
// 	    }
//
// 	    cout<<count<<endl;
//
//
// 	}
// 	return 0;
// }
