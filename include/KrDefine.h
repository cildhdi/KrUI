/*********************************************************
Author:MilesYang
Mail:1961464399@qq.com
CurrentTime:2018-4-13
FileName:KrDefine.h
*********************************************************/

#define OUTPUTLASTERROR(x) cout<<#x<<": "<<GetLastError()<<endl

#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))

#define KM_MOUSEENTER (WM_USER+1)
#define KM_MOUSELEAVE (WM_USER+2)
#define KM_LBTNUP (WM_USER+3)
#define KM_LBTNDOWN (WM_USER+4)
#define KM_CLICK KM_LBTNUP
#define KM_MOUSEMOVE (WM_USER+5)
#define KM_TEXTCHANGE (WM_USER+6)
#define KM_CREATE (WM_USER+7)
#define KM_LISTITEMCLICK (WM_USER+8)
#define KM_WNDDELETE (WM_USER+9)
