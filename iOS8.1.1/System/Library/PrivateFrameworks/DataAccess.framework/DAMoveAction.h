/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction {

	NSString* _sourceContainerId;
	NSString* _sourceServerId;
	NSString* _destinationContainerId;

}

@property (nonatomic,retain) NSString * sourceContainerId;                   //@synthesize sourceContainerId=_sourceContainerId - In the implementation block
@property (nonatomic,retain) NSString * sourceServerId;                      //@synthesize sourceServerId=_sourceServerId - In the implementation block
@property (nonatomic,retain) NSString * destinationContainerId;              //@synthesize destinationContainerId=_destinationContainerId - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceContainerId:(NSString *)arg1 ;
-(void)setSourceServerId:(NSString *)arg1 ;
-(void)setDestinationContainerId:(NSString *)arg1 ;
-(NSString *)sourceContainerId;
-(NSString *)sourceServerId;
-(NSString *)destinationContainerId;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5 ;
@end
