/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapItemPrivate;
@class PLRevGeoCompoundNameInfo, NSString;

@interface PLRevGeoLocationInfo : NSObject {

	char _isValid;
	char _isHome;
	id<GEOMapItemPrivate> _geoMapItem;
	PLRevGeoCompoundNameInfo* _compoundNameInfo;
	PLRevGeoCompoundNameInfo* _compoundSecondaryNameInfo;
	NSString* _providerId;
	unsigned _providerVersion;

}

@property (nonatomic,readonly) char isValid;                                                    //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) id<GEOMapItemPrivate> geoMapItem;                                  //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundNameInfo;                       //@synthesize compoundNameInfo=_compoundNameInfo - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;              //@synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo - In the implementation block
@property (assign,nonatomic) char isHome;                                                       //@synthesize isHome=_isHome - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,retain) NSString * providerId;                                             //@synthesize providerId=_providerId - In the implementation block
@property (assign,nonatomic) unsigned providerVersion;                                          //@synthesize providerVersion=_providerVersion - In the implementation block
+(id)_namingOrderForAssetReverseGeoDescription;
+(char)isValidFromData:(id)arg1 ;
+(/*^block*/id)sortedNameInfoComparatorWithHomeAtEnd:(char)arg1 ;
+(unsigned)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2 ;
+(unsigned)currentVersion;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isValid;
-(id)initWithData:(id)arg1 ;
-(id)localizedDescription;
-(id<GEOMapItemPrivate>)geoMapItem;
-(PLRevGeoCompoundNameInfo *)compoundNameInfo;
-(char)isHome;
-(void)setCompoundNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(void)setCompoundSecondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(void)setIsHome:(char)arg1 ;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setProviderVersion:(unsigned)arg1 ;
-(id)dataForInfo;
-(void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(int*)arg3 ;
-(void)setGeoMapItem:(id<GEOMapItemPrivate>)arg1 ;
-(PLRevGeoCompoundNameInfo *)compoundSecondaryNameInfo;
-(NSString *)providerId;
-(unsigned)providerVersion;
-(NSString *)countryCode;
@end

