/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapServiceCompletionTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOMapServiceTraits, NSString;

@interface _GEOPlaceSearchAutocompleteTicket : NSObject <GEOMapServiceCompletionTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	GEOMapServiceTraits* _traits;
	char _canceled;
	NSString* _searchQuery;

}

@property (getter=isCanceled,nonatomic,readonly) char canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(char)matchesFragment:(id)arg1 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 ;
-(char)isCanceled;
@end
