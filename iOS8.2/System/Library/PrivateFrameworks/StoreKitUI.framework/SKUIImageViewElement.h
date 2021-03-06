/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElementCacheKey, NSURL;

@interface SKUIImageViewElement : SKUIViewElement {

	NSString* _alt;
	char _enabled;
	SKUIImageViewElementCacheKey* _resourceCacheKey;
	NSString* _resourceName;
	CGSize _size;
	SKUIImageViewElementCacheKey* _transientResourceCacheKey;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * resourceName;                   //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) id resourceCacheKey; 
@property (nonatomic,readonly) id transientResourceCacheKey;              //@synthesize transientResourceCacheKey=_transientResourceCacheKey - In the implementation block
-(CGSize)size;
-(char)isEnabled;
-(NSURL *)URL;
-(NSString *)resourceName;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(id)accessibilityText;
-(id)resourceCacheKey;
-(char)rendersWithPerspective;
-(id)transientResourceCacheKey;
@end

