/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {

	EKEventDetailAttendeesListView* _attendeesListView;

}
-(void)setAttendees:(id)arg1 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 ;
-(id)_attendeesListView;
-(char)update;
@end

