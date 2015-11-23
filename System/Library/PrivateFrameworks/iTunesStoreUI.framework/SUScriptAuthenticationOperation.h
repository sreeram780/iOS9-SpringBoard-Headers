/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (retain) NSNumber * authenticatedDSID;              //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(void)setScriptOptions:(id)arg1 ;
-(void)sendCompletionCallback:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
@end

