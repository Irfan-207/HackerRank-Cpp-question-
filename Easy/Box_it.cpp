// QU : Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h. The default constructor of the class should initialize l, b and h to 0. The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l,b and h to length, breadth and height.The copy constructor Box(Box B) should set l,b and h to B's l,b and h, respectively.
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    private:
        int l ;
        int b;
        int h;  
    public:
        void setLength(int l){
            this -> l = l;
        } 
        int getLength(){
            return l;
        }
        void setBreadth(int b){
            this -> b = b;
        } 
        int getBreadth(){
            return b;
        }
        void setHeight(int h){
            this -> h = h;
        } 
        int getHeight(){
            return h;
        }
        
        // default constractor 
        Box():l(0),b(0),h(0){}
        // parameterized constractor 
        Box(int length , int breadth , int height){
            l = length;
            b = breadth;
            h = height;
        }
        // copy constractor 
        Box(const Box& other) : l(other.l) ,b(other.b),h(other.h){}
         
         long long CalculateVolume(){
            return static_cast<long long>(l)*h*b;
         }
         
         bool operator<(const Box& B) const {
            if (l < B.l) {
                return true;
            }
            if (l == B.l && b<B.b) {
                return true;
            }
            if (l == B.l && b == B.b && h< B.h) {
                return true;
            }
            return false;
         }
        
        friend ostream& operator<<(ostream& os , const Box& box){
            os << box.l << " " << box.b << " " << box.h ;
            return os;
        }
};

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