/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSAppleAccount.h>
@class NSString;


@protocol SKUIJSAppleAccount <JSExport>
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
@required
-(NSString *)identifier;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)DSID;

@end


@class NSString, ACAccount;

@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount> {

	ACAccount* _account;
	ACAccount* _nativeAccount;

}

@property (readonly) ACAccount * nativeAccount;                            //@synthesize nativeAccount=_nativeAccount - In the implementation block
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
-(NSString *)identifier;
-(id)initWithACAccount:(id)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)DSID;
-(ACAccount *)nativeAccount;
@end

