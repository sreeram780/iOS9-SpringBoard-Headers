/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSLock, NSMutableDictionary;

@interface MFWeakDictionary : NSMutableDictionary {

	unsigned long long _gen;
	NSLock* _lock;
	NSMutableDictionary* _dictionary;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)allValues;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_copyDictionary;
@end

