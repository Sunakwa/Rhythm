#include "DxLib.h"
#include "TimeSync.h"

void TimeSync::SetBaseTime() {
	baseTime = GetNowHiPerformanceCount();
}

//1us�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime1USSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_1US;
}

//10us�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime10USSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_10US;
}

//100us�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime100USSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_100US;
}

//1ms�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime1MSSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_1MS;
}

//10ms�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime10MSSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_10MS;
}

//100ms�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime100MSSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_100MS;
}

//1000ms�P�ʂ̌o�ߎ��Ԃ�Ԃ�
long long TimeSync::GetTime1SSync() {
	return (GetNowHiPerformanceCount() - baseTime) / SET_1S;
}
