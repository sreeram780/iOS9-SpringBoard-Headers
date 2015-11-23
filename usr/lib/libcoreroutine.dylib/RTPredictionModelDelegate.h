/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RTPredictionModelDelegate <NSObject>
@optional
-(void)predictionModelWillStartProcessingData:(id)arg1;
-(void)predictionModelDidFinishProcessingData:(id)arg1;
-(void)predictionModelDidBecomeInvalid:(id)arg1;
-(void)predictionModel:(id)arg1 receivedError:(id)arg2;

@required
-(id)dataProviderForName:(id)arg1;
-(id)predictionModel:(id)arg1 dataProviderAtIndex:(unsigned long long)arg2;
-(unsigned long long)countOfDataProviders;

@end

