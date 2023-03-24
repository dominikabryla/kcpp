#include <iostream>
#include <string>
using namespace std;

int main(){

  string text;
  text = "text1";
  cout << "Empty: "<<text.empty()<<'\n';
  cout << "Size: "<<text.size()<<'\n';
  cout << "Lenght: "<<text.length()<<'\n';
  cout << "At: "<<text.at(3)<<'\n';
  cout << "Erase: "<<text.erase()<<'\n';
  cout << "Find: "<<text.find("tex")<<'\n';
  cout << "Substr: "<<text.substr(2)<<'\n';
  cout << "Append: "<<text.append("text2")<<'\n';
  text.clear();
  cout << "Clear: " << text<< '\n';


}