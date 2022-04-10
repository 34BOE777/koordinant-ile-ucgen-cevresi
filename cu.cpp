#include <iostream>
#include <cmath>
using namespace std;
class cu{
int x,y;
public:
	cu(){}
	cu(int x,int y){
		this->x=x;
		this->y=y;
	}
	void setx(int x){
		this->x=x;
	}
	int getx(){
		return x;
	}

	void sety(int y){
		this->y=y;
	}
	int gety(){
		return y;
	}


	void yazdir(){
		int x,y;
		cout<<"x ve y koordinantlarını gir seriiiiiii "<<endl;
		cin>>x;
		cin>>y;
		setx(x);
		sety(y);
	}
};
int main()
{
	cu a1,a2,a3;
	a1.yazdir();
	a2.yazdir();
	a3.yazdir();
	cout<<"üçgenin çevresi: "<<sqrt(pow(a1.getx()-a2.getx(),2)+pow(a1.gety()-a2.gety(),2))+sqrt(pow(a1.getx()-a3.getx(),2)+pow(a1.gety()-a3.gety(),2))+sqrt(pow(a3.getx()-a2.getx(),2)+pow(a3.gety()-a2.gety(),2))<<endl;
	return 0;
}


