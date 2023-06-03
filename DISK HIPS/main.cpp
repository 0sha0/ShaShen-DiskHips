#include <windows.h>
#include <iostream>
#include <thread>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;
HANDLE DiskHandle1 = NULL;
HANDLE DiskHandle2 = NULL;
HANDLE DiskHandle3 = NULL;
HANDLE DiskHandle4 = NULL;
HANDLE DiskHandle5 = NULL;
HANDLE DiskHandle6 = NULL;
HANDLE DiskHandle7 = NULL;
HANDLE DiskHandle8 = NULL;
HANDLE DiskHandle9 = NULL;
HANDLE DiskHandle10 = NULL;
HANDLE DiskHandle11 = NULL;
HANDLE DiskHandle12 = NULL;
//======================================================================
void COLOR_PRINT(const char* s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
//=============================页面功能=================================
int main() {
    cout << "===================================================" << endl;
    string Board1 = "  _____  _     _      _    _ _           ";
    string Board2 = " |  __ \\(_)   | |    | |  | (_)          ";
    string Board3 = " | |  | |_ ___| | __ | |__| |_ _ __  ___ ";
    string Board4 = " | |  | | / __| |/ / |  __  | | '_ \\/ __|";
    string Board5 = " | |__| | \\__ \\   <  | |  | | | |_) \\__ \\";
    string Board6 = " |_____/|_|___/_|\\_\\ |_|  |_|_| .__/|___/";
    string Board7 = "                              | |        ";
    string Board8 = "                              | |        ";
    cout << Board1 << endl << Board2 << endl << Board3 << endl << Board4 << endl << Board5 << endl << Board6 << endl << Board7 << endl << Board8 << endl;
    cout << "===================================================" << endl;
    cout << "欢迎使用DiskHips ShaShen特供版" << endl;
    cout << "作者已将此软件开源到了Github上面" << endl;
    cout << "功能选择(DiskHips.exe Admin)" << endl;
    cout << "1. 开启当前硬盘保护\\\\.\\PHYSICALDRIVE0" << endl;
    cout << "2. 开启所有硬盘保护(All DiskHips)" << endl;
    cout << "3. 停止所有硬盘保护" << endl;
    cout << "4. 退出此软件" << endl;
    cout << "===================================================" << endl;
    cout << "Welcome to the DiskHips ShaShen Special Edition" << endl;
    cout << "The author has opened up this software on Github" << endl;
    cout << "Function Selection (DiskHips. exe Admin)" << endl;
    cout << "1. Enable current hard drive protection\\\\.\\PHYSICALDRIVE0" << endl;
    cout << "2. Enable All DiskHips" << endl;
    cout << "3. Stop all hard drive protection" << endl;
    cout << "4. Stop and EXIT" << endl;
    cout << "===================================================" << endl;
    while (1) {
        cout << "输入你的选择 //Enter Your Choice" << endl;
        string MainChoice;
        cin >> MainChoice;
        if (MainChoice == "1") {
            if (DiskHandle1 = CreateFile(L"\\\\.\\PHYSICALDRIVE0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\PHYSICALDRIVE0 success\n",5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\PHYSICALDRIVE0 Fail\n", 4);
            }
        }
        if (MainChoice == "2") {
            CloseHandle(DiskHandle1);
            if (DiskHandle1 = CreateFile(L"\\\\.\\PHYSICALDRIVE1", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\PHYSICALDRIVE1 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\PHYSICALDRIVE1 Fail\n", 4);
            }
            if (DiskHandle2 = CreateFile(L"\\\\.\\PHYSICALDRIVE2", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\PHYSICALDRIVE2 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\PHYSICALDRIVE2 Fail\n", 4);
            }
            if (DiskHandle3 = CreateFile(L"\\\\.\\C:", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\C: success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\C: Fail\n", 4);
            }
            if (DiskHandle4 = CreateFile(L"\\\\.\\Harddisk0Partition1", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk0Partition1 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk0Partition1 Fail\n", 4);
            }
            if (DiskHandle5 = CreateFile(L"\\\\.\\Harddisk0Partition2", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk0Partition2 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk0Partition2 Fail\n", 4);
            }
            if (DiskHandle6 = CreateFile(L"\\\\.\\Harddisk0Partition3", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk0Partition3 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk0Partition3 Fail\n", 4);
            }
            if (DiskHandle7 = CreateFile(L"\\\\.\\Harddisk1Partition1", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk1Partition1 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk1Partition1 Fail\n", 4);
            }
            if (DiskHandle8 = CreateFile(L"\\\\.\\Harddisk1Partition2", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk1Partition2 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk1Partition2 Fail\n", 4);
            }
            if (DiskHandle9 = CreateFile(L"\\\\.\\Harddisk1Partition3", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk1Partition3 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk1Partition3 Fail\n", 4);
            }
            if (DiskHandle10 = CreateFile(L"\\\\.\\Harddisk2Partition1", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk2Partition1 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk2Partition1 Fail\n", 4);
            }
            if (DiskHandle11 = CreateFile(L"\\\\.\\Harddisk2Partition2", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\Harddisk2Partition2 success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\Harddisk2Partition2 Fail\n", 4);
            }
            COLOR_PRINT("[+]Try HANDLE \\\\.\\D: ...\n", 5);
            if (DiskHandle12 = CreateFile(L"\\\\.\\D:", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0)) {
                COLOR_PRINT("[+]HANDLE \\\\.\\D: success\n", 5);
            }
            else {
                COLOR_PRINT("[-]HANDLE \\\\.\\D: Fail\n", 4);
            }
        }
        if (MainChoice == "3") {
            CloseHandle(DiskHandle1);
            CloseHandle(DiskHandle2);
            CloseHandle(DiskHandle3);
            CloseHandle(DiskHandle4);
            CloseHandle(DiskHandle5);
            CloseHandle(DiskHandle6);
            CloseHandle(DiskHandle7);
            CloseHandle(DiskHandle8);
            CloseHandle(DiskHandle9);
            CloseHandle(DiskHandle10);
            CloseHandle(DiskHandle11);
            CloseHandle(DiskHandle12);
            COLOR_PRINT("[+]Close HANDLE success\n", 5);
        }
        if (MainChoice == "4") {
            CloseHandle(DiskHandle1);
            CloseHandle(DiskHandle2);
            CloseHandle(DiskHandle3);
            CloseHandle(DiskHandle4);
            CloseHandle(DiskHandle5);
            CloseHandle(DiskHandle6);
            CloseHandle(DiskHandle7);
            CloseHandle(DiskHandle8);
            CloseHandle(DiskHandle9);
            CloseHandle(DiskHandle10);
            CloseHandle(DiskHandle11);
            CloseHandle(DiskHandle12);
            COLOR_PRINT("[+]Close HANDLE success\n", 5);
            return 0;
        }
    }
}