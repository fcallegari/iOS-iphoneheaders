/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>

@protocol BasicKeypadDelegate;
@interface BasicKeypadView : UIView {

	<BasicKeypadDelegate>* _delegate;

}

@property (assign,nonatomic) <BasicKeypadDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

