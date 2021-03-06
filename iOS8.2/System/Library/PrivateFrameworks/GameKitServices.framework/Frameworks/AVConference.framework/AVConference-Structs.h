/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
} opaque_pthread_cond_t;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigImageQueue* OpaqueFigImageQueueRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_AV9;

typedef struct tagIPPORT {
	int iFlags;
	char szIfName[16];
	/*function pointer*/void* IP;
	unsigned dwIPv4;
	unsigned char abIPv6[16];
	unsigned short wPort;
} tagIPPORT;

typedef struct tagCONNRESULT {
	unsigned dwCallID;
	int iResultCount;
	int iRole;
	unsigned dwRemoteCallID;
	int proto;
	int bIfRelay;
	unsigned short wRelayServType;
	unsigned short wChannelNumber;
	tagIPPORT mbLocal;
	tagIPPORT mbRemote;
	tagIPPORT mbSrc;
	tagIPPORT mbDst;
	tagIPPORT mbRemoteSrc;
	tagIPPORT mbRelayExt;
	unsigned dwRTT;
	int bIfLocalCellularQoS;
	int bIfRemoteCellularQoS;
	int iLocalCellTech;
	int iRemoteCellTech;
	unsigned dwCellularUniqueTag;
	unsigned short wCellularMTU;
	int bIfUpgrade;
	int bIfPrimary;
	int bIfReplaceOnly;
	tagCONNRESULT next;
} tagCONNRESULT;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct SKEStateOpaque* SKEStateOpaqueRef;

typedef struct __CFData* CFDataRef;

typedef struct SSLContext* SSLContextRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[124];
} opaque_pthread_rwlock_t;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct vDSP_DFT_SetupStruct* vDSP_DFT_SetupStructRef;

typedef struct DSPSplitComplex {
	float realp;
	float imagp;
} DSPSplitComplex;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _tls_record_s* tls_record_sRef;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct OpaqueFigThread* OpaqueFigThreadRef;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct AudioEventQueue_t* AudioEventQueue_tRef;

typedef struct __CFString* CFStringRef;

