/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPlayButtonControl.h>

@class NSString;

@interface SKUIPlayButton : SKUIPlayButtonControl {

	BOOL _useLargeButton;
	BOOL _showOnDemand;
	BOOL _radio;
	long long _itemIdentifier;
	NSString* _playItemIdentifier;
	NSString* _mediaURLString;

}

@property (assign,nonatomic) long long itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * playItemIdentifier;              //@synthesize playItemIdentifier=_playItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL showOnDemand;                        //@synthesize showOnDemand=_showOnDemand - In the implementation block
@property (assign,nonatomic) BOOL useLargeButton;                      //@synthesize useLargeButton=_useLargeButton - In the implementation block
@property (assign,getter=isRadio,nonatomic) BOOL radio;                //@synthesize radio=_radio - In the implementation block
@property (nonatomic,copy) NSString * mediaURLString;                  //@synthesize mediaURLString=_mediaURLString - In the implementation block
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setItemIdentifier:(long long)arg1 ;
-(CGSize)buttonSize;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(long long)itemIdentifier;
-(id)defaultBackgroundColor;
-(NSString *)mediaURLString;
-(void)setMediaURLString:(NSString *)arg1 ;
-(NSString *)playItemIdentifier;
-(void)reloadWithItemStatus:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showOnDemand;
-(float)buttonCornerRadius;
-(BOOL)showOuterBorder;
-(id)outerBorderColor;
-(id)cancelImage;
-(id)playImage;
-(void)playIndicatorDidChange:(BOOL)arg1 ;
-(void)setUseLargeButton:(BOOL)arg1 ;
-(void)setShowOnDemand:(BOOL)arg1 ;
-(void)setPlayItemIdentifier:(NSString *)arg1 ;
-(BOOL)isRadio;
-(BOOL)useLargeButton;
-(void)setRadio:(BOOL)arg1 ;
@end
