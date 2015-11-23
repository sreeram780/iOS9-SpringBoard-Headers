/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDResponseBodyParser.h>

@class NSError, NSMutableData, NSString;

@interface CKDPlaintextResponseBodyParser : NSObject <CKDResponseBodyParser> {

	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	NSMutableData* _parserData;

}

@property (nonatomic,copy) id objectParsedBlock;                      //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
@property (nonatomic,retain) NSMutableData * parserData;              //@synthesize parserData=_parserData - In the implementation block
@property (nonatomic,retain) NSError * parserError;                   //@synthesize parserError=_parserError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)parserError;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(id)objectParsedBlock;
-(void)setParserError:(NSError *)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
@end

