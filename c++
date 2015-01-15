-----NEW-----
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


-----NEW-----
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
~
