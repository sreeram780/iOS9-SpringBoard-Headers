/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {

	SSURLRequestProperties* _requestProperties;
	SUMescalSession* _session;

}

@property (readonly) SUMescalSession * mescalSession; 
-(void)dealloc;
-(void)run;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(SUMescalSession *)mescalSession;
-(BOOL)_isMescalEnabled;
-(id)_setupSAPCertificate:(id*)arg1 ;
-(id)_setupSAPWithData:(id)arg1 error:(id*)arg2 ;
@end

