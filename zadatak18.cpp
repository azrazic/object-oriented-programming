#include<iostream>
#include<vector>
#include<algorithm>
int main(int argc, char *argv[])
{
  std::vector<int> vektor;
  int num;
  int suma=0;
  do{
    std::cout << "Unesite vrijednost: ";
    vektor.push_back(num);
  }
  while(std::cin>>num);

  std::cout <<"Uneseni brojevi: "<<std::endl;
  std::cout<<"***************************"<<std::endl;
  for(int j=1; j<vektor.size(); ++j){
    std::cout<<vektor[j];
  }
  std::cout <<" "  << std::endl;
  std::cout <<"Sortirani brojevi:"<<std::endl;
  std::cout<<"***************************"<<std::endl;
  std::sort(vektor.begin(), vektor.end());
  for(int i=1; i<vektor.size(); ++i){
    std::cout <<vektor.at(i)<<" ";
    suma+=vektor[i];
  }
  std::cout <<" "  << std::endl;
  std::cout << "Suma brojeva: " <<suma<< std::endl;
  return 0;
}

