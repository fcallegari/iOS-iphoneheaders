/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCServerUser : NSObject {

	NSObject<OS_dispatch_queue>* queue;
	/*^block*/ id block;

}

@property (assign) NSObject<OS_dispatch_queue> * queue; 
@property (nonatomic,copy) id block; 
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(/*^block*/ id)block;
-(void)setBlock:(/*^block*/ id)arg1 ;
@end

