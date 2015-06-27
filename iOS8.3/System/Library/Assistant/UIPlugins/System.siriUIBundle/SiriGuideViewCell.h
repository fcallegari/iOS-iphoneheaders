/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriGuideDomainModel, SiriUIContentLabel, UIImageView, UIImage;

@interface SiriGuideViewCell : SiriUIContentCollectionViewCell {

	SiriGuideDomainModel* _domainModel;
	SiriUIContentLabel* _domainLabel;
	SiriUIContentLabel* _tagLabel;
	UIImageView* _domainImageView;
	UIImage* _iconImage;

}

@property (nonatomic,copy) UIImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
+(float)heightOfCell;
-(void)configureWithDomainModel:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIImage *)iconImage;
@end
