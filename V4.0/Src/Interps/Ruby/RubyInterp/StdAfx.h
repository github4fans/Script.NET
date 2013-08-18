// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__A81570F9_8FF3_11D5_9949_0050BA0C48D0__INCLUDED_)
#define AFX_STDAFX_H__A81570F9_8FF3_11D5_9949_0050BA0C48D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

// ע:rubyͷ�ļ���Ҫ����winsock2,��MFC������ʹ��winsock2.h,��˱���ʹ��afxsock.h
#include <afxsock.h>

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT

/*
#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT
*/
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxtempl.h>

HINSTANCE GetDllInstance();

// ��Դ�л�����
void get_dll_resource(void);
void reset_dll_resource(void);

#define LOADRCSTRING(str,strID) \
	get_dll_resource();\
	str.LoadString(strID);\
	reset_dll_resource();

CString GetInterpRootPath();

#include "platdef.h"		// platform common define

#include "IPlatUI.h"	// ƽ̨���ܽӿ�
#include "owm.h"

#include "ruby.h"

#define USE_RUBY_18	// ʹ��ruby1.8�汾

// ���嵱ǰʹ�õ�Ruby�汾�ĸ�Ŀ¼
#define RUBY_LIB_PATH _T("ruby-1.8.6")

// �Զ�����Ruby��
#ifdef USE_RUBY_18
#pragma comment(lib, "msvcrt-ruby18.lib")		// �Զ�����Ruby��
#pragma message("Automatically linking with msvcrt-ruby18.lib")
#endif
#ifdef USE_RUBY_20
// 1.9�汾����ʹ��MinGW����
#endif

VALUE get_CaptureOutIO();
VALUE get_CaptureErrorIO();
void RubyEmbedCaptureOutIOInit();


// ����ע�����
#define REG_INTERP_SUBKEY			_T("interp\\ruby\\")

// �ض������
#define REG_DIRECT_SUBKEY	_T("interp\\Redirect")			// �ض����Ӽ�
// ����Ϊ��׼����ض���
#define REG_DIRECT_STDOUT_OUTPUT	_T("stdout_output")		// �������
#define REG_DIRECT_STDOUT_FILE		_T("stdout_file")		// �ļ�
#define REG_DIRECT_STDOUT_RESULT	_T("stdout_result")		// �ű���׼���
#define REG_DIRECT_STDOUT_PIPE		_T("stdout_pipe")		// �ܵ�
#define REG_DIRECT_STDOUT_MEMORY	_T("stdout_memory")		// �����ڴ�
#define REG_DIRECT_STDOUT_ADMIN		_T("stdout_admin")		// ����Ա�û�
// �������
#define REG_DIRECT_STDOUT_OUTPUT_ID	_T("stdout_output_id")	// �������ID

// Ruby����ѡ��
#define REG_RUBY_BUILD_SUBKEY		_T("interp\\ruby\\Build")	// Ruby����ѡ���Ӽ�
#define REG_RUBY_BUILD_AUTO_OUTFILE	_T("AutoOutFile")	// �Զ���������ļ�
#define REG_RUBY_BUILD_ADD_RUBY_LIB	_T("AddRubyLib")	// �Ƿ�ѡ��Ruby��չ�����ӵ������ļ���
#define REG_RUBY_BUILD_ADD_SRC_PATHFILES	_T("AddSourcePathFiles")// �Ƿ�����Դ�ļ�Ŀ¼�µ������ļ�
#define REG_RUBY_BUILD_SELECT_TOOL	_T("SelectBuildTool")	// ѡ�񹹽�����
#define REG_RUBY_BUILD_SELECT_TYPE	_T("SelectType")	// ѡ���ִ���ļ�����
#define REG_RUBY_BUILD_REPLACE_ICON	_T("ReplaceIcon")	// �滻��ִ���ļ���ͼ��
#define REG_RUBY_BUILD_SELECT_ICON_TYPE	_T("SelectIconType")	// �û�ѡ��ͼ��ķ�ʽ

// ���������Ϣ
#define _WND_DEBUG	1		// ������Դ���


// Ruby������nError
//#define TAG_RETURN	0x1
//#define TAG_BREAK	0x2
//#define TAG_NEXT	0x3
//#define TAG_RETRY	0x4
//#define TAG_REDO	0x5
//#define TAG_RAISE	0x6
//#define TAG_THROW	0x7
//#define TAG_FATAL	0x8
//#define TAG_MASK	0xf

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A81570F9_8FF3_11D5_9949_0050BA0C48D0__INCLUDED_)