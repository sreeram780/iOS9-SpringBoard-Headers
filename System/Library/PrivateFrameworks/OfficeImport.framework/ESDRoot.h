/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject {

	NSMutableArray* mChildren;

}
-(id)pbReferenceWithID:(unsigned)arg1 ;
-(id)initWithPbState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(EshRoot*)eshRoot;
-(id)initFromReader:(OcReader*)arg1 ;
@end

