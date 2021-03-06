/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/ADBannerViewDelegate.h>

@protocol OS_dispatch_source, RUHistoryDataSourceDelegate;
@class NSMutableDictionary, NSObject, NSMutableArray, RadioGetHistoryRequest, NSArray, NSString;

@interface RUHistoryDataSource : NSObject <ADBannerViewDelegate> {

	NSMutableDictionary* _adIdentifierToAdTrack;
	NSMutableDictionary* _adIdentifierToPendingBannerView;
	NSObject*<OS_dispatch_source> _adLoadTimeoutTimerSource;
	NSMutableArray* _bannerViewsPendingRemoval;
	NSMutableArray* _bannerViewsPendingLoad;
	RadioGetHistoryRequest* _historyRequest;
	NSArray* _pendingHistoryCategories;
	id<RUHistoryDataSourceDelegate> _delegate;
	NSArray* _historyCategories;

}

@property (assign,nonatomic,__weak) id<RUHistoryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * historyCategories;                           //@synthesize historyCategories=_historyCategories - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) char refreshing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<RUHistoryDataSourceDelegate>)arg1 ;
-(id)init;
-(id<RUHistoryDataSourceDelegate>)delegate;
-(char)isRefreshing;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)_cancelAdLoadTimeout;
-(void)_finalizePendingHistoryCategoryIfPossible;
-(id)_arrayByRemovingItemsWithAdIdentifier:(id)arg1 inHistoryCategories:(id)arg2 ;
-(void)_removePendingBannerView:(id)arg1 ;
-(id)_adIdentifierForHistoryItem:(id)arg1 ;
-(void)_reloadWithHistoryCategories:(id)arg1 ;
-(void)_scheduleAdLoadTimeout;
-(void)_handleAdLoadTimeout;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(id)adTrackForHistoryItem:(id)arg1 ;
-(void)refreshHistory;
-(NSArray *)historyCategories;
@end

