/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVItemWithRecurrenceChildren.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {

	CoreDAVLeafItem* _attendee;

}

@property (nonatomic,retain) CoreDAVLeafItem * attendee;              //@synthesize attendee=_attendee - In the implementation block
-(CoreDAVLeafItem *)attendee;
-(void)setAttendee:(CoreDAVLeafItem *)arg1 ;
-(void)dealloc;
-(id)copyParseRules;
@end

