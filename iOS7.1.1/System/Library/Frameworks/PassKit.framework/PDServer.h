/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/WDCardFileManagerDelegate.h>
#import <passd/PDPassLibraryDelegate.h>
#import <passd/PDDatabaseManagerDelegate.h>
#import <passd/WDWebServicesCoordinatorDelegate.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class NSMutableSet, WDCardFileManager, PDDatabaseManager, PDBulletinManager, WDRelevantCardProvider, WDWebServicesCoordinator, PKCatalog;

@interface PDServer : NSObject <WDCardFileManagerDelegate, PDPassLibraryDelegate, PDDatabaseManagerDelegate, WDWebServicesCoordinatorDelegate, NSXPCListenerDelegate> {

	NSMutableSet* _passLibraries;
	WDCardFileManager* _cardFileManager;
	PDDatabaseManager* _databaseManager;
	PDBulletinManager* _bulletinManager;
	WDRelevantCardProvider* _relevantCardProvider;
	WDWebServicesCoordinator* _webServicesCoordinator;
	NSMutableSet* _installedPassUniqueIDs;
	PKCatalog* _catalogOfRecord;

}
-(void)_deleteHomeDirectoryIfFileProtected;
-(void)_addBundledPassesIfNecessaryAndNotifyClients:(BOOL)arg1 ;
-(void)_logStatsIfNecessary;
-(void)_arrangeNextPassRevocationCheck;
-(void)_registerClientForPassRevocationCheck;
-(void)_schedulePassRevocationBackgroundTaskImmediately;
-(void)_removePassLibrary:(id)arg1 connection:(id)arg2 ;
-(void)_addPassLibrary:(id)arg1 connection:(id)arg2 ;
-(id)catalogOfRecord;
-(id)_installedUniqueIDs;
-(void)_sendPassUpdated:(id)arg1 ;
-(void)_sendPassAdded:(id)arg1 ;
-(void)_sendPassRemoved:(id)arg1 ;
-(id)_catalogOfRecord;
-(void)_sendCatalogChanged:(id)arg1 ;
-(void)_insertOrUpdatePass:(id)arg1 source:(int)arg2 withDiff:(id)arg3 ;
-(void)_removePassWithUniqueID:(id)arg1 ;
-(void)_applyNewCatalogOfRecord:(id)arg1 ;
-(void)_restoreDatabaseIntegrity;
-(void)_setStatus:(int)arg1 forBundledPassStyle:(unsigned)arg2 ;
-(void)_addBundledPass:(id)arg1 ;
-(void)_schedulePassRevocationBackgroundTaskIfNecessary;
-(double)_timeSinceDateStoredInUserDefault:(id)arg1 ;
-(void)_logStats;
-(void)_wakePassbook;
-(void)passWritten:(id)arg1 source:(int)arg2 withDiff:(id)arg3 ;
-(void)passWithUniqueIDDidDisappear:(id)arg1 ;
-(void)catalogOfRecordWritten:(id)arg1 ;
-(void)notePassWithUniqueID:(id)arg1 isRevoked:(BOOL)arg2 ;
-(void)passLibrary:(id)arg1 requestedPassUpdate:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)passLibrary:(id)arg1 removedBundledPass:(id)arg2 ;
-(void)passLibrarySuspended:(id)arg1 ;
-(void)nukeStuff;
-(id)trueUniqueIDs;
-(id)trueLocalPasses;
-(void)hookUpLocalPass:(id)arg1 ;
-(void)noteLockScreenSettingsChanged;
-(void)handleDatabaseIntegrityProblem;
-(void)handleEmptyWebServicesUpdateForSerialNumber:(id)arg1 passTypeID:(id)arg2 ;
-(int)_bundledPassStatus:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)introduceDatabaseIntegrityProblem;
-(void)migrateData;
@end
