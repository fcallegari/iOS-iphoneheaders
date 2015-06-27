/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class EKTravelAgendaItem;


@protocol EKTravelAdvisorWorld <NSObject>
@property (assign,nonatomic) EKTravelAgendaItem * agendaItem; 
@required
-(id)now;
-(EKTravelAgendaItem *)agendaItem;
-(void)setAgendaItem:(id)arg1;
-(char)authorizedToAcquireLocation;
-(void)goIntoHibernation;
-(void)disableAlarm;
-(void)disableGeofence;
-(void)setLocationAuthorizationChangeCallback:(/*^block*/id)arg1;
-(void)setAlarmIn:(double)arg1 block:(/*^block*/id)arg2;
-(void)setGeofenceWithRadius:(double)arg1 block:(/*^block*/id)arg2;
-(id)mostRecentLocationSeen;
-(void)getCurrentLocationWithAccuracy:(double)arg1 block:(/*^block*/id)arg2;
-(void)comeOutOfHibernation;

@end
