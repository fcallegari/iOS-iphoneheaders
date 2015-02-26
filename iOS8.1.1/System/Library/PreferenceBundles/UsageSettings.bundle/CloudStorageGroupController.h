/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/PSCloudStorageOffersManagerDelegate.h>
#import <UsageSettings/DelayedPushDelegate.h>

@class PSListController, NSMutableArray, PSSpecifier, QuotaInfoResponse, PreferencesRemoteUIDelegate, PSTableCell, PSCloudStorageOffersManager, NSString;

@interface CloudStorageGroupController : NSObject <PSCloudStorageOffersManagerDelegate, DelayedPushDelegate> {

	PSListController* _listController;
	NSMutableArray* _specifiers;
	PSSpecifier* _managedStorage;
	BOOL _buyMore;
	BOOL _quotaFetchInProgress;
	BOOL _quotaCached;
	BOOL _quotaFailed;
	BOOL _loadingStorage;
	BOOL _loadingCommerce;
	BOOL _delayedEnterManageStorage;
	QuotaInfoResponse* _quotaInfo;
	PreferencesRemoteUIDelegate* _storageDelegate;
	PSTableCell* _remoteLoadingCell;
	PSCloudStorageOffersManager* _storageOffersManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backupInfoHeaders;
-(void)enterBuyStorageWhenPossible;
-(void)stopSpinner;
-(void)addGroupToListController:(id)arg1 ;
-(void)getQuotaInfo;
-(void)groupRemovedFromListController;
-(void)enterManageStorageWhenPossible;
-(void)enterBuyStorage;
-(id)specifiersWithBuyMore:(BOOL)arg1 ;
-(void)quotaInfoChanged;
-(void)updateManagedStorageState;
-(void)reachabilityChanged:(id)arg1 ;
-(void)enterManagedStorage:(id)arg1 ;
-(BOOL)hasPurchasedMoreStorage;
-(id)availableStorage:(id)arg1 ;
-(void)startSpinnerInCellForSpecifier:(id)arg1 ;
-(void)loadStarted:(id)arg1 ;
-(void)clearQuotaCache;
-(id)totalStorage:(id)arg1 ;
-(void)cancelLoaders;
-(void)loadFinished:(id)arg1 ;
-(void)loadFailed:(id)arg1 withError:(id)arg2 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
