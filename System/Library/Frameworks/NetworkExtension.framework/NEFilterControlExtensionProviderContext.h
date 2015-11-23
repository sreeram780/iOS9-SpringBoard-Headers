/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol> {

	BOOL _observing;

}

@property (assign) BOOL observing;                                  //@synthesize observing=_observing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)dispose;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)observing;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

