#pragma once
#include "include/opencv/cv.h"

int m_iCount=0;
class JumpByJump
{
public:
	JumpByJump();
	~JumpByJump();

	double m_parameter;
	void CarryOut();//ִ�в���
	void ReadImage();//��ȡ��ͼ
	CvPoint	LocateChess();//���Ӷ�λ
	void ShowScreen();//ˢ����Ļ
	double m_targetPosX;
	double m_targetPosY;
	double m_sourcePosX;
	double m_sourcePosY;
private:
	IplImage*	m_image;
	IplImage*	m_imgChessModel;
	IplImage*	m_matchResult;
};

