/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLCoreOperator.h>

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator {

	NSMutableDictionary* _services;

}

@property (retain) NSMutableDictionary * services;              //@synthesize services=_services - In the implementation block
-(id)init;
-(void)setServices:(NSMutableDictionary *)arg1 ;
-(void)startServices;
-(void)stopServices;
-(NSMutableDictionary *)services;
@end
