/*********************************************************
Author:MilesYang
Mail:1961464399@qq.com
CurrentTime:2018-5-3
FileName:KrMessageHandler.h
*********************************************************/


#ifndef _KR_MESSAGEHANDLER_H
#define _KR_MESSAGEHANDLER_H
#pragma once

#include <map>
#include <windows.h>
#include <functional>

#define MSGFUNC_ARGS KrUI::KrMessageHandler* kmh, WPARAM wp, LPARAM lp
#define MSGFUNC_HEAD(_Func) LRESULT _Func (MSGFUNC_ARGS)
namespace KrUI
{
	class KrMessageHandler;
	using  MSGFUNC = std::function<LRESULT(KrMessageHandler*, WPARAM, LPARAM)>;
	bool operator==(MSGFUNC& lhs, MSGFUNC& rhs);


	//KrMessageHandler��Ҫ������Ϣ����������public��ʽ�̳д���
	class KrMessageHandler
	{
	protected:
		std::multimap<UINT, MSGFUNC> m_MsgProcMap;
	public:
		virtual void RegMsg(UINT msg, MSGFUNC proc);
		virtual void RemoveMsgProc(MSGFUNC proc);
		//�����ｫ��ΪNULL��procɾ��������������ʵ�ֵ�HandleMessage�Ľ���ʱ����KrMessageHandler::HandleMessage
		virtual	LRESULT HandleMessage(UINT Message, WPARAM wParam, LPARAM lParam);
		virtual void CallMsgProc(UINT Message, WPARAM wParam, LPARAM lParam);
	};


	template<typename _Ty>
	class MsgFuncAdapterClass
	{
	private:
		std::function<_Ty> m_MsgFunc;
	public:
		MsgFuncAdapterClass(std::function<_Ty> _Func)
		{
			m_MsgFunc = _Func;
		}
		LRESULT operator()(KrMessageHandler*, WPARAM, LPARAM)
		{
			m_MsgFunc();
			return 0;
		}
	};

	MSGFUNC MsgFuncAdapter(std::function<void(void)> _Func);

}//!KrUI
#endif


