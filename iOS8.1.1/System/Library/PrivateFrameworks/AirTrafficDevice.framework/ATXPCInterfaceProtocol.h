/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATXPCInterfaceProtocol
@required
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)requestSyncForLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cancelSyncWithCompletion:(/*^block*/id)arg1;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)clearSyncDataWithCompletion:(/*^block*/id)arg1;
-(void)dataMigrationFinishedWithCompletion:(/*^block*/id)arg1;
-(void)lowBatteryNotificationWithCompletion:(/*^block*/id)arg1;
-(void)keepATCAlive:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getSyncStateWithCompletion:(/*^block*/id)arg1;

@end

