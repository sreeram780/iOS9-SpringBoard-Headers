/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMBufferObservance : NSObject {

	BOOL _removedOnceEnabled;
	BOOL _fulfilled;
	BOOL _enabled;
	/*^block*/id _predicate;

}

@property (getter=isRemovedOnceEnabled,nonatomic,readonly) BOOL removedOnceEnabled;              //@synthesize removedOnceEnabled=_removedOnceEnabled - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                                //@synthesize predicate=_predicate - In the implementation block
@property (assign,getter=isFulfilled,nonatomic) BOOL fulfilled;                                  //@synthesize fulfilled=_fulfilled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)predicate;
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(BOOL)isFulfilled;
-(void)setFulfilled:(BOOL)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 removedOnceEnabled:(BOOL)arg2 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(BOOL)isRemovedOnceEnabled;
@end

