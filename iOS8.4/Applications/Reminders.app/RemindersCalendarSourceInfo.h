/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(char)arg2 ;
-(NSMutableArray *)calendarArray;
-(char)canAddList;
-(char)_isNonEmpty;
-(char)canDeleteList;
-(char)shouldShowWhenEditingLists;
-(char)shouldShowWhenViewingLists;
-(id)title;
-(int)sortOrder;
-(id)source;
-(id)initWithSource:(id)arg1 ;
@end
