/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/BulletinBoardPlugins/WeatherNotifications.bundle/WeatherNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherNotifications/BBDataProvider.h>
#import <WeatherNotifications/CLLocationManagerDelegate.h>
#import <WeatherNotifications/SynchronizedDefaultsDelegate.h>

@class BBBulletinRequest, City, NSTimer, NSString;

@interface WATodayDataProvider : NSObject <BBDataProvider, CLLocationManagerDelegate, SynchronizedDefaultsDelegate> {

	BOOL _isReachable;
	BBBulletinRequest* _lastBulletin;
	unsigned long long _conditionCode;
	City* _city;
	NSTimer* _reachabilityTimer;

}

@property (retain) BBBulletinRequest * lastBulletin;                        //@synthesize lastBulletin=_lastBulletin - In the implementation block
@property (assign,nonatomic) BOOL isReachable;                              //@synthesize isReachable=_isReachable - In the implementation block
@property (assign,nonatomic) unsigned long long conditionCode;              //@synthesize conditionCode=_conditionCode - In the implementation block
@property (nonatomic,retain) City * city;                                   //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSTimer * reachabilityTimer;                   //@synthesize reachabilityTimer=_reachabilityTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateForCity:(id)arg1 ;
-(void)cleanupUpdaters;
-(void)setLastBulletin:(BBBulletinRequest *)arg1 ;
-(void)_cleanupReachabilityTimer;
-(void)cleanupSharedManagers;
-(void)setupLocationControllers;
-(void)prepareToRefreshWeather;
-(void)becameReachable;
-(void)_applyDeferredReachablityUpdate:(id)arg1 ;
-(void)applyDeferredUnreachablityUpdate;
-(id)newTodayRequest;
-(BBBulletinRequest *)lastBulletin;
-(id)iconForWeatherCondition:(long long)arg1 ;
-(void)refreshForUnitsChange;
-(void)prepareToDisplay;
-(void)setIsReachable:(BOOL)arg1 ;
-(NSTimer *)reachabilityTimer;
-(void)setReachabilityTimer:(NSTimer *)arg1 ;
-(City *)city;
-(void)setCity:(City *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(BOOL)isReachable;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(unsigned long long)conditionCode;
-(void)setConditionCode:(unsigned long long)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)ubiquitousDefaultsDidChange:(id)arg1 ;
-(void)resetLocale;
@end
