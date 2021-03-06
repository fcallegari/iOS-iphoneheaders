/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSURL;

@interface SBAppSwitcherPeopleContactAction : NSObject <NSCopying> {

	unsigned long long _contactType;
	int _abRecordID;
	NSString* _label;
	NSString* _destinationID;
	NSObject*<OS_dispatch_queue> _urlUpdateQueue;
	unsigned long long _actionType;

}

@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * destinationID;                   //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(id)initWithType:(unsigned long long)arg1 label:(id)arg2 destinationID:(id)arg3 addressBookRecordID:(int)arg4 ;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(unsigned long long)actionType;
-(NSString *)destinationID;
@end

