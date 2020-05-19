

//////////////// file main.cpp////////////////

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Tree{
private:
string name;
int stat;
vector<Tree *> leafs;

public:
	Tree(string name, int stat)
		: name(name), stat(stat){
		}

~Tree(){
	leafs.clear();
}
		void append(Tree * l){
			leafs.push_back(l);
		}

Tree * find(string name, bool &f){
	if (name == this->name){
		f = true;
		return this;
	}

for (Tree * leaf : leafs){
	Tree * result = leaf->find(name, f);
		if (f) return result;
}

return nullptr;
}
void print (int &current, int &max){
	cout << "The object " << name << (stat > 0 ? " is ready" : " is not ready");
	if (++current < max) cout << endl;

for (Tree * leaf : leafs)
	leaf->print(current, max);
}
};

class Two : Tree{
	public:
	Two(string name, int stat):Tree(name, stat){
	};
};
class Three : Tree{
public:
	Three(string name, int stat) : Tree(name, stat){
	};
};

int main(){
string name, parentname;
int stat, cl;
int counter = 1;

	cin >> name;

	Tree root = Tree(name,1);

while (true){
	cin >> parentname;
	if (parentname == "endtree") break;
	
	cin >> name >> cl >> stat;

	bool f = false;
		Tree * parent = root.find(parentname, f);
		Tree * leaf;
if (cl == 2) {
	leaf = (Tree *) new Two(name, stat);
}
else if (cl == 3){
	leaf = (Tree *) new Three(name, stat);
}
else{
	leaf = new Tree(name, stat);
}
	parent->append(leaf);
counter++;
}

cout << "Test result\n";

int current = 0;
root.print(current, counter);

return(0);
}
