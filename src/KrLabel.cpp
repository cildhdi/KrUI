/*********************************************************
Author:MilesYang
Mail:1961464399@qq.com
CurrentTime:2018-4-13
FileName:KrLabel.cpp
*********************************************************/

#include "KrLabel.h"

namespace KrUI
{

	KrLabel::KrLabel(Gdiplus::Color bgcolor)
	{
		m_MouseDownColor = bgcolor;
		m_MouseHoverColor = bgcolor;
		m_MouseLeaveColor = bgcolor;
		m_FontColor = Gdiplus::Color(0, 0, 0);
		m_StringFormat.SetAlignment(Gdiplus::StringAlignmentNear);
		m_StringFormat.SetLineAlignment(Gdiplus::StringAlignmentCenter);
		m_hCursor = LoadCursor(nullptr, IDC_ARROW);//��������������ʽ
	}


}// !namespace KrUI