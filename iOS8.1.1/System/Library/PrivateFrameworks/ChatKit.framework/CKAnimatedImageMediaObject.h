/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
+(id)UTITypes;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailsForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)generateAnimatedPreviewFromThumbnails:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(id)notificationCenter;
@end
