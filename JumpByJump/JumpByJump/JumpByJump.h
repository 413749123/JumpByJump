#pragma once
#include "include/opencv/cv.h"
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
private:
	IplImage*	m_image;
	IplImage*	m_imgChessModel;
	IplImage*	m_matchResult;
};

