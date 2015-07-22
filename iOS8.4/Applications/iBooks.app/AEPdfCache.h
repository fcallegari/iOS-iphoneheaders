/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface AEPdfCache : NSObject {

	NSMutableDictionary* _urlToStringCache;
	NSMutableDictionary* _urlToDocumentCache;
	NSString* _protectedPath;

}
+(id)sharedInstance:(char)arg1 ;
+(id)existingSharedInstance;
+(id)sharedInstance;
-(id)copyCacheObjectForBook:(id)arg1 ;
-(void)protectCacheForBook:(id)arg1 ;
-(void)clearNativeObjectCache;
-(id)copyCacheObjectForURL:(id)arg1 ;
-(id)copyCacheObjectForPdfPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
@end
