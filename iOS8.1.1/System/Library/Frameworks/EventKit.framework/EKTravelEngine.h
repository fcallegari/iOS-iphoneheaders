/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, PCPersistentTimer, NSMutableDictionary, EKTravelEngineThrottle, EKTravelAdvisor;

@interface EKTravelEngine : NSObject {

	NSObject*<OS_dispatch_queue> _travelEngineQueue;
	NSObject*<OS_dispatch_source> _syncYieldTimer;
	PCPersistentTimer* _periodicRefreshTimer;
	BOOL _running;
	BOOL _needsRefresh;
	BOOL _databaseIsEncryptedAndUnreadable;
	BOOL _yieldingToSync;
	NSMutableDictionary* _eventExternalURLsToAgendaEntries;
	EKTravelEngineThrottle* _throttle;
	EKTravelAdvisor* _travelAdvisor;
	/*^block*/id _adviceBlock;

}

@property (nonatomic,copy) id adviceBlock;              //@synthesize adviceBlock=_adviceBlock - In the implementation block
+(id)_engineIdentifier;
+(int)_geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)hasTravelEligibleEvents:(id)arg1 ;
-(void)_receivedTravelAdvice:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)setAdviceBlock:(id)arg1 ;
-(BOOL)_isProtectedDataAvailable;
-(void)_unregisterAllAgendaItems;
-(void)_unregisterForNotificationObservation;
-(void)_uninstallSyncYieldTimer;
-(void)_registerForNotificationObservation;
-(void)_installPeriodicRefreshTimer;
-(void)_refreshIfNeeded;
-(void)_uninstallPeriodicRefreshTimer;
-(void)_installSyncYieldTimer;
-(id)adviceBlock;
-(void)_periodicRefreshTimerFired:(id)arg1 ;
-(void)_locationAuthorizationChanged:(int)arg1 ;
-(void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2 ;
-(void)ceaseMonitoringAgendaItemForEventWithExternalURL:(id)arg1 ;
-(void)_calDatabaseChangedNotificationReceived;
-(void)_calSyncClientBeginningMultiSaveNotificationReceived;
-(void)_calSyncClientFinishedMultiSaveNotificationReceived;
-(void)_significantTimeChangeNotificationReceived;
-(void)_mobileKeyBagLockStatusNotificationReceived;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

