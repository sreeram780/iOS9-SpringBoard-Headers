/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityKnowledgeVector, NSDate, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {

	PFUbiquityKnowledgeVector* _kv;
	NSDate* _writeDate;

}

@property (nonatomic,readonly) PFUbiquityLocation * receiptFileLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * kv;                        //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * writeDate;                                      //@synthesize writeDate=_writeDate - In the implementation block
-(id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
-(PFUbiquityKnowledgeVector *)kv;
-(id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2 ;
-(NSDate *)writeDate;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
-(PFUbiquityLocation *)receiptFileLocation;
-(void)setWriteDate:(NSDate *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

