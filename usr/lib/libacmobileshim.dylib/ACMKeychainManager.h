/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ACMKeychainManager : NSObject
+(id)sharedInstance;
-(id)universalAccessGroup;
-(id)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(id)sharedAccessGroup;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3 ;
-(BOOL)removeItemWithInfo:(id)arg1 ;
@end

