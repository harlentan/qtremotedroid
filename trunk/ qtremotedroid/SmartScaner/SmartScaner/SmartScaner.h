// SmartScaner.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "setupapi.h"

// CSmartScanerApp:
// �йش����ʵ�֣������ SmartScaner.cpp
//

class CSmartScanerApp : public CWinApp
{
public:
	CSmartScanerApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSmartScanerApp theApp;