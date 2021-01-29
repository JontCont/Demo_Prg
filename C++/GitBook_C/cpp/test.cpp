
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<cmath>
#include<map>
#include<string>
#define inf 1<<30
#define eps 1e-7
#define LD long double
#define LL long long
#define maxn 1000000005
using namespace std;
struct Node{
	int maze[3][3];   //�K??���^���G 
	int h,g;    //�ΟĦ�ɲ��?
	int x,y;   //�Ŧ쪺��m
	int Hash;   //HASH��
	bool operator<(const Node n1)const{     //ɬ��?�C�Ĥ@??�r?h,�ĤG??�r?g
		return h!=n1.h?h>n1.h:g>n1.g;
	}
	bool check(){    //�P?�O�_�X�k
		if(x>=0&&x<3&&y>=0&&y<3)
			return true;
		return false;
	}
}s,u,v,tt;
int HASH[9]={1,1,2,6,24,120,720,5040,40320};   //HASH��?��
int destination=322560;   //��?���G��HASH�� 
/*
��???�G
1 2 3
4 5 6 
7 8 0
��hash��?322560
*/
int vis[400000];            //�P???�w�M?�A��l?-1�A�_??��}?�B��?�V
int pre[400000];        //��?�O�s
int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};   //�|�Ĥ�V
void debug(Node tmp){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",tmp.maze[i][j]);
		printf("\n");
	}
	printf("%d %d\n%d %d\n",tmp.x,tmp.y,tmp.g,tmp.h);
	printf("hash=%d\n",tmp.Hash);
}
int get_hash(Node tmp){    //?�oHASH��
	int a[9],k=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[k++]=tmp.maze[i][j];
	int res=0;
	for(int i=0;i<9;i++){
		int k=0;
		for(int j=0;j<i;j++)
			if(a[j]>a[i])
				k++;
		res+=HASH[i]*k;
	}
	return res;
}
 
bool isok(Node tmp){    //�D�X�f��?�A�P?�O�_����
	int a[9],k=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[k++]=tmp.maze[i][j];
	int sum=0;
	for(int i=0;i<9;i++)
		for(int j=i+1;j<9;j++)
			if(a[j]&&a[i]&&a[i]>a[j])
				sum++;
	return !(sum&1);    //�Ѥ_��?��?��?�A�ҥH??���f��??��?�~�i��,��?�Ů�A�f��?�W�T?��?�A�G��l?��M��?��?�򪺰f��?�_���ʬۦP
}
 
int get_h(Node tmp){   //?�o��ɲ��?H
	int ans=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(tmp.maze[i][j])
				ans+=abs(i-(tmp.maze[i][j]-1)/3)+abs(j-(tmp.maze[i][j]-1)%3);
	return ans;
}
void astar(){    //�j��
	priority_queue<Node>que;
	que.push(s);
	while(!que.empty()){
		u=que.top();
		que.pop();
		for(int i=0;i<4;i++){
			v=u;
			v.x+=way[i][0];
			v.y+=way[i][1];
			if(v.check()){
				swap(v.maze[v.x][v.y],v.maze[u.x][u.y]);   //?�Ŧ�M�ەئ��?
				v.Hash=get_hash(v);			    //�o��HASH��
				if(vis[v.Hash]==-1&&isok(v)){   //�P?�O�_�w�M?�B�O�_�i��A�Z�ͥi�H���n
					vis[v.Hash]=i;           //�O�s��V
					v.g++;;                  //�w��Nɲ+1
					pre[v.Hash]=u.Hash;     //�O�s��?
					v.h=get_h(v);           //�o��s����ɲ��?H
					que.push(v);     //�J?
				}
				if(v.Hash==destination)
					return ;
			}
		}
	}
}
void print(){
	string ans;
	ans.clear();
	int nxt=destination;
	while(pre[nxt]!=-1){  //��?�򩹏�����?
		switch(vis[nxt]){   //�|�Ĥ�V??
		case 0:ans+='r';break;
		case 1:ans+='l';break;
		case 2:ans+='d';break;
		case 3:ans+='u';break;
		}
		nxt=pre[nxt];	
	}
	for(int i=ans.size()-1;i>=0;i--)
		putchar(ans[i]);
	puts("");
}
int main(){
	Node test;
	/*int value = 0;
	for( int i = 0; i < 3; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			test.maze[i][j] = value++;
		}
	}*/
 
	//cout << get_hash(test) << endl;
	
	char str[100];
	while(gets(str)!=NULL){
		int k=0;
		memset(vis,-1,sizeof(vis));
		memset(pre,-1,sizeof(pre));
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				if((str[k]<='9'&&str[k]>='0')||str[k]=='x'){
					if(str[k]=='x'){
						s.maze[i][j]=0;
						s.x=i;
						s.y=j;
					}
					else
						s.maze[i][j]=str[k]-'0';
				}
				else
					j--;
				k++;
			}
			if(!isok(s)){   //���l??���i��
				printf("unsolvable\n");
				continue;
			}
			s.Hash=get_hash(s);
			if(s.Hash==destination){   //���l???��???
				puts("");
				continue;
			}
			vis[s.Hash]=-2;
			s.g=0;s.h=get_h(s);
			astar();
			print();
	}
	return 0;
}
 
/*
�]�J�榡�G
1234567x8��ܡGx�N��Ů�A0��ܪŮ�
1 2 3
4 5 6
7 0 8
??�G
1 2 3
4 5 6
7 8 0
*/
