// SmartScanerDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CSmartScanerDlg �Ի���
class CSmartScanerDlg : public CDialog
{
// ����
public:
	CSmartScanerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SMARTSCANER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
