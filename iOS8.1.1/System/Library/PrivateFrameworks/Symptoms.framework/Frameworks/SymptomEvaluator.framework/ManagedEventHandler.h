/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ManagedEventHandler : NSObject {

	char* _notifyString;
	int _NotifyToken;
	char* _transportMessageString;
	NSMutableArray* _managedEvents;

}
+(void)initialize;
+(id)getHandlerByName:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(void)populateReply:(id)arg1 ForId:(unsigned long long)arg2 Count:(unsigned long long)arg3 ;
@end
