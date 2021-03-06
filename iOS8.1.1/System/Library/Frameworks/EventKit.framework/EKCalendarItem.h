/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, EKCalendar, NSURL, NSDate, NSTimeZone, NSArray, EKStructuredLocation, EKAttendee, EKOrganizer;

@interface EKCalendarItem : EKObject {

	BOOL _haveCachedActionsState;
	int _actionsStateCachedValue;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarItemIdentifier; 
@property (nonatomic,readonly) NSString * calendarItemExternalIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL hasAlarms; 
@property (nonatomic,readonly) BOOL hasRecurrenceRules; 
@property (nonatomic,readonly) BOOL hasAttendees; 
@property (nonatomic,readonly) BOOL hasNotes; 
@property (nonatomic,readonly) NSArray * attendees; 
@property (nonatomic,copy) NSArray * alarms; 
@property (nonatomic,copy) NSArray * recurrenceRules; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,copy) EKStructuredLocation * startLocation; 
@property (nonatomic,readonly) BOOL isFloating; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSTimeZone * startTimeZone; 
@property (nonatomic,copy) NSTimeZone * endTimeZone; 
@property (assign,nonatomic) NSString * calendarScale; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL isSelfOrganized; 
@property (nonatomic,readonly) BOOL isExternallyOrganizedInvitation; 
@property (nonatomic,readonly) BOOL isSelfOrganizedInvitation; 
@property (nonatomic,readonly) BOOL isOrganizedBySharedCalendarOwner; 
@property (nonatomic,readonly) int selfParticipantStatus; 
@property (nonatomic,retain) EKAttendee * selfAttendee; 
@property (nonatomic,retain) EKOrganizer * organizer; 
@property (nonatomic,copy) NSURL * action; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,copy) NSString * sharedItemCreatedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemCreatedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemCreatedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemCreatedTimeZone; 
@property (nonatomic,copy) NSString * sharedItemModifiedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemModifiedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemModifiedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemModifiedTimeZone; 
@property (nonatomic,readonly) BOOL allowsCalendarModifications; 
@property (nonatomic,readonly) BOOL allowsRecurrenceModifications; 
@property (nonatomic,readonly) BOOL allowsAlarmModifications; 
@property (nonatomic,readonly) BOOL allowsAttendeeModifications; 
@property (nonatomic,copy) NSArray * allAlarms; 
@property (nonatomic,readonly) int actionsState; 
@property (nonatomic,retain,readonly) EKCalendarItem * originalItem; 
@property (nonatomic,readonly) BOOL requiresDetach; 
@property (assign,getter=isDefaultAlarmRemoved,nonatomic) BOOL defaultAlarmRemoved; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSURL * externalURI; 
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(BOOL)isAllDay;
-(void)updatePersistentObject;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSURL *)externalURI;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(BOOL)isFloating;
-(NSString *)calendarScale;
-(void)setAllDay:(BOOL)arg1 ;
-(EKAttendee *)selfAttendee;
-(EKCalendarItem *)originalItem;
-(BOOL)hasRecurrenceRules;
-(NSArray *)recurrenceRules;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(EKStructuredLocation *)startLocation;
-(BOOL)hasAttendees;
-(BOOL)isExternallyOrganizedInvitation;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)isSelfOrganizedInvitation;
-(BOOL)allowsCalendarModifications;
-(BOOL)requiresDetach;
-(BOOL)allowsAlarmModifications;
-(EKStructuredLocation *)structuredLocation;
-(NSArray *)attendees;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(BOOL)allowsAttendeeModifications;
-(BOOL)allowsRecurrenceModifications;
-(void)moveToCalendar:(id)arg1 ;
-(void)removeAllSnoozedAlarms;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(NSArray *)alarms;
-(NSArray *)allAlarms;
-(EKOrganizer *)organizer;
-(void)removeRecurrenceRule:(id)arg1 ;
-(BOOL)rebase;
-(void)setOrganizer:(EKOrganizer *)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(id)startDateForRecurrence;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)_locationRelation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(id)_persistentItem;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(NSString *)calendarItemIdentifier;
-(NSString *)notes;
-(BOOL)hasNotes;
-(id)_startLocationRelation;
-(void)setCalendarScale:(NSString *)arg1 ;
-(BOOL)isOrganizedBySharedCalendarOwner;
-(BOOL)isSelfOrganized;
-(id)_alarmsRelation;
-(id)_recurrencesRelation;
-(id)_attendeesRelation;
-(id)_selfAttendeeRelation;
-(int)selfParticipantStatus;
-(id)_organizerRelation;
-(NSString *)sharedItemCreatedByFirstName;
-(NSString *)sharedItemCreatedByLastName;
-(NSString *)sharedItemModifiedByFirstName;
-(NSString *)sharedItemModifiedByLastName;
-(id)_attachmentsRelation;
-(void)_moveToCalendarInternal:(id)arg1 ;
-(NSString *)calendarItemExternalIdentifier;
-(void)setNotes:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setStartTimeZone:(NSTimeZone *)arg1 ;
-(void)setEndTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(BOOL)arg1 ;
-(int)actionsState;
-(BOOL)hasAlarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setAllAlarms:(NSArray *)arg1 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)removeAttendee:(id)arg1 ;
-(NSString *)sharedItemCreatedByDisplayName;
-(void)setSharedItemCreatedByDisplayName:(NSString *)arg1 ;
-(NSString *)sharedItemCreatedByEmailAddress;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemCreatedByLastName:(NSString *)arg1 ;
-(NSDate *)sharedItemCreatedDate;
-(void)setSharedItemCreatedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)sharedItemModifiedByDisplayName;
-(void)setSharedItemModifiedByDisplayName:(NSString *)arg1 ;
-(NSString *)sharedItemModifiedByEmailAddress;
-(void)setSharedItemModifiedByEmailAddress:(NSString *)arg1 ;
-(void)setSharedItemModifiedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemModifiedByLastName:(NSString *)arg1 ;
-(NSDate *)sharedItemModifiedDate;
-(void)setSharedItemModifiedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(NSTimeZone *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSURL *)action;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isEditable;
-(NSString *)UUID;
-(void)setAction:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setStartLocation:(EKStructuredLocation *)arg1 ;
-(NSString *)location;
-(void)setPriority:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(EKCalendar *)calendar;
-(long long)priority;
-(NSArray *)attachments;
-(BOOL)validate:(id*)arg1 ;
-(NSDate *)creationDate;
-(void)setLocation:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
@end

