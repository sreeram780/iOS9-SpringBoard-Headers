/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPContainerPersisterDelegate;
@interface MSPContainerPersister : NSObject {

	id<MSPContainerPersisterDelegate> _delegate;
	long long _duplicatesPolicy;

}

@property (assign,nonatomic,__weak) id<MSPContainerPersisterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long duplicatesPolicy;                                   //@synthesize duplicatesPolicy=_duplicatesPolicy - In the implementation block
-(void)setDelegate:(id<MSPContainerPersisterDelegate>)arg1 ;
-(id<MSPContainerPersisterDelegate>)delegate;
-(long long)duplicatesPolicy;
-(void)fetchContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditedContents:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

