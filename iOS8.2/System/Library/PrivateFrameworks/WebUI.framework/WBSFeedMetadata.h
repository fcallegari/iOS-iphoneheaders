/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSFeedMetadata : NSObject <NSSecureCoding> {

	NSString* _title;
	NSURL* _imageURL;
	NSURL* _homepageURL;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSURL * homepageURL;              //@synthesize homepageURL=_homepageURL - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(NSURL *)imageURL;
-(NSURL *)homepageURL;
-(id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3 ;
@end
