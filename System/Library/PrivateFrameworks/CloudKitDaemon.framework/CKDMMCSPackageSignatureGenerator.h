/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKDMMCSPackageSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(id)dataByFinishingSignature;
-(void)updateWithData:(id)arg1 ;
-(char*)_finishGenerator;
-(void)setValid:(BOOL)arg1 ;
-(void)setGenerator:(void*)arg1 ;
-(void*)generator;
@end

