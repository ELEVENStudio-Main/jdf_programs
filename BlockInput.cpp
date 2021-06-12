#include <windows.h>
#include <winable.h>
#include <unistd.h>
int main() {
	FreeConsole();
	BlockInput(true);
	sleep(20);
	BlockInput(0);
}
