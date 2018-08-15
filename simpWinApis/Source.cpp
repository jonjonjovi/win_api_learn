#include<iostream>
#include<string>
#include<windows.h>
void createdir(std::string);

int main(int argc, char* argv[])
{
    std::cout << "Entered:"<< argc << std::endl;
    for (int i = 1; i < argc; ++i)
        std::cout << argv[i] << "\n";
    
    
    createdir(argv[1]);
    system("PAUSE");
    return 0;
}

void createdir(std::string val)
{
    LPCSTR lpPathName = val.c_str();
    BOOL val2 = CreateDirectoryA(lpPathName,NULL);
    std::cout << val2 << std::endl;

}