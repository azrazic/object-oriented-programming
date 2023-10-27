#include<iostream>
#include<string>

using namespace std;

namespace Temperature{
  const double c_k=273.15;
}

namespace Speed{
  const double k_m=1.60934;
}

namespace Weight{
  const double kg_lb=2.20462;
}

namespace Fuel{
  const float km_mpg=235.215;
}

namespace Length{
  const double ly_km=9.461e+12;
  const float ft_m=3.28084;
  const float inc_cm=2.54;
} 

int main(int argc, char *argv[])
{
  int option;
  cout<<"Welcome to Unit converter. Please enter one of the following options: " <<endl;
  cout<<"1. Temperature"<<endl;
  cout<<"2. Speed"<<endl;
  cout<<"3. Length"<<endl;
  cout<<"4. Weight"<<endl;
  cout<<"5. Fuel economy"<<endl;
  cout<<"Your choice: ";
  cin>>option;
  if(option < 0 || option>5){
   cout<<"There is no such option!"<<endl;}
  else{
    if (option==1){
      int choice;
      cout<<"Please choose converter:"<<endl;
      cout<<" 1. Celsius to Fahrenheit"<<endl;
      cout<<" 2. Fahrenheit to Celsius"<<endl;
      cout<<" 3. Celsius to Kelvin"<<endl;
      cout<<" 4. Kelvin to Celsius"<<endl;
      cout<<" 5. Fahrenheit to Kelvin"<<endl;
      cout<<" 6. Kelvin to Fahrenheit"<<endl;
      cout<<"Your choice: ";
      cin>>choice;

      if(choice < 0 || choice>6){
        cout<<"There is no such option!"<<endl;}
      else{
        if(choice==1){
          float temp;
          do{
            cout<<"Enter the temperature in Celsius: ";
            cin>> temp;
            if(temp< -273.15) {
              cout<<"Temperature cannot be below -273.15 Celsius!"<<endl;}
          }while(temp< -273.15);
          cout<<temp<<"C is "<<temp*9/5+32<<"F"<<endl;
        }
        else if(choice==2){
          float temp;
          do{
            cout<<"Enter the temperature in degrees Fahrenheits: ";
            cin>> temp;
            if(temp< -459.67) {
              cout<<"Temperature cannot be below -459.67 Fahrenheit!"<<endl;}
          }while(temp< -459.67);
          cout<<temp<<"F is "<<(temp - 32)*5/9<<"C"<<endl;
        }
        else if(option==3){
          float temp;
          do{
             cout<<"Enter the temperature in celsius: ";
             cin>> temp;
             if(temp< -273.15) {
               cout<<"Temperature cannot be below -273.15 celsius!"<<endl; }
          }while(temp< -273.15);
          cout<<temp<<"C is "<<temp + Temperature::c_k<<"K"<<endl;
        }
        else if(option==4){
          float temp;
          do{
            cout<<"Enter the temperature in kelvin: ";
            cin>> temp;
            if(temp< 0) {
              cout<<"Temperature cannot be below 0 Kelvin!"<<endl;}
          }while(temp<0);
          cout<<temp<<"K is "<<temp - Temperature::c_k<<"C"<<endl;
        }
        else if(option==5){
          float temp;
          do{
            cout<<"Enter the temperature in Fahrenheit: ";
            cin>> temp;
            if(temp< -459.67) {
              cout<<"Temperature cannot be below -459.67 Fahrenheit!"<<endl;}
          }while(temp< -459.67);
          cout<<temp<<"F is "<<(temp - 32)*5/9+273.15<<"K"<<endl;
        }
        else{
          float temp;
          do{
            cout<<"Enter the temperature in Kelvin: ";
            cin>> temp;
            if(temp< 0) {
              cout<<"Temperature cannot be below 0 Kelvin!"<<endl;}
          }while(temp<0);
          cout<<temp<<"K is "<<(temp - 273.15)*9/5+32<<"C"<<endl;
        }
      }
    }
    else if(option==2){
      int choice;
      cout<<"Please choose converter:"<<endl;
      cout<<" 1. MPH to KMH"<<endl;
      cout<<" 2. KMH to MPH"<<endl;
      cout<<"Your choice: ";
      cin>>choice;
      if(choice < 0 || choice>2){
        cout<<"There is no such option!"<<endl;}
      else{
        if(choice==1){
          float speed;
          do{
            cout<<"Enter the speed in miles per hour: ";
            cin>>speed;
            if(speed <0)
              cout<<"Speed cannot be negative!"<<endl;
          }while(speed<0);
          cout<<speed<<"MPH is "<<speed * Speed::k_m<<"KMH"<<endl;
        }
        else{
          float speed;
          do{
            cout<<"Enter the speed in kilometer per hour: ";
            cin>>speed;
            if(speed<0){
              cout<<"Speed cannot be negative!"<<endl;}
          }while(speed>0);
          cout<<speed<<"KMH is "<<speed/Speed::k_m<<"MPH"<<endl;
        }
      }
    }
    else if(option==3){
      int choice;
      cout<<"Please choose converter:"<<endl;
      cout<<" 1. Light years to kilometers"<<endl;
      cout<<" 2. Kilometers to light years"<<endl;
      cout<<" 3. Feet to meters"<<endl;
      cout<<" 4. Meters to feet"<<endl;
      cout<<" 5. Inches to centimeters"<<endl;
      cout<<" 6. Centimeters to inches"<<endl;
      cout<<"Your choice: ";
      cin>>choice;

      if(choice < 0 && choice>6){
        cout<<"There is no such option!"<<endl;}
      else{
        if(choice==1){
          float length;
          do{
            cout<<"Enter the length in light years: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" light years is "<<length*Length::ly_km<<"km"<<endl;
        }
        else if(choice==2){
          float length;
          do{
            cout<<"Enter the length in kilometers: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" kilometers is "<<length/Length::ly_km<<"light years"<<endl;
        }
        else if(choice==3){
          float length;
          do{
            cout<<"Enter the length in feet: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" ft is "<<length*Length::ft_m<<"m"<<endl;
        }
        else if(choice==4){
          float length;
          do{
            cout<<"Enter the length in meters: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" m is "<<length*Length::ft_m<<"ft"<<endl;
        }
        else if(choice==5){
          float length;
          do{
            cout<<"Enter the length in inches: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" inches is "<<length*Length::inc_cm<<"cm"<<endl;
        }
        else{
          float length;
          do{
            cout<<"Enter the length in centimeters: ";
            cin>>length;
            if(length<0){
              cout<<"Length cannot be negative!"<<endl;}
          }while(length<0);
          cout<<length<<" centimeters is "<<length/Length::inc_cm<<"inches"<<endl;
        }
      }
    }
    else if(option==4){
      int choice;
      cout<<"Please choose converter:"<<endl;
      cout<<" 1. Kilogram to pound"<<endl;
      cout<<" 2. Pound to kilogram"<<endl;
      cout<<"Your choice: ";
      cin>>choice;
      if(choice < 0 || choice>2){
        cout<<"There is no such option!"<<endl;}
      else{
        if(choice==1){
          float weight;
          do{
            cout<<"Enter the weight in kilogram: ";
            cin>>weight;
            if(weight<0){
              cout<<"Weight cannot be negative!"<<endl;}
          }while(weight<0);
          cout<<weight<<"kg is"<<weight*Weight::kg_lb<<"lb"<<endl;
        }
        else{
          float weight;
          do{
            cout<<"Enter the weight in pounds: ";
            cin>>weight;
            if(weight<0){
              cout<<"Weight cannot be negative!"<<endl;}
          }while(weight<0);
          cout<<weight<<"lb is"<<weight/Weight::kg_lb<<"kg"<<endl;
        }
      }
    }
    else{
      int choice;
      cout<<"Please choose converter:"<<endl;
      cout<<" 1. Liter per 100 kilometers to miles per gallon"<<endl;
      cout<<" 2. Miles per gallon to liter per 100 kilometers"<<endl;
      cout<<"Your choice: ";
      cin>>choice;
      if(choice < 0 || choice>2){
        cout<<"There is no such option!"<<endl;}
      else{
        if(choice==1){
          float fuel;
          do{
            cout<<"Enter the fuel expenditure in liters: ";
            cin>>fuel;
            if(fuel<0){
              cout<<"Fuel cannot be negative!"<<endl;}
          }while(fuel<0);
          cout<<fuel<<"liter per 100 kilometers is"<<fuel*Fuel::km_mpg<<" mpg"<<endl;
        }
        else{
          float fuel;
          do{
            cout<<"Enter the the fuel expenditure in gallons: ";
            cin>>fuel;
            if(fuel<0){
              cout<<"Fuel cannot be negative!"<<endl;}
          }while(fuel<0);
          cout<<fuel<<"mpg is"<<fuel / Fuel::km_mpg<<"liters per 100 kilometers"<<endl;
        }
      }
    }
  }
  return 0;
}
