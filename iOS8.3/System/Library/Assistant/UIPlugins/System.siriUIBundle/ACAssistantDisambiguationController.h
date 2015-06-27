/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <System/SiriUIObjectPickerViewControllerDelegate.h>

@class SAUIDisambiguationList, NSMutableArray, SiriUIObjectPickerViewController, SAUIListItem, UICollectionView, NSString;

@interface ACAssistantDisambiguationController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SiriUIObjectPickerViewControllerDelegate> {

	SAUIDisambiguationList* _disambiguationList;
	NSMutableArray* _disambiguationItems;
	char _hasFavoritesStarColumn;
	SiriUIObjectPickerViewController* _pickerController;
	SAUIListItem* _preferredListItem;

}

@property (assign,nonatomic) UICollectionView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(Class)cellClass;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_showPicker:(id)arg1 ;
-(id)_pickerController;
-(id)viewControllerForPickerPresentation:(id)arg1 ;
-(void)pickerViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(float)desiredHeightForTransparentFooterView;
-(id)_picker;
-(void)setAceObject:(id)arg1 ;
-(char)removedAfterDialogProgresses;
-(char)wantsConfirmationInsets;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
@end
