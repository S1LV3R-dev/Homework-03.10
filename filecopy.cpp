#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,fname,f1name;
	cout<<"Enter the name of source file:";
	cin>>finname;
	cout<<"Enter the name of destination file:";
	cin>>foutname;
    try{
        ifstream fin(finname);
        ofstream fout(foutname);
        if (!fin.is_open())
            cout << "Can't read file\n";
        if (!fout.is_open())
            cout << "Can't create file\n";
        
        char chr=fin.get();
        while (chr!=EOF){
        	fout.put(chr);
            chr=fin.get();
        }
        cout<<"Copy completed successfully!";
        fin.close();
    }
    catch (const char *error){
        cout << "Error! " << error << "!" <<  endl;
        system("pause");
        return 1;
    }
    return 0;
}
