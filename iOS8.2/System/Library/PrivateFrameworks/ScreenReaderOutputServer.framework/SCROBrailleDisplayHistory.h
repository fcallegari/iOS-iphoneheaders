/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long _currentIndex;
	long _unreadCount;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(char)_moveIndexBy:(long)arg1 ;
-(void)addString:(id)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(char)hasUnread;
-(id)currentString;
-(char)moveToNext;
-(char)moveToPrevious;
-(char)isOnMostRecent;
-(void)moveToMostRecent;
@end
