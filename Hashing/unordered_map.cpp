// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main()
// {
// unordered_map<string , double > umap;
// umap["PI"]=3.14;
// umap["hello"]=99;
// umap["world"]=99.99;

// for (auto x : umap )
// {
//     cout << x.first << " " <<  x.second << endl;
// }

// umap.insert(make_pair("nimesh",100));

// string key = "nimesh";

// if (umap.find(key)== umap.end())
// {
//     cout << "Key is not present" << key <<  endl;
// }
// else
// {
//     cout << "Key is present" << endl;
// }

//  key= "Pareek";

// if (umap.find(key) == umap.end())
// {
//     cout << "Key is not present" << key << endl; // IT IS LOOKING AT THE END WHERE KEY IS NOT PRESENT
// }
// else{
//     cout << "Key is present"  << endl;
// }

// unordered_map<string,double> :: iterator itr;
// for(itr = umap.begin() ; itr != umap.end() ; itr++)
// {
//    cout << itr->first << " " << itr->second << endl;
// }

// return 0;
// }

#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
unordered_map< string , int > umap;
// THERE ARE INSERT DELETE AND SEARCH IN HASHING 

// insert

// 1. by making pair
pair<string,int> x("abc",1);
umap.insert(x); 

// 2. method to insert
umap["def"]=2;

// finding 
// 1. methood
cout << umap["def"] << endl;

// 2. method
cout << umap.at("def") << endl;

// careful
cout << umap["ghi"] << endl;  // this will insert the value and gives us 0 as an output but when use at it 
// gives an eror bczz key is not present

//  when using at it will give error when key is not present and [ ] this one will insert so we will use
// count function which tells us one key comes how many times and it give 0 or 1 only bczz in map one 
// vaslue can be only once not twice 

if (umap.count("ghi") > 0 )
{
    cout << "ghi is present " << endl;
}
else 
{
    cout << "ghi is not present" << endl;
}

// erase
umap.erase("abc");



return 0;
}