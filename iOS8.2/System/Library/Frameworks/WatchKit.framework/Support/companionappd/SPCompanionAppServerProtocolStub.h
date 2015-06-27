/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionappd/SPCompanionAppServerProtocol.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendTimingData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 index:(int)arg4 ;
-(void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)remoteInterfaceDidDeactivate:(id)arg1 ;
@end
