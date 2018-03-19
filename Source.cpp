#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
	MessageBoxW(NULL, L"Mission Failed We'll get them next time.", L"Tatical Nuke incoming!!", MB_YESNOCANCEL | MB_ICONSTOP);
	
}