/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/EKAssistantCommand.h>

@class EKEventStore, NSString;

@interface EKAssistantEventSearch : SACalendarEventSearch <EKAssistantCommand> {

	CalDatabaseRef _database;
	EKEventStore* _eventStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (assign,nonatomic) CalDatabaseRef database; 
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_addOccurrences:(CFArrayRef)arg1 toArray:(id)arg2 timeZone:(id)arg3 ;
-(id)_gregorianDateToString:(SCD_Struct_EK2)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)dealloc;
-(id)_validate;
-(CalDatabaseRef)database;
-(void)setDatabase:(CalDatabaseRef)arg1 ;
@end
