#include <iostream>
#include <string>

using namespace std;
class fecha{
    public:
        explicit fecha(int month,int day, int year)
        :m{month},d{day},y{year} {}

        int getMonth() const{
            return m; 
        }

        int getDay()const {
            return d;

        }
        int getYear()const{
            return y;
        }

        void setMonth(int month){
            if (month>0 and month<=12){
                m=month;
            }
            else{
                cout<<"mes invalido, debe estar entre 1 y 12... "<<endl;
            }
        }

        void setDay(int day){
            if(0<=day and day<=30 ){
                d=day;
            }
            else{
                cout<<"dia invalido, debe estar entre 1 y 30... "<<endl;
            }
        }

        void setYear(int year){
            y=year;
        }
        


        void MostrarFecha() const{
            cout << d <<"/"<< m << "/" << y << endl;
        }
    private:
        int d;
        int m;
        int y;   

};
