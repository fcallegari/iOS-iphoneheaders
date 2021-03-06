/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBHomeButtonTimingSettings : _UISettings {

	double _tapDuration;
	double _delay;

}

@property (assign,nonatomic) double tapDuration;              //@synthesize tapDuration=_tapDuration - In the implementation block
@property (assign,nonatomic) double delay;                    //@synthesize delay=_delay - In the implementation block
+(id)createWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsControllerModule;
-(double)tapDuration;
-(void)setTapDuration:(double)arg1 ;
-(id)description;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(void)setDefaultValues;
-(id)displayName;
@end

