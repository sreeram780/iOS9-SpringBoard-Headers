/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject, CKContainer, NSString;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {

	NSObject*<OS_dispatch_source> _source;
	CKContainer* _ckContainer;
	long long _lastAccountStatus;
	BOOL _resumed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)main;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_accountChangeHandler;
-(id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2 ;
-(void)_accountDidChange;
-(id)initWithCKContainer:(id)arg1 ;
-(unsigned long long)startActivity;
@end

