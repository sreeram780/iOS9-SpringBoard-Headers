/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ICCloudThrottlingLevel : NSObject {

	double _batchInterval;
	unsigned long long _numberOfBatches;

}

@property (assign,nonatomic) double batchInterval;                            //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2 ;
-(unsigned long long)numberOfBatches;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(void)setNumberOfBatches:(unsigned long long)arg1 ;
@end

