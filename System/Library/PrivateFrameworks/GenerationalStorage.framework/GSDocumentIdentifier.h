/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned char volumeUUID[16];
	unsigned long long documentID;
	int deviceID;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDocumentIdentifier:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(BOOL)arg3 error:(id*)arg4 ;
@end

