/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIWebRotatingNodePopoverDelegate;
@class DOMNode, UIPopoverController;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {

	BOOL _isRotating;
	DOMNode* _node;
	CGPoint _presentationPoint;
	UIPopoverController* _popoverController;
	<UIWebRotatingNodePopoverDelegate>* _dismissDelegate;

}

@property (nonatomic,retain) DOMNode * node;                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint presentationPoint;                                         //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                           //@synthesize popoverController=_popoverController - In the implementation block
@property (assign,nonatomic) <UIWebRotatingNodePopoverDelegate> * dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)node;
-(id)initWithDOMNode:(id)arg1 ;
-(void)setPopoverController:(id)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(id)popoverController;
-(void)setNode:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(unsigned)popoverArrowDirections;
-(CGPoint)presentationPoint;
-(id)dismissDelegate;
-(void)setDismissDelegate:(id)arg1 ;
@end

