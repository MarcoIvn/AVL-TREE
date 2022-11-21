 #include <cstddef>
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <algorithm>
using namespace std;
#include "bst.h"

//Marco Iván Pacheco Martínez
//Andrew Williams Steven Ponce

BST<string> readFile(string filename){
  BST<string> bst;
  ifstream archivo(filename); //O(1)
  string linea; //O(1)
  char delimitador = ','; //O(1)
  getline(archivo ,linea); //O(1)
  cout<<"Archivo Leido"<<endl; //O(1)
  while(getline(archivo,linea)){
    stringstream stream(linea);
    string id,first_name,last_name,ZIP,city;//O(1)
    getline(stream, id,delimitador);//O(1)
    getline(stream, first_name, delimitador);//O(1)
    getline(stream, last_name, delimitador);//O(1)
    getline(stream, ZIP, delimitador);//O(1)
    getline(stream, city, delimitador);//O(1)
    bst.insert(city);
  }
  return bst;
}

int main(int argc, char * argv[]) {
  //BST<int> bst;  

  /*bst.insert(78); left test
  bst.insert(89);
  bst.insert(100);*/

  /*bst.insert(100); right test
  bst.insert(89);
  bst.insert(78);*/

  /*bst.insert(30); Double left test
  bst.insert(40);
  bst.insert(35);*/

  /*bst.insert(40);  Double right test
  bst.insert(35);
  bst.insert(36);*/

 
  /*bst.insert(40);   Remove test
  bst.insert(35);
  bst.insert(36);
  bst.insert(10);
  bst.insert(15);
  bst.inOrden();
  bst.is_balance();
  cout<<endl;
  cout << "root: " << bst.getroot() << endl;
  bst.remove(40);
  bst.inOrden();
  bst.is_balance();
  cout<<endl;
  cout << "root: " << bst.getroot() << endl;*/

  BST<string>bst = readFile("bitacora.csv");
  bst.inOrden();
  cout<<endl;
  bst.is_balance();
  cout << "root: " << bst.getroot() << endl;
  cout<<bst.lenght()<<endl;
  cout<<"***Remove cases***"<<" :deleted element"<<endl;
  cout<<bst.remove("Marina")<<" :deleted element"<<endl;
  cout<<bst.remove("Wylie")<<" :deleted element"<<endl;
  cout<<bst.remove("Pegram")<<" :deleted element"<<endl;
  cout<<bst.remove("Marina Del Rey")<<" :deleted element"<<endl;
  cout<<bst.remove("Loveland")<<" :deleted element"<<endl;
  cout<<bst.remove("East Freedom")<<" :deleted element"<<endl;
  cout<<bst.remove("Benson")<<" :deleted element"<<endl;
  cout<<bst.remove("Abbeville")<<" :deleted element"<<endl;
  cout<<bst.remove("Kenton")<<" :deleted element"<<endl;
  cout<<bst.remove("New York")<<" :deleted element"<<endl;
  bst.is_balance();
  cout << "root: " << bst.getroot() << endl;
  cout<<bst.lenght()<<endl;
}

