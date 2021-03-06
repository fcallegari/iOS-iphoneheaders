/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iap2d/iap2d-Structs.h>
@class NSObject, iAP2Connection, NSData, iAP2Logging, NSString;

@interface iAP2Port : NSObject {

	NSObject<OS_dispatch_queue>* MainQ;
	NSObject<OS_dispatch_queue>* InQ;
	NSObject<OS_dispatch_queue>* runLoopEventQ;
	unsigned long long PortID;
	int PortType;
	int PortMgr;
	int PortNumber;
	unsigned long long DeviceID;
	iAP2Connection* Connection;
	unsigned IoService;
	unsigned IoNotification;
	IONotificationPortRef IoNotificationPortRef;
	NSObject<OS_dispatch_queue>* initQ;
	iAP2LinkRunLoop_st* iAP2LinkRL;
	iAP2Packet_st* curRecvPacket;
	bool PacketReceived;
	bool ShuttingDown;
	NSData* MACAddress;
	iAP2Logging* _logger;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * MainQ; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * InQ; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * runLoopEventQ; 
@property (nonatomic,readonly) unsigned long long PortID; 
@property (nonatomic,readonly) int PortType; 
@property (nonatomic,readonly) int PortMgr; 
@property (nonatomic,readonly) int PortNumber; 
@property (nonatomic,retain) iAP2Connection * Connection; 
@property (nonatomic,readonly) iAP2LinkRunLoop_st* iAP2LinkRL; 
@property (nonatomic,readonly) iAP2Link_st* iAP2Link; 
@property (assign,nonatomic) iAP2Packet_st* curRecvPacket; 
@property (assign,nonatomic) bool PacketReceived; 
@property (assign,nonatomic) bool ShuttingDown; 
@property (nonatomic,readonly) unsigned long long DeviceID; 
@property (nonatomic,readonly) unsigned IoService; 
@property (nonatomic,readonly) bool isSuspendOnSleep; 
@property (nonatomic,readonly) NSData * MACAddress; 
@property (nonatomic,readonly) NSString * Name; 
@property (nonatomic,readonly) unsigned short MaxPacketSize; 
@property (nonatomic,readonly) unsigned short MaxSendPacketSize; 
@property (nonatomic,readonly) unsigned short MaxRecvPacketSize; 
@property (nonatomic,readonly) unsigned short MaxPayloadSize; 
@property (nonatomic,readonly) unsigned short MaxSendPayloadSize; 
@property (nonatomic,readonly) unsigned short MaxRecvPayloadSize; 
@property (nonatomic,readonly) unsigned char MaxOutstandingPackets; 
@property (nonatomic,readonly) iAP2Logging * Logger;                                     //@synthesize logger=_logger - In the implementation block
+(id)portFromLink:(iAP2Link_st*)arg1 ;
+(id)GetPorts;
+(void)AddPortToList:(id)arg1 ;
+(void)RemovePortFromList:(id)arg1 ;
+(id)FindPort:(unsigned long long)arg1 ;
+(id)allocPortWithPortNumber:(int)arg1 PortMgr:(int)arg2 PortType:(int)arg3 PortID:(unsigned long long)arg4 Service:(unsigned)arg5 DeviceID:(unsigned long long)arg6 NotificationPortRef:(IONotificationPortRef)arg7 MACAddress:(char*)arg8 ;
+(id)GetIapTransportForDockAudio;
+(id)GetIapTransportForMikeyBusDevice;
-(id)Logger;
-(id)Connection;
-(unsigned long long)PortID;
-(id)initWithPortNumber:(int)arg1 PortMgr:(int)arg2 PortType:(int)arg3 PortID:(unsigned long long)arg4 Service:(unsigned)arg5 DeviceID:(unsigned long long)arg6 NotificationPortRef:(IONotificationPortRef)arg7 MACAddress:(char*)arg8 ;
-(unsigned short)MaxSendPacketSize;
-(unsigned short)MaxSendPayloadSize;
-(iAP2LinkRunLoop_st*)iAP2LinkRL;
-(void)initIOConnectionWithService:(unsigned)arg1 andNotificationPort:(IONotificationPortRef)arg2 ;
-(int)PortMgr;
-(int)PortType;
-(bool)IsOnSameConnectorAs:(id)arg1 ;
-(iAP2Link_st*)iAP2Link;
-(unsigned short)MaxPacketSize;
-(unsigned short)MaxRecvPacketSize;
-(unsigned short)MaxPayloadSize;
-(unsigned short)MaxRecvPayloadSize;
-(unsigned char)MaxOutstandingPackets;
-(bool)isSuspendOnSleep;
-(int)_TransmitBuff:(char*)arg1 Len:(unsigned)arg2 Wait:(bool)arg3 ;
-(void)ReceiveData:(char*)arg1 Len:(unsigned short)arg2 ;
-(int)setPortLockout;
-(void)handleAuthenticationPassed;
-(void)handleAuthenticationPassedWithUSBComponents:(id)arg1 andHasNCM:(bool)arg2 withInterfaceNumber:(unsigned)arg3 ;
-(void)handleAuthenticationFailed;
-(BOOL)IsUSBDevice;
-(BOOL)IsUSBHost;
-(BOOL)IsBluetooth;
-(BOOL)IsWireless;
-(void)SendDeviceGoToSleep;
-(void)SendDeviceWakeUp;
-(void)DisableAccPowerForPort;
-(long)EventNotify:(int)arg1 param:(void*)arg2 ;
-(id)MainQ;
-(id)InQ;
-(id)runLoopEventQ;
-(int)PortNumber;
-(iAP2Packet_st*)curRecvPacket;
-(void)setCurRecvPacket:(iAP2Packet_st*)arg1 ;
-(bool)PacketReceived;
-(void)setPacketReceived:(bool)arg1 ;
-(bool)ShuttingDown;
-(void)setShuttingDown:(bool)arg1 ;
-(unsigned long long)DeviceID;
-(unsigned)IoService;
-(id)Name;
-(void)dealloc;
-(id)description;
-(void)setConnection:(id)arg1 ;
-(void)shutDown;
-(id)MACAddress;
@end

