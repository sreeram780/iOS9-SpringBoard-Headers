/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SPDomainManager : NSObject
+(id)defaultManager;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg1 ;
-(void)notifyIndexer;
-(void)applicationWasUninstalled:(id)arg1 ;
-(id)getBundleIdForDomainNumber:(id)arg1 ;
@end

