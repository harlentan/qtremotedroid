// SmartScanerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SmartScaner.h"
#include "SmartScanerDlg.h"
#include "devguid.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	// 实现
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


// CSmartScanerDlg 对话框




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


// CSmartScanerDlg 消息处理程序

BOOL CSmartScanerDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CSmartScanerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标显示。
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
	GUID_DEVCLASS_FDC	 软盘控制器 
	GUID_DEVCLASS_DISPLAY	 显示卡 
	GUID_DEVCLASS_CDROM	 光驱 
	GUID_DEVCLASS_KEYBOARD	 键盘 
	GUID_DEVCLASS_COMPUTER	 计算机 
	GUID_DEVCLASS_SYSTEM	 系统 
	GUID_DEVCLASS_DISKDRIVE	 磁盘驱动器 
	GUID_DEVCLASS_MEDIA	 声音、视频和游戏控制器 
	GUID_DEVCLASS_MODEM	 MODEM 
	GUID_DEVCLASS_MOUSE	 鼠标和其他指针设备 
	GUID_DEVCLASS_NET	 网络设备器 
	GUID_DEVCLASS_USB	 通用串行总线控制器 
	GUID_DEVCLASS_FLOPPYDISK	软盘驱动器 
	GUID_DEVCLASS_UNKNOWN	 未知设备 
	GUID_DEVCLASS_SCSIADAPTER	SCSI   和   RAID   控制器 
	GUID_DEVCLASS_HDC	 IDE   ATA/ATAPI   控制器 
	GUID_DEVCLASS_PORTS	 端口（COM   和   LPT） 
	GUID_DEVCLASS_MONITOR	 监视器 

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
	// TODO: 在此添加控件通知处理程序代码
	Scan();
}

LRESULT CSmartScanerDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: 在此添加专用代码和/或调用基类

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
					str.Format( "Drive   %c   插入 ",   FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
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
					str.Format( "Drive   %c   拔除 ",FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
				} 
				else 
				{ 
					str.Format( "Drive   %c   拔除 ",FirstDriveFromMask(lpdbv   -> dbcv_unitmask)); 
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
