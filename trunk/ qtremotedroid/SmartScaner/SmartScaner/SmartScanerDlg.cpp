// SmartScanerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SmartScaner.h"
#include "SmartScanerDlg.h"
#include "devguid.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

	// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//dispString = new String;
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CSmartScanerDlg �Ի���




CSmartScanerDlg::CSmartScanerDlg(CWnd* pParent /*=NULL*/)
: CDialog(CSmartScanerDlg::IDD, pParent)
, strEdit(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSmartScanerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_SCAN, conEdit);
	DDX_Text(pDX, IDC_EDIT_SCAN, strEdit);
	DDX_Control(pDX, IDC_EDIT_RTS, conRTS);
}

BEGIN_MESSAGE_MAP(CSmartScanerDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON_SCAN, &CSmartScanerDlg::OnBnClickedButtonScan)
END_MESSAGE_MAP()


// CSmartScanerDlg ��Ϣ�������

BOOL CSmartScanerDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CSmartScanerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CSmartScanerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ��������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù����ʾ��
//
HCURSOR CSmartScanerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// Scan and display the COM port information
HRESULT CSmartScanerDlg::Scan(void)
{

	HDEVINFO   hDevInfo; 
	SP_DEVINFO_DATA   DeviceInfoData; 
	DWORD   i; 

	hDevInfo   =   SetupDiGetClassDevs((LPGUID)   &GUID_DEVCLASS_PORTS,   0,   0,DIGCF_PRESENT); 
	/* 
	GUID_DEVCLASS_FDC	 ���̿����� 
	GUID_DEVCLASS_DISPLAY	 ��ʾ�� 
	GUID_DEVCLASS_CDROM	 ���� 
	GUID_DEVCLASS_KEYBOARD	 ���� 
	GUID_DEVCLASS_COMPUTER	 ����� 
	GUID_DEVCLASS_SYSTEM	 ϵͳ 
	GUID_DEVCLASS_DISKDRIVE	 ���������� 
	GUID_DEVCLASS_MEDIA	 ��������Ƶ����Ϸ������ 
	GUID_DEVCLASS_MODEM	 MODEM 
	GUID_DEVCLASS_MOUSE	 ��������ָ���豸 
	GUID_DEVCLASS_NET	 �����豸�� 
	GUID_DEVCLASS_USB	 ͨ�ô������߿����� 
	GUID_DEVCLASS_FLOPPYDISK	���������� 
	GUID_DEVCLASS_UNKNOWN	 δ֪�豸 
	GUID_DEVCLASS_SCSIADAPTER	SCSI   ��   RAID   ������ 
	GUID_DEVCLASS_HDC	 IDE   ATA/ATAPI   ������ 
	GUID_DEVCLASS_PORTS	 �˿ڣ�COM   ��   LPT�� 
	GUID_DEVCLASS_MONITOR	 ������ 

	*/ 
	if   (hDevInfo   ==   INVALID_HANDLE_VALUE) 
	{ 
		//   Insert   error   handling   here. 
		return   -1; 
	} 

	//   Enumerate   through   all   devices   in   Set. 

	DeviceInfoData.cbSize   =   sizeof(SP_DEVINFO_DATA); 
	for   (i=0;SetupDiEnumDeviceInfo(hDevInfo,i, 
		&DeviceInfoData);i++) 
	{ 
		DWORD   DataT; 
		//LPTSTR   buffer   =   NULL; 
		char   buffer[2048]; 
		DWORD   buffersize   =sizeof(buffer); 

		while   (!SetupDiGetDeviceRegistryProperty( 
			hDevInfo, 
			&DeviceInfoData, 
			SPDRP_FRIENDLYNAME, 
			&DataT, 
			(PBYTE)buffer, 
			buffersize, 
			&buffersize)) 
		{ 
			if   (GetLastError()   == 
				ERROR_INSUFFICIENT_BUFFER) 
			{ 
				//   Change   the   buffer   size. 
				//if   (buffer)   LocalFree(buffer); 
				//buffer   =   (PSP_INF_INFORMATION)LocalAlloc(LPTR,buffersize); 

			} 
			else 
			{ 
				//   Insert   error   handling   here. 
				break; 
			} 
		}

		printf("Result:[%s]\n",buffer);
		disp.Append(CString(buffer));
		//disp.Append
		disp.Append(_T("\r\n"));
		conEdit.SetWindowTextW(disp.GetString());


	} 

	SetupDiDestroyDeviceInfoList(hDevInfo); 

	if (disp.GetString()){
		MessageBox(_T("no device find"), _T("prompt"));
	}


	return E_NOTIMPL;
}

void CSmartScanerDlg::OnBnClickedButtonScan()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Scan();
}

LRESULT CSmartScanerDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: �ڴ����ר�ô����/����û���

	if(message   ==   WM_DEVICECHANGE)   //0x8000,0x8004 
	{ 
		CString   str; 
		DEV_BROADCAST_HDR*   dhr   =   (DEV_BROADCAST_HDR   *)lParam; 
		switch(wParam) 
		{ 
		case   DBT_CONFIGCHANGECANCELED: 
			TRACE( "DBT_CONFIGCHANGECANCELED "); 
			break; 
		case   DBT_CONFIGCHANGED: 
			TRACE( "DBT_CONFIGCHANGED "); 
			break; 
		case   DBT_DEVICEQUERYREMOVE: 
			TRACE( "DBT_DEVICEQUERYREMOVE "); 
			break; 
		case   DBT_DEVICEQUERYREMOVEFAILED: 
			TRACE( "DBT_DEVICEQUERYREMOVEFAILED "); 
			break; 
		case   DBT_DEVICEREMOVEPENDING: 
			TRACE( "DBT_DEVICEREMOVEPENDING "); 
			break; 
		case   DBT_DEVICETYPESPECIFIC: 
			TRACE( "DBT_DEVICETYPESPECIFIC "); 
			break; 
		case   DBT_QUERYCHANGECONFIG: 
			TRACE( "DBT_QUERYCHANGECONFIG "); 
			break; 
		case   DBT_USERDEFINED: 
			TRACE( "DBT_USERDEFINED "); 
			break; 
		case   DBT_DEVICEARRIVAL: 
			if(dhr-> dbch_devicetype   ==   DBT_DEVTYP_PORT) 
			{ 
				PDEV_BROADCAST_VOLUME   lpdbv   =   (PDEV_BROADCAST_VOLUME)dhr; 
				if(lpdbv-> dbcv_flags   &   DBTF_MEDIA) 
				{ 
					str.Format( "Drive   %c   ���� ",   FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
					//AfxMessageBox(str); 
				} 
				else 
				{ 
					char   ch   =   FirstDriveFromMask(lpdbv   -> dbcv_unitmask); 
					str.Format( "%c:\\ ",ch); 
				} 
			} 
			break; 
		case   DBT_DEVICEREMOVECOMPLETE: 
			if(dhr-dbch_devicetype   ==   DBT_DEVTYP_VOLUME) 
			{ 
				PDEV_BROADCAST_VOLUME   lpdbv   =   (PDEV_BROADCAST_VOLUME)dhr; 
				if(lpdbv-> dbcv_flags   &   DBTF_MEDIA) 
				{ 
					str.Format( "Drive   %c   �γ� ",FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
				} 
				else 
				{ 
					str.Format( "Drive   %c   �γ� ",FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
				} 
				//AfxMessageBox(str); 
			} 
			break; 
		default: 
			break; 
		} 
	} 

	return CDialog::WindowProc(message, wParam, lParam);
}
