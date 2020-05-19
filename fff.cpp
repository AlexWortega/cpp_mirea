#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
class cl_base{

protected:
	string name;
public:
	vector<cl_base*> children;
	cl_base* parent;
	cl_base(cl_base* parent)
	{
	this->parent = parent;
		if(parent!= 0){
		parent->children.push_back(this);
		}
	}
	
	
	cl_base(cl_base*parent, string str){
	this->parent = parent;
	if(parent!=0){
	parent->children.push_back(this);
	}	
	name = str;
	
	}
	
	void setName(string str)
	{
	
	name = str;
	}
	string getName(){
	
	return name;
	}
	void show(){
	if(parent == 0 ){
	cout<< name<< endl;
	}
	cout<< name;
	for(int i=0; i<children.size(); i++){
	
	cout<< "  " << children[i]->name;
		
	
	}
	for(int i=0; i <children.size(); i++){
	if(children[i]->children.size() != 0){
	cout<< endl;
	children[i]->show();
	break;
	
	}
		
		
		
		
	}
	
	
	
	
	}

};

class cl1 : public cl_base
{
public:
	cl1(cl_base* parent) : cl_base(parent){

}
	cl1(cl_base* parent, string str) :cl_base(parent,str){

}

};

class cl2 : public cl_base
{
public:
cl2(cl_base* parent) :cl_base(parent){

}
cl2(cl_base* parent, string str) :cl_base(parent, str){
}
};




int main()
{
	string parent, name;
	cl_base* current;
	cl_base* last;
	cin >> name;
	cl1 root(0,name);
	current = &root;
	last = current;
	while(1){
	cin >> parent >> name;
		if(parent == name){
		break;
		}
	if(parent == last->getName()){
	current = new cl2(last, name);
	}
	else if( parent == current->getName()){
	
		last = current;
		current = new cl2(current, name);
	
	
	}
		
		
	}
	root.show();
	
	return(0);
}
*/
class Tree{
private:
	string name;
	int stat;
	vector<Tree *> leafs;
public:
	Tree(string name, int stat): name(name), stat(stat){}
	
~Tree(){
leafs.clear();
}
void append(Tree * l){
leafs.push_back(l);
}	
Tree * find(string name, bool &f){
if(name == this->name){
f= true;
return this;
}
for(Tree * leaf : leafs){
Tree * result = leaf->find(name, f);
if(f) return result;	
}
return nullptr;
}
void print(int &current, int &max){
cout<<"The object " << name << (stat > 0 ? "is ready" : " is not ready");
if(++current < max) cout << endl;
for(Tree * leaf : leafs)
leaf->print(current, max);

}	
};

class Two : Tree{
public:
Two(string name, int stat) : Tree(name, stat){
};
};
//class srtiggj
class Three : Tree{
public:
	Tree(string name, int stat) : Tree(name, stat)
	{
		
	};

};


int main(){
string stopword = "endtree"; //зочем я это делаю
string name, parentname;
int stat, cl;
int counter = 1;
cin >> name;

	Tree root = Tree(name,1);
while(true){
	cin >> parentname;
	if(parentname == stopword)break;
	cin >> name >> cl >> stat;
	bool f = false;
	
	Tree * parent = root.find(parentname, f);
	
	
	
	Tree * leaf;
	
	if(cl == 2)
	{
	leaf = (Tree *) new Two(name, stat);
	}
	else if( cl == 3)
	{
	leaf = (Tree *) new Three(name,stat);
	}
	else{
	leaf =  new Tree(name, stat);
	}
	parent->append(leaf);
	counter++;
}
	cout<< "Test result"<<endl;
	int current = 0 ;
	root.print(current, counter);
	return 0;
}







