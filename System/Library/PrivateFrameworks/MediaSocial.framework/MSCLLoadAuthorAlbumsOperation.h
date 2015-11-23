/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, SKUIClientContext, NSLock;

@interface MSCLLoadAuthorAlbumsOperation : NSOperation {

	NSString* _authorIdentifier;
	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy,readonly) NSString * authorIdentifier;              //@synthesize authorIdentifier=_authorIdentifier - In the implementation block
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(id)initWithAuthorIdentifier:(id)arg1 clientContext:(id)arg2 ;
-(id)_loadArtistContentWithPlatformContext:(id)arg1 error:(id*)arg2 ;
-(id)_loadAlbumsWithItemIdentifiers:(id)arg1 platformContext:(id)arg2 ;
-(id)_loadAlbumsWithLookupResponse:(id)arg1 platformContext:(id)arg2 error:(id*)arg3 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(NSString *)authorIdentifier;
@end

