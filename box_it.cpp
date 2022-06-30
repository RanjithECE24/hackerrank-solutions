#include<bits/stdc++.h>

using namespace std;

class Box {
    public:
        Box() : Box(0, 0, 0) {}
        Box(int l, int b, int h) : l(l), b(b), h(h) {}
        Box(Box const& b) : l(b.getLength()), b(b.getBreadth()), h(b.getHeight()) {}
        int getLength() const {
            return l;
        }
        int getBreadth () const {
            return b;
        }
        int getHeight () const {
            return h;
        }
        long long CalculateVolume() const {
            return (long long)l*b*h;
        }
        
        bool operator<(Box& other) { 
            return ((l < other.getLength()) ||
                    ((b < other.getBreadth()) && (l == other.getLength())) ||
                    ((h < other.getHeight()) && (b == other.getBreadth()) && (l == other.getLength()))); }
    private:
        int l, b, h;
};

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}