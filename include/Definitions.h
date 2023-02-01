// Include Arduino Library
#ifndef __Arduino__
	#include <Arduino.h>
#endif

#define CONSOLE_TEMPLATE_GE910

// Version Parameters
#define	__Hardware__			"00.00.01"
#define	__Firmware__			"00.00.15"

// Device Parameters
#define	__Company__				"Demo"
#define	__Device__				"PostOffice"

// PostOffice Parameters
#define	PostOffice_Server		"165.227.154.147"
#define	PostOffice_EndPoint		"/"

// FireWall Parameters
#define	_AT_FRWL_1_IP_			"213.14.250.214"
#define	_AT_FRWL_2_IP_			"167.99.137.254"
#define	_AT_FRWL_3_IP_			"176.240.98.205"

// FOTA Parameters
#define	FOTA_Server			   	"165.227.154.147"
#define	FOTA_Folder			   	"firmware"
#define	FOTA_UserName			"fota"
#define	FOTA_PassWord			"123456"
#define	FOTA_SD_FileName		"STF.hex"

// LOG File Parameters
#define	LOG_SD_File_Name		"LOG.txt"
