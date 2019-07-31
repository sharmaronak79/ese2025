#include<iostream>
#include<map>
#include<fstream>
#include<algorithm>

using namespace std;



struct word_rec_t {

    int letter_count; // the number of letters in the word

    bool takis_found; // whether or not the substring "takis" is found in the word

    bool raj_found; // whether or not the substring "raj" is found in the word

    string word_itself; // the word string itself

}

map<string, word_rec_t>mydict;


int main()
{
 ofstream outfile;
   outfile.open("words.txt");
    

    string search;
ifstream inFile;
string line;

inFile.open("words.txt");

if(!inFile){
cout << "Unable to open file" << endl;
exit(1);
}
cout << "Enter word to search for: ";
cin >>search;


size_t pos;
while(inFile.good())
  {
      getline(inFile,line); // get line from file
      pos=line.find(search); // search
      if(pos!=string::npos) // string::npos is returned if string is not found
        {
            cout <<"Found!";
            break;
        }
  }

}