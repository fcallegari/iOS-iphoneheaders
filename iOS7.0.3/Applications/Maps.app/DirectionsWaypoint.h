/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSString, SearchResult, AddressBookAddress, MKSearchCompletion;

@interface DirectionsWaypoint : NSObject {

	NSString* _requestAddressString;
	SearchResult* _requestSearch;
	AddressBookAddress* _requestAddress;
	NSString* _suggestionsPrefix;
	SearchResult* _responseSearch;
	MKSearchCompletion* _completion;

}

@property (nonatomic,retain) NSString * requestAddressString;                  //@synthesize requestAddressString=_requestAddressString - In the implementation block
@property (nonatomic,retain) SearchResult * requestSearch;                     //@synthesize requestSearch=_requestSearch - In the implementation block
@property (nonatomic,retain) AddressBookAddress * requestAddress;              //@synthesize requestAddress=_requestAddress - In the implementation block
@property (nonatomic,retain) NSString * suggestionsPrefix;                     //@synthesize suggestionsPrefix=_suggestionsPrefix - In the implementation block
@property (nonatomic,retain) SearchResult * responseSearch;                    //@synthesize responseSearch=_responseSearch - In the implementation block
@property (nonatomic,retain) MKSearchCompletion * completion;                  //@synthesize completion=_completion - In the implementation block
-(BOOL)isDynamicCurrentLocation;
-(void)setRequestAddressString:(id)arg1 ;
-(void)setRequestSearch:(id)arg1 ;
-(void)setRequestAddress:(id)arg1 ;
-(id)requestSearch;
-(void)setResponseSearch:(id)arg1 ;
-(id)responseSearch;
-(id)requestAddress;
-(id)requestAddressString;
-(BOOL)containsSearchResult:(id)arg1 ;
-(id)singleLineAddress;
-(void)dealloc;
-(SCD_Struct_Se11)bounds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isValid;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)location;
-(id)pin;
-(void)setSuggestionsPrefix:(id)arg1 ;
-(id)suggestionsPrefix;
-(void)updateCoordinate:(SCD_Struct_Si10)arg1 ;
@end
