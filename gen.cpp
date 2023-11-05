#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input("input.txt");
    string line;
    int i = 0;
    int fileNum = 0;
    cout << "Initialized";

    // Loop through text file and write to new files
    while (getline(input, line) && i < 30)
    {
        // Open File
        ofstream outFile("frames/frame" + to_string(fileNum) + ".mcfunction", std::fstream::app);

        // Write Lines
        outFile << "data modify block " << (i + 1) << " -48 20 HeldItem.Item.tag.display.Name set value '{\"text\":\"" << line << "\"}'" << endl;
        cout << "\n Line" << i;
        
        // Increment Loop #
        i++;
        // Detect if Line 30 Has Been Reached
        if (i == 30)
        {
            //  Add Schedule and Scoreboard Commands to Bottom of Each File
            outFile << "scoreboard players set Frame: BadApple " + to_string(fileNum) << endl;
            outFile << "schedule function lev:frames/frame" + to_string(fileNum + 1) + " 3s" << endl;

            // Reset Counter & File Number
            i = 0;
            fileNum++;
        }
    }

    return 0;
}