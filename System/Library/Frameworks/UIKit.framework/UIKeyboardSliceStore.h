/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject {

	NSMutableDictionary* _store;

}
+(id)sharedStore;
+(id)sliceSetForID:(id)arg1 ;
+(id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 ;
+(void)archiveSet:(id)arg1 ;
-(id)init;
-(id)sliceSetForID:(id)arg1 ;
-(void)addSet:(id)arg1 ;
@end

