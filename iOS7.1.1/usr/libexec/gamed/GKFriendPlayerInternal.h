/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(int)familiarity;
+(id)propertiesToFetch;
+(id)secureCodedPropertyKeys;
-(void)updateWithCacheObject:(id)arg1 ;
-(void)updateWithProperties:(id)arg1 ;
-(void)setLastPlayedGame:(id)arg1 ;
-(BOOL)isFriend;
-(id)lastPlayedGame;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
@end

