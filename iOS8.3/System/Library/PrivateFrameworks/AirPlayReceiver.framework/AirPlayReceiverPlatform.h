/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <AirPlayReceiver/WPAirPlaySoloDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class WPAirPlaySolo, NSObject, AirPlayControllerServer, NSString;

@interface AirPlayReceiverPlatform : NSObject <WPAirPlaySoloDelegate> {

	AirPlayReceiverUIPrivateRef _ui;
	AirPlayReceiverServerPrivate* _server;
	int _cloudConnectivityNotifyToken;
	int _conferenceRoomModeNotifyToken;
	int _dacpErrorNotifyToken;
	int _dacpNotifyTokens[24];
	int _lockDownActivationStateToken;
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _managedDefaultsChangedNotificationToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceForSiri;
	unsigned char _voiceForTelephony;
	unsigned char _btleEnabled;
	unsigned char _btleStarted;
	WPAirPlaySolo* _btleServer;
	SCD_Struct_Ai3 _btleAdvertisementData;
	unsigned char _btleSeed;
	NSObject*<OS_dispatch_source> _btleTimer;
	NSObject*<OS_dispatch_queue> _btleQueue;
	SCDynamicStoreRef _btleSCStore;
	CFDictionaryRef _soloDevices;
	int _touchSetupActiveNotifyToken;
	unsigned char _p2pSolo;
	AirPlayControllerServer* _controllerServer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_btleStart;
-(void)_btleStop;
-(void)_btleUpdate;
-(long)_btleStartListeningForNetworkChanges;
-(void)_btleStopListeningForNetworkChanges;
-(void)_btleUpdateAdvertisementData;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
@end
