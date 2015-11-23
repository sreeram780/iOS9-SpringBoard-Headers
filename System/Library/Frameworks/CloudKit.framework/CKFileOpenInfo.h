/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {

	BOOL _shouldReadRawEncryptedData;
	NSString* _UUID;
	NSString* _path;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;

}

@property (nonatomic,retain) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                            //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                      //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;              //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(NSString *)UUID;
-(void)setPath:(NSString *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(id)CKPropertiesDescription;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(BOOL)shouldReadRawEncryptedData;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(void)setUUID:(NSString *)arg1 ;
@end

