/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	unsigned long long _id_number;
	DecisionDetails* _details;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(id)description;
-(DecisionDetails *)details;
-(void)setDetails:(DecisionDetails *)arg1 ;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(void)serializeToXPCObject:(id)arg1 ;
-(unsigned long long)id_number;
-(void)setId_number:(unsigned long long)arg1 ;
@end

