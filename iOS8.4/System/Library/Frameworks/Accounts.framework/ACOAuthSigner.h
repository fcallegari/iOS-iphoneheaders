/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol;
@class NSXPCConnection, ACAccount;

@interface ACOAuthSigner : NSObject {

	NSXPCConnection* _connection;
	ACAccount* _account;
	id<ACDOAuthSignerProtocol> _proxyShim;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (assign,nonatomic) BOOL shouldIncludeAppIdInRequest;              //@synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest - In the implementation block
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)disconnectFromRemoteOAuthSigner;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(BOOL)shouldIncludeAppIdInRequest;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
@end

