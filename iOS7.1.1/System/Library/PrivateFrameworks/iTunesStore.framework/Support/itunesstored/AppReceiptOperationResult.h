/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError, NSMutableSet, ISSoftwareApplication, NSDate, NSSet;

@interface AppReceiptOperationResult : NSObject {

	NSError* _error;
	NSMutableSet* _expiring;
	NSMutableSet* _refreshed;
	NSMutableSet* _revoked;
	ISSoftwareApplication* _soonestExpiring;
	NSDate* _soonestExpirationDate;

}

@property (nonatomic,readonly) NSSet * expiring;                                   //@synthesize expiring=_expiring - In the implementation block
@property (nonatomic,readonly) NSSet * refreshed;                                  //@synthesize refreshed=_refreshed - In the implementation block
@property (nonatomic,retain) NSError * resultingError;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,retain) ISSoftwareApplication * soonestExpiring;              //@synthesize soonestExpiring=_soonestExpiring - In the implementation block
@property (nonatomic,retain) NSDate * soonestExpirationDate;                       //@synthesize soonestExpirationDate=_soonestExpirationDate - In the implementation block
-(void)addExpiring:(id)arg1 expirationDate:(id)arg2 ;
-(void)addRefreshed:(id)arg1 ;
-(void)addRevoked:(id)arg1 ;
-(id)resultingError;
-(void)setResultingError:(id)arg1 ;
-(void)setSoonestExpirationDate:(id)arg1 ;
-(void)setSoonestExpiring:(id)arg1 ;
-(id)expiring;
-(id)refreshed;
-(id)soonestExpiring;
-(id)soonestExpirationDate;
-(id)revoked;
-(void)dealloc;
@end

