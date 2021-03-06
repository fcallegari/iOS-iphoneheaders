/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUSearchDataSourceDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUSearchViewControllerDelegate;
@class SKUICircleProgressIndicator, RUSearchDataSource, MPImageCache, SSMetricsPageEvent, NSError, UILabel, RUMetricsController, NSMutableArray, NSArray, NSString, UITableView;

@interface RUSearchViewController : UIViewController <RUSearchDataSourceDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	unsigned _addingIndex;
	RUSearchDataSource* _dataSource;
	MPImageCache* _imageCache;
	SSMetricsPageEvent* _lastPageEvent;
	NSError* _lastSearchError;
	UILabel* _loadingLabel;
	CGRect _keyboardFrame;
	RUMetricsController* _metricsController;
	UILabel* _noResultsLabel;
	NSMutableArray* _queuedMetricsOperations;
	NSArray* _searchResultCategories;
	NSString* _searchTerm;
	BOOL _displaysCoreSeedName;
	BOOL _excludeFeaturedStations;
	<RUSearchViewControllerDelegate>* _delegate;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) <RUSearchViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displaysCoreSeedName;                                       //@synthesize displaysCoreSeedName=_displaysCoreSeedName - In the implementation block
@property (assign,nonatomic) BOOL excludeFeaturedStations;                                    //@synthesize excludeFeaturedStations=_excludeFeaturedStations - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)tableView;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)_updateVisibleHeadersState;
-(void)removeAddingIndicator;
-(BOOL)excludeFeaturedStations;
-(void)setExcludeFeaturedStations:(BOOL)arg1 ;
-(void)searchDataSource:(id)arg1 willStartSearchRequestForSearchTerm:(id)arg2 ;
-(void)searchDataSource:(id)arg1 didFinishUpdatingResults:(id)arg2 forSearchTerm:(id)arg3 withError:(id)arg4 metricsConfiguration:(id)arg5 metricsPageEvent:(id)arg6 ;
-(void)updateResultsForSearchTerm:(id)arg1 ;
-(void)setDisplaysCoreSeedName:(BOOL)arg1 ;
-(void)_addMetricsControllerOperationBlock:(/*^block*/ id)arg1 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(id)_createPageEventForCurrentState;
-(void)_layoutSearchSubviews;
-(void)_setShowingLoading:(BOOL)arg1 ;
-(id)_currentVisibleStationDictionaries;
-(id)_impressionsWithStationDictionaries:(id)arg1 fieldsMap:(id)arg2 ;
-(void)_reloadForSearchTerm:(id)arg1 canUpdateDataSourceResults:(BOOL)arg2 ;
-(void)_clearButtonAction:(id)arg1 ;
-(id)_parentPageDescription;
-(id)_parentPageType;
-(int)_countOfStationsForSection:(unsigned)arg1 ;
-(id)_stationDictionaryForIndexPath:(id)arg1 usingResultsDictionary:(BOOL*)arg2 ;
-(id)_highlightRangesDictionaryForIndexPath:(id)arg1 ;
-(void)_applyHighlightRanges:(id)arg1 toAttributedString:(id)arg2 withEmphasizedTextAttributes:(id)arg3 ;
-(id)_newSectionHeaderWithAttributedText:(id)arg1 ;
-(id)_firstValueForKeyInImpressionsMap:(id)arg1 withStationDictionary:(id)arg2 ;
-(BOOL)displaysCoreSeedName;
-(void).cxx_destruct;
@end

