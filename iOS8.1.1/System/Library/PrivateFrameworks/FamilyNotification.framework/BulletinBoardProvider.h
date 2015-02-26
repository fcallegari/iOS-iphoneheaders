/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/familynotificationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familynotificationd/NotificationProvider.h>
#import <familynotificationd/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, NotificationProviderDelegate;
@class BBDataProviderConnection, BBDataProviderProxy, NSObject, NSString;

@interface BulletinBoardProvider : NSObject <NotificationProvider, BBRemoteDataProvider> {

	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
	NSObject*<OS_dispatch_queue> _bbDeliveryQueue;
	NSObject*<OS_dispatch_queue> _bbCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _providerLoadedSemaphore;
	id<NotificationProviderDelegate> _delegate;

}

@property (__weak) id<NotificationProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bulletinRequestForNotification:(id)arg1 ;
-(void)persistNotification:(id)arg1 ;
-(void)tearDownNotification:(id)arg1 ;
-(void)setDelegate:(id<NotificationProviderDelegate>)arg1 ;
-(id)init;
-(id<NotificationProviderDelegate>)delegate;
-(void)postNotification:(id)arg1 ;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(void)dataProviderDidLoad;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
@end
