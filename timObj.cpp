#include "timObj1.hpp"

int main() {

  	Car Mersedes("Mersedes-Banz", "SLS", "Elegante", "Sedan", "black", 2020, 320, 3.2);
        Mersedes.setSalary(250000);

  	Car BMW("BMW", "X6", "Sport", "Jeep", "red", 2021, 300, 5.5);
	BMW.setSalary(185000);

	Car Audi("Audi", "A8","Classic", "Sedan", "Yellow", 2019, 360, 5.0);
	Audi.setSalary(235000);
	
	Car Toyota("Toyota", "GL-460","4x4", "Jeep", "Green", 2019, 280, 4.6);
        Toyota.setSalary(128000);


	int x;
	cout <<"- please number -" << endl;
	cout <<"Mersedes-Banz .. 1"<< endl;
	cout <<"BMW ............ 2"<< endl;
	cout <<"Audi ........... 3"<< endl;
	cout <<"Toyota ......... 4"<< endl;
	cin >> x;

	if(x==1){
		cout<<" Name/ "<<Mersedes.name<<"\n Model/  "<<Mersedes.model<< "\n Class/ "<<Mersedes.klas<<"\n Style/ "<<Mersedes.style<<"\n Year/ " <<Mersedes.year<<"\n Speed/ " <<Mersedes.speed<<"\n Engineer/ " <<Mersedes.matorLitr<<"\n " <<endl;
		cout<<"Amount/ "<<Mersedes.getSalary()<<"$"<<endl;
	}
	else if(x==2){
  		cout<<" Name/ "<<BMW.name<<"\n Model/ "<<BMW.model<<"\n Class/ "<<BMW.klas<<"\n Style/ "<<BMW.style<<"\n Year/ "<< BMW.year<<"\n Speed/ "<<BMW.speed<<"\n Engineer/ "<<BMW.matorLitr<<endl;
		cout<<"Amaunt/ "<<BMW.getSalary()<<"$"<<endl;
	}
	else if(x==3){
		cout<<" Name/ "<<Audi.name<<"\n Model/ "<<Audi.model<<"\n Klass/ "<<Audi.klas<<"\n Style/ "<<Audi.style<<"\n Year/ "<< Audi.year<<"\n Speed/ "<<Audi.speed<<"\n Mator/ "<<Audi.matorLitr<<"\n"<<endl;
		cout<<"Amaunt/ "<<Audi.getSalary()<<"$"<<endl;
	}
	else{
                cout<<" Name/ "<<Toyota.name<<"\n Model/ "<<Toyota.model<<"\n Class/ "<<Toyota.klas<<"\n Style/ "<<Toyota.style<<"\n Year/ "<< Toyota.year<<"\n Speed/ "<<Toyota.speed<<"\n Engineer/ "<<Toyota.matorLitr<<endl;
                cout<<"Amaunt/ "<<BMW.getSalary()<<"$"<<endl;
	}

	return 0;
}

