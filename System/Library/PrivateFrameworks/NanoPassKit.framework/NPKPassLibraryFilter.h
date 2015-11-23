/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, PKEntitlementWhitelist;

@interface NPKPassLibraryFilter : NSObject {

	NSXPCConnection* _connection;
	PKEntitlementWhitelist* _whitelist;

}

@property (readonly) BOOL allowsSilentAdd; 
@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) PKEntitlementWhitelist * whitelist;              //@synthesize whitelist=_whitelist - In the implementation block
-(PKEntitlementWhitelist *)whitelist;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setWhitelist:(PKEntitlementWhitelist *)arg1 ;
-(BOOL)allowAccessToPass:(id)arg1 ;
-(BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2 ;
-(id)filterPassIfNeeded:(id)arg1 ;
-(BOOL)allowsSilentAdd;
@end

