 /*------------  1. Header Files ----------- */
#include<bits/stdc++.h>
using namespace std;

/*------------ 2. Typedef's ----------- */
typedef long long int LL;
typedef unsigned long long int ULL;
typedef char CH;

/*------------ 3. I/O ----------- */
#define C               cin  >>
#define O               cout <<
#define E               << "\n";
#define OE              O "\n";
#define SE              <<" "<<
#define OSE             O " ";

/*------------ 4. Declarations ----------- */
#define H               CH h; C h;
#define K               LL k; C k;
#define M               LL m; C m;
#define N               LL n; C n;
#define Q               LL q; C q;
#define TT              LL tt; C tt;
#define W               LL w; C w;
#define X               LL x; C x;
#define Y               LL y; C y;
#define Z               LL z; C z;

#define AS              LL ans=0;
#define CT              LL c=0;
#define CTA(x)          LL ca[x]={0};
#define CT2             LL c1=0,c2=0;
#define SM              LL sum=0;
#define MM              LL minv=INT_MAX,maxv=INT_MIN;

#define BA(x)           bool *ba=new bool[x]; memset(ba,false,sizeof(bool)*x);
#define BB(x)           bool *bb=new bool[x]; memset(bb,false,sizeof(bool)*x);
#define F(x)            LL *f=new LL[x]; memset(f,0,sizeof(LL)*x);
#define SZ(x)           const LL sz=x;

/*------------ 5. Loop's ----------- */
#define I(a,n)          for(LL i=(a);i<(n);i++)
#define J(a,n)          for(LL j=(a);j<(n);j++)
#define II(a,n,x)       for(LL i=(a);i<(n);i+=(x))
#define JI(a,n,x)       for(LL j=(a);j<(n);j+=(x))
#define RI(n,a)         for(LL i=(n-1);i>=(a);i--)
#define RJ(n,a)         for(LL j=(n-1);j>=(a);j--)
#define RID(n,a,x)      for(LL i=(n-1);i>=(a);i-=x)

/*------------ 6. Integer Array Scan Operations ----------- */
#define A(x)            LL *a = new LL [x];
#define B(x)            LL *b = new LL [x];
#define SA(x)           A(x); I(0,x) C a[i];
#define SB(x)           B(x); I(0,x) C b[i];
#define NA              N SA(n)
#define MB              M SB(m)

#define NASM            N A(n) SM I(0,n){ C a[i]; sum+=a[i];}
#define NASMA           N A(n+5) LL *suma = new LL [n+5]; suma[0]=0; LL tn=n+1; I(1,tn) { C a[i]; suma[i]=a[i]+suma[i-1];}
#define NF(x)           N F(x) I(0,n){ X; f[x]++;}
#define NAF(x)          N A(n) F(x) I(0,n){ C a[i]; f[a[i]]++;}

#define TA(x,y,z)       x **a=new x* [y]; I(0,y){ a[i]=new x[z]; J(0,z) a[i][j]=0;}
#define ST(x,y,z)       TA(x,y,z) I(0,y) J(0,z) C a[i][j];
#define ST1(x,y,z)      TA(x,y+5,z+5) I(1,y+1) J(1,z+1) C a[i][j];
#define NT(x)           N ST(x,n,n)
#define NT1(x)          N ST1(x,n,n)
#define NMT(x)          N M ST(x,n,m)
#define NMT1(x)         N M ST1(x,n,m)

/*------------ 7. STL Operations ----------- */
#define pb(x)           push_back(x);

/*------------ 8. String ----------- */

#define S               string s,ts; C s; LL sl =s.length();
#define T               string t; C t; LL tl =t.length();

/*------------ 9. Pair ----------- */
#define pf(x)           p[x].first
#define ps(x)           p[x].second
#define P(x,y,z)        pair<x,y> *p = new pair<x,y> [z];
#define SP(x,y,z)       P(x,y,z) I(0,z){ C pf(i)>>ps(i);}
#define NP(x,y)         N SP(x,y,n)

/*------------ 10. List ----------- */
#define L(x)            list<LL> *l=new list<LL>[x+1];
#define NL              N L(n)

/*------------ 11. Other ----------- */
#define FR              freopen("i.txt","r",stdin);
#define R               return 0;
#define SYC             ios::sync_with_stdio(false);

/*------------ 12. Main Program ----------- */
LL sum(LL x,LL y)
{
    return x+y;
}
int main()
{
    X Y
    O sum(x,y);
    R
}
