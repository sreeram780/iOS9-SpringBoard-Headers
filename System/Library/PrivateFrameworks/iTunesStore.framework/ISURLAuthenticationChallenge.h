/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
-(id)user;
-(id)password;
-(id)sender;
-(void)cancelAuthentication;
-(long long)failureCount;
-(BOOL)hasPassword;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
@end

