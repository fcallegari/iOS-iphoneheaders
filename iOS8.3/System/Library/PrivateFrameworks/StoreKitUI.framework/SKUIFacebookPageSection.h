/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIReviewsFacebookView, SKUIFacebookLikeStatus, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection {

	ACAccountStore* _accountStore;
	char _facebookAccountsExist;
	SKUIReviewsFacebookView* _facebookView;
	char _isLoadingLikeStatus;
	SKUIFacebookLikeStatus* _likeStatus;

}

@property (nonatomic,readonly) SKUIFacebookPageComponent * pageComponent; 
-(void)dealloc;
-(void)_resetState;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)_changeStatusToUserLiked:(char)arg1 ;
-(id)_facebookView;
-(int)_facebookAccountsExist;
-(void)_reloadLikeStatus;
-(void)_reloadCollectionViewSection;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)_accountStore;
-(void)_toggleLikeAction:(id)arg1 ;
-(void)_finishLookupWithStatus:(id)arg1 error:(id)arg2 ;
@end

