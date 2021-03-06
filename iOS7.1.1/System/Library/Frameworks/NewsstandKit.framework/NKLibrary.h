/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NewsstandKit/NewsstandKit-Structs.h>
@class NSArray, NKIssue, NSMapTable, NSURL, NSFileManager;

@interface NKLibrary : NSObject {

	NSArray* _issues;
	NKIssue* _currentlyReadingIssue;
	NSMapTable* _issuesByName;
	NSMapTable* _issuesByDirectory;
	NSURL* _contentURL;
	NSFileManager* _fileManager;
	NSURL* _appSupportURL;
	NSURL* _libraryURL;
	bool _inited;
	int _needsSaving;
	int _savePending;
	NSArray* _assetsFromLaunch;

}

@property (readonly) NSArray * issues; 
@property (readonly) NSArray * downloadingAssets; 
@property (retain) NKIssue * currentlyReadingIssue; 
+(bool)_isNewsstandApp;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)sharedLibrary;
-(id)downloadingAssets;
-(void)_didFinishLaunchingWasCalled;
-(id)issues;
-(void)_markIssuesAndSave;
-(id)issueWithName:(id)arg1 ;
-(id)_contentURL;
-(void)_setIssues:(id)arg1 ;
-(id)currentlyReadingIssue;
-(void)setCurrentlyReadingIssue:(id)arg1 ;
-(void)_performBackgroundTask:(/*^block*/ id)arg1 withDescription:(id)arg2 ;
-(void)_markAsDirtyAndSave;
-(void)_saveIfNeeded;
-(id)_appSupportURL;
-(id)_libraryURL;
-(void)__actuallySave;
-(void)_saveIfNeededAfterDelay:(double)arg1 ;
-(void)_saveNowIfNeeded;
-(id)addIssueWithName:(id)arg1 date:(id)arg2 ;
-(void)removeIssue:(id)arg1 ;
-(id)_issueForDirectory:(id)arg1 ;
-(bool)_canPerformBackgroundDownloads;
-(void)_issueChanged:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)_fileManager;
-(void)_load;
@end

