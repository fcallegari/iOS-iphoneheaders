/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMessageIterationFilter.h>

@class NSIndexSet, NSString;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {

	NSIndexSet* _mailboxes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)filterMessageWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)initWithMailboxes:(id)arg1 ;
@end

