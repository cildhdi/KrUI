/*********************************************************
Author:MilesYang
Mail:1961464399@qq.com
CurrentTime:2018-4-13
FileName:KrProgressBar.h
*********************************************************/

#ifndef _KR_PROGRESSBAR_H
#define _KR_PROGRESSBAR_H
#pragma once
#include "KrUIBase.h"
#include <mutex>

namespace KrUI
{

	class KrProgressBar :public KrUIBase
	{
	protected:
		unsigned int m_Percentage;
		std::mutex m_PercentageMutex;
		Gdiplus::Color m_ForeColor;
	public:
		KrProgressBar();
		void SetForeColor(Gdiplus::Color c);
		Gdiplus::Color GetForeColor() const;
		void SetPercentage(unsigned int Percentage);
		unsigned int GetPercentage();
		virtual void Update();
	};


}// !namespace KrUI


#endif

