/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock;

@interface MSCLLoadConfigurationOperation : NSOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _configurationBlock;
	NSLock* _lock;

}

@property (retain) SKUIClientContext * clientContext; 
@property (copy) id configurationBlock; 
-(id)init;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)main;
-(id)_authenticateAccount:(id)arg1 error:(id*)arg2 ;
-(id)_configurationWithAccount:(id)arg1 clientContext:(id)arg2 error:(id*)arg3 ;
-(id)_loadAuthorWithAccount:(id)arg1 clientContext:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

