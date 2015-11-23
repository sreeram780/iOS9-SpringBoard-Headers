/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {

	BOOL _shouldMoveFile;
	NSString* _originalFilename;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSString * originalFilename;                   //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldMoveFile;                         //@synthesize shouldMoveFile=_shouldMoveFile - In the implementation block
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
-(BOOL)shouldMoveFile;
-(void)setShouldMoveFile:(BOOL)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(NSString *)originalFilename;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
@end

