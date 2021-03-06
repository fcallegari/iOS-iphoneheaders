/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OccurrenceCacheDataSourceProtocol <NSObject>
@required
-(void)stopSearching;
-(void)searchWithTerm:(id)arg1;
-(char)cachedOccurrencesAreBeingGenerated;
-(char)cachedOccurrencesAreLoaded;
-(int)cachedDayCount;
-(char)supportsFakeTodaySection;
-(int)sectionForCachedOccurrencesOnDate:(id)arg1;
-(int)countOfOccurrencesAtDayIndex:(int)arg1;
-(id)dateAtDayIndex:(int)arg1;
-(id)cachedOccurrenceAtIndexPath:(id)arg1;
-(void)fetchDaysInBackgroundStartingFromSection:(int)arg1;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2;
-(void)invalidateCachedOccurrences;
-(char)supportsInvitations;
-(void)invalidate;

@end

