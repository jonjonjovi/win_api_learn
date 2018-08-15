#include<iostream>
#include<string>
#include<windows.h>
void createdir(std::string);
void cfile(std::string val);
int main(int argc, char* argv[])
{
    std::cout << "Entered:"<< argc << std::endl;
    for (int i = 1; i < argc; ++i)
        std::cout << argv[i] << "\n";
    
    
    createdir(argv[1]);
    std::string cmd = (std::string)argv[1] + (std::string)"\\" + (std::string)argv[2];
    std::cout << cmd << std::endl;
    cfile(cmd);
    system("PAUSE");
    return 0;
}

void createdir(std::string val)
{
    LPCSTR lpPathName = val.c_str();
    BOOL val2 = CreateDirectoryA(lpPathName,NULL);
    std::cout << val2 << std::endl;

}

void cfile(std::string val)
{
    LPCSTR lpFileName = val.c_str();
    HANDLE hfile = CreateFileA(lpFileName,
        GENERIC_READ,
        0,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_NORMAL,
        NULL);

}