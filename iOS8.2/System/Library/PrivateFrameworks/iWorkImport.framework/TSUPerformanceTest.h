/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	char mQuiet;
	TSUOpstat_s mTiming;
	char mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) char passed; 
+(id)csvHeader;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)run;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(void)setQuiet:(char)arg1 ;
-(char)passed;
-(void)report;
-(char)quiet;
-(id)csvString;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
-(TSUOpstat_s)timing;
-(void)setTiming:(TSUOpstat_s)arg1 ;
@end
