#include <windows.h>
#include <stdio.h>
#include <unistd.h>
//c version
void click(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

void locker(int x, int y){
	for(int i = 0; i<500; i ++){
		SetCursorPos(x, y);
		click();
		SetCursorPos(950, 790);
		click();
	}
}

void lock_it(char* data) {
    char* topList[11] = {"astra", "breach", "brim", "chamber", "cypher", "fade", "gekko", "harbor", "jett", "kayo", "killjoy"};
    char* bottomList[10] = {"neon", "omen", "pho", "raze", "reyna", "sage", "skye", "sova", "viper", "yoru"};
    int referance[2] = {560, 935};
    int counter = 0;
    int i;
    for (i = 0; i < 11; i++) {
        if (strcmp(data, topList[i]) == 0) {
            printf("locker coords: %d, %d\n", referance[0] + counter * 80, referance[1]);
            locker(referance[0] + counter * 80, referance[1]);
        }
        counter++;
    }
    counter = 0;
    for (i = 0; i < 10; i++) {
        if (strcmp(data, bottomList[i]) == 0) {
            printf("locker coords: %d, %d\n", referance[0] + counter * 80, referance[1] + 80);
            locker(referance[0] + counter * 80, referance[1] + 80);
        }
        counter++;
    }
}
int main()
{	
	sleep(3);
	lock_it("jett");
    return 0;
}

