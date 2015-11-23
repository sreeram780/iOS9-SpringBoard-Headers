/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _NSCoreDataTaggedObjectIDFactory : NSObject {

	int _cd_rc;
	unsigned _taggedPoolIndex;
	id _fallbackFactories;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithPK64:(long long)arg1 ;
-(void)setObjectStoreIdentifier:(id)arg1 ;
-(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
-(void)_setStoreInfo1:(id)arg1 ;
-(id)_storeInfo1;
-(void)_storeDeallocated;
-(id)_fallbackFactory;
-(id)_initCoreWithTaggedIndex:(unsigned)arg1 ;
-(id)alloc;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
@end

