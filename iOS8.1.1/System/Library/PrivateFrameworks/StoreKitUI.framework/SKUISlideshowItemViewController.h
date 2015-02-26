/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol SKUISlideshowItemViewControllerDelegate;
@class SKUIClientContext, UIView, SKUISlideshowImageScrollView, UIImage, NSString;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {

	SKUIClientContext* _clientContext;
	UIView* _loadingView;
	BOOL _zoomingGestureThresholdBroken;
	CGPoint _lastContentOffset;
	double _lastZoomScale;
	id<SKUISlideshowItemViewControllerDelegate> _delegate;
	SKUISlideshowImageScrollView* _imageScrollView;
	long long _indexInCollection;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUISlideshowImageScrollView * imageScrollView;                         //@synthesize imageScrollView=_imageScrollView - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (assign,nonatomic) long long indexInCollection;                                              //@synthesize indexInCollection=_indexInCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUISlideshowItemViewControllerDelegate>)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id<SKUISlideshowItemViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_newLoadingView;
-(void)_pinchGestureAction:(id)arg1 ;
-(SKUISlideshowImageScrollView *)imageScrollView;
-(long long)indexInCollection;
-(void)setIndexInCollection:(long long)arg1 ;
@end
