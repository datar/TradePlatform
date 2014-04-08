#pragma once

#include <Windows.h>

///�߾��ȼ�ʱ��,��λ����
class CTimeCounter{
public:
	//���캯��
	CTimeCounter(){
        QueryPerformanceFrequency(&hz);
    }
	//��ʼ��ʱ
	inline void Start(){
        QueryPerformanceCounter(&rs);
    }
	//�ӿ�ʼ��ʱ��ȥ��ʱ��
	inline long double Elapse(){
		return (( now.QuadPart-rs.QuadPart)/(long double)hz.QuadPart)*1000;
	}
	inline void Stop(){QueryPerformanceCounter(&now);}
private:
	LARGE_INTEGER hz;
	LARGE_INTEGER rs;
	LARGE_INTEGER now;
};