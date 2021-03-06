/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {

	double _startTime;
	double _endTime;
	NSMapTable* _tileStyleToCount;
	unsigned long long _dataLength;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSMapTable * tileStyleToCount;              //@synthesize tileStyleToCount=_tileStyleToCount - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)addTileKey:(const GEOTileKey*)arg1 dataLength:(unsigned long long)arg2 ;
-(NSMapTable *)tileStyleToCount;
-(double)endTime;
-(unsigned long long)dataLength;
@end

