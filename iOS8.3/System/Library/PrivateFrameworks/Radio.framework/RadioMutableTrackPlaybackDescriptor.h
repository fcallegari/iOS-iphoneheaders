/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioTrackPlaybackDescriptor.h>

@class NSDate, NSDictionary;

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor

@property (assign,getter=isCurrent,nonatomic) char current; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (assign,nonatomic) double pauseTime; 
@property (nonatomic,retain) NSDate * skipDate; 
@property (assign,nonatomic) long long storeID; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setPauseTime:(double)arg1 ;
-(void)setSkipDate:(NSDate *)arg1 ;
-(void)setCurrent:(char)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setTrackInfo:(NSDictionary *)arg1 ;
@end

