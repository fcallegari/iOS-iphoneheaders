/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingEvent.h>

@class NSError, NSString;

@interface MPUReportingMescalSetupCompletionEvent : NSObject <MPUReportingEvent> {

	NSError* _error;
	double _setupDuration;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double setupDuration;                  //@synthesize setupDuration=_setupDuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(char)isValidReportingEvent;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned)reportingEventType;
-(double)setupDuration;
-(void)setSetupDuration:(double)arg1 ;
@end

