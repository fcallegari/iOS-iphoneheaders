/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray, NSData;

@interface RadioFetchMetadataRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _itemIDs;
	NSData* _timedMetadata;
	NSArray* _tracks;

}

@property (nonatomic,copy) NSArray * itemIDs;                   //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,copy) NSData * timedMetadata;              //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,retain) NSArray * tracks;                  //@synthesize tracks=_tracks - In the implementation block
-(id)timedMetadata;
-(void)setTimedMetadata:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setTracks:(id)arg1 ;
-(void)cancel;
-(void).cxx_destruct;
-(id)itemIDs;
-(void)setItemIDs:(id)arg1 ;
-(id)tracks;
-(id)_itemIDsToRadioTracks;
@end
