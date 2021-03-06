/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarDirectorySearchResponseConsumer.h>

@class NSSet, NSString;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer> {

	NSSet* _terms;
	NSSet* _recordTypes;
	unsigned _resultLimit;
	id _searchID;
	char _exceededResultLimit;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)performRequest;
-(void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(char)arg2 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned)arg5 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg1 ;
@end

