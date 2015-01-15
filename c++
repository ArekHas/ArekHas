-----NEW THEME-----
//
// File Parser
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("test.json");
    string strOneLine;

    while (inFile)
    {
       getline(inFile, strOneLine);
       cout << strOneLine << endl;
    }

    inFile.close();

    return 0;
}


-----NEW THEME-----
//
// JSON Parser
//

#include <rapidjson/document.h>
#include <cstdio>
#include <rapidjson/filereadstream.h>
#include <string>
using namespace std;

int main() {

    const char json[] = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";
    printf("Original JSON:\n %s\n", json);

    rapidjson::Document d;
    d.Parse<0>(json);

    printf("%s\n", d["hello"].GetString());    // String 
    printf("%g\n", d["pi"].GetDouble());       // Double
    printf("%d\n", d["i"].GetInt());                // Intiger
    printf("%s\n", d["t"].GetBool());             // Boolean

    return 0;   
}


-----NEW THEME-----
//
// Strings
// In C++, strings are objects. As such, the functions associated with strings are member functions (such as str.length()). The following code provides example of the different ways that you can create strings (with different constructors):
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str1="one";
   string str2("two");
   string str3;
   string str4(str1);
   string str5(8,'a');
   string str6(str2,1);
   string str7(str2,1,1);

   str3="hello";

   //show the use of the length function
   cout << "The length of '" << str3 << "' is: " << str3.length() << endl;

   //show the use of the append function
   cout << "str6 before: " << str6 << endl;
   //The version of append used here is:
   //string& append( const string& str, size_type index, size_type len );
   str6.append(str1,1,1);
   cout << "str6 after: " << str6 << endl;

   //show the use of the + (concatenation) operator
   cout << "str1 before: " << str1 << endl;
   str1=str1 + ", " + str2;
   cout << "str1 after: " << str1 << endl;

   cout << str1 << endl;
   cout << str2 << endl;
   cout << str3 << endl;
   cout << str4 << endl;
   cout << str5 << endl;
   cout << str6 << endl;
   cout << str7 << endl;

   return 0;
}

/* OUTPUT START

The length of 'hello' is: 5
str6 before: wo
str6 after: won

str1 before: one
str1 after: one, two

one, two
two
hello
one
aaaaaaaa
won
w 

OUTPUT END */
