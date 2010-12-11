// SmartScanerDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CSmartScanerDlg 对话框
class CSmartScanerDlg : public CDialog
{
// 构造
public:
	CSmartScanerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SMARTSCANER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit conEdit;
public:
	// Scan and display the COM port information
	HRESULT Scan(void);
public:
	CString strEdit;
public:
	afx_msg void OnBnClickedButtonScan();
public:
	//string *dispString;
	CString disp;
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
	CEdit conRTS;
};
