/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateRowViewControllerDelegate, UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSArray, UIKBCandidateCollectionView, NSString;

@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource> {

	BOOL _showsHiddenCandidates;
	id<UIKeyboardCandidateRowViewControllerDelegate> _delegate;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	Class _cellClass;

}

@property (assign,nonatomic) id<UIKeyboardCandidateRowViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                            //@synthesize candidateSet=_candidateSet - In the implementation block
@property (assign,nonatomic) BOOL showsHiddenCandidates;                                             //@synthesize showsHiddenCandidates=_showsHiddenCandidates - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) UIKBCandidateCollectionView * collectionView; 
@property (nonatomic,retain) Class cellClass;                                                        //@synthesize cellClass=_cellClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)suggestedHeightForCellClass:(Class)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateRowViewControllerDelegate>)arg1 ;
-(id<UIKeyboardCandidateRowViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(Class)cellClass;
-(double)suggestedHeight;
-(void)_showCandidateAtIndex:(unsigned long long)arg1 scrollCellToVisible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(NSArray *)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 ;
-(BOOL)showsHiddenCandidates;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(UIKBCandidateCollectionView *)collectionView;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(BOOL)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)_reloadCandidates;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)initWithCellClass:(Class)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)setShowsHiddenCandidates:(BOOL)arg1 ;
-(void)setCellClass:(Class)arg1 ;
@end

