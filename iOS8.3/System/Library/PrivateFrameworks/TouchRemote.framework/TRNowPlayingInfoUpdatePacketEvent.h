/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:53:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSDictionary;

@interface TRNowPlayingInfoUpdatePacketEvent : TRPacketEvent {

	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
+(unsigned)_packetEventType;
-(NSDictionary *)nowPlayingInfo;
-(id)description;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithNowPlayingInfo:(id)arg1 ;
@end

