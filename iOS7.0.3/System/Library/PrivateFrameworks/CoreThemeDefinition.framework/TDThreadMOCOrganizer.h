/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {

	NSThread* mainThread;
	CoreThemeDocument* document;

}
-(id)mainThread;
-(id)init;
-(id)document;
-(id)initWithDocument:(id)arg1 mainThread:(id)arg2 ;
-(id)threadMOC;
-(id)mainMOC;
-(void)setThreadMOC:(id)arg1 ;
@end
