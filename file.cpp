#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    // check if file name provided
    if (argc != 2) {
        cerr << "to use: " << argv[0] << " <file_name>\n";
        return 1;
    }
    string input = argv[1];
  
    //check if file exists
    if (!fs::exists(input)) {
        cerr << "error: file \"" << input << "\" was not found.\n";
        cerr << "list of files in this folder:\n";
        for (const auto& entry : fs::directory_iterator(fs::current_path()))
            cout << entry.path().filename().string() << '\n';
        return 1;
    }

    ifstream fin;
    string line;
    fin.open(input);

    int lines = 0, phraces = 0, words = 1, signs = 0;
    while (getline(fin, line))
    {
        lines++;
        for (int i = 0; i < line.length(); i++)
        {
            signs++;
            if (line[i] == '.')
            {
                phraces++;
            }
            if (line[i] == ' ' || line[i] == '-')
            {
                words++;
            }
        }
    }
    fin.close();
    cout<<"summary of file: "<<endl;
    cout << "lines: " << lines << "\nphraces: " << phraces << "\nwords: " << words << "\nsigns: " << signs << endl;
    return 0;
}

// good result: Generated 1 paragraph, 100 words, 664 bytes of Lorem Ipsum