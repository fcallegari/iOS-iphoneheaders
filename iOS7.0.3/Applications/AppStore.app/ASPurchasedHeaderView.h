/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, UISegmentedControl, UISearchBar, UIButton, UILabel, UIControl, NSString;

@interface ASPurchasedHeaderView : UIView {

	SKUIClientContext* _clientContext;
	UISegmentedControl* _filterLocalAppsControl;
	UISearchBar* _searchBar;
	BOOL _searchBarHidden;
	UIButton* _sortButton;
	UILabel* _sortByLabel;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) UIControl * filterLocalAppsControl;                       //@synthesize filterLocalAppsControl=_filterLocalAppsControl - In the implementation block
@property (assign,nonatomic) BOOL filtersLocalApps; 
@property (nonatomic,readonly) UIControl * sortTypeControl;                              //@synthesize sortButton=_sortButton - In the implementation block
@property (nonatomic,copy) NSString * sortTypeTitle; 
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (assign,getter=isSearchBarHidden,nonatomic) BOOL searchBarHidden;              //@synthesize searchBarHidden=_searchBarHidden - In the implementation block
-(id)filterLocalAppsControl;
-(id)sortTypeControl;
-(BOOL)filtersLocalApps;
-(void)setFiltersLocalApps:(BOOL)arg1 ;
-(void)setSearchBarHidden:(BOOL)arg1 ;
-(void)setSortTypeTitle:(id)arg1 ;
-(BOOL)isSearchBarHidden;
-(id)sortTypeTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)searchBar;
-(id)clientContext;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

