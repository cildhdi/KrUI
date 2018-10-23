/*********************************************************
Author:MilesYang
Mail:1961464399@qq.com
CurrentTime:2018-4-13
FileName:KrButton.h
*********************************************************/

#ifndef _KR_BUTTON_H
#define  _KR_BUTTON_H
#pragma once
#include "KrUIBase.h"
#include "KrMessageHandler.h"
namespace KrUI
{
	class KrWindow;
	class KrButton :public KrUIBase
	{
	public:
		KrButton();
		~KrButton();
		void SetMouseHoverColor(Gdiplus::Color color);
		void SetMouseDownColor(Gdiplus::Color color);
		void SetMouseLeaveColor(Gdiplus::Color color);
		void SetBorderColor(Gdiplus::Color color);
		Gdiplus::Color GetMouseHoverColor()const;
		Gdiplus::Color GetMouseDownColor()const;
		Gdiplus::Color GetMouseLeaveColor()const;
		Gdiplus::Color GetBorderColor()const;
		virtual void DrawMouseDownBmp();
		virtual void DrawMouseHoverBmp();
		virtual void DrawMouseLeaveBmp();
		virtual void DrawContent();
		virtual void Update();
		virtual LRESULT HandleMessage(UINT Message, WPARAM wParam, LPARAM lParam);
		virtual void CallMsgProc(UINT Message, WPARAM wParam, LPARAM lParam);
	protected:
		Gdiplus::Color m_MouseHoverColor;
		Gdiplus::Color m_MouseDownColor;
		Gdiplus::Color m_MouseLeaveColor;
		Gdiplus::Color m_BorderColor;
		Mouse_Status m_ButtonStatus;
	};



	//���������ⰴť��
	class KrCloseButton :public KrButton
	{
	public:
		friend KrWindow;
 		virtual void DrawContent();
		UINT GetMargin();
		KrCloseButton();
		~KrCloseButton();
		static LRESULT DestroyKrWindow(KrMessageHandler* pKrMessageHandler, WPARAM wParam, LPARAM lParam);
	protected:
		UINT m_Margin;
		Gdiplus::Pen* m_pPen;
	};


}//!KrUI

#endif

