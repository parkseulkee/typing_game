#ifndef MY_UTIL_H
#define MY_UTIL_H

#include <time.h>
#include <Windows.h>

void GotoXY(int x, int y);		            // 커서 위치 이동
double GetDiffTime(clock_t start_time);     // 시간 간격 알아내기(초 단위)
void SetCursorVisible(BOOL tf);             // 커서 안보이게 하기

#endif