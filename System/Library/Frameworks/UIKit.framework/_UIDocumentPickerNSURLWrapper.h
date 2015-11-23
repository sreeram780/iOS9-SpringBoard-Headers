/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {

	BOOL _createSandbox;
	NSURL* _url;
	NSData* _scope;
	NSData* _promiseScope;

}

@property (nonatomic,copy) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL createSandbox;               //@synthesize createSandbox=_createSandbox - In the implementation block
@property (nonatomic,copy) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 ;
+(id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2 ;
+(id)wrapperForExportWithURL:(id)arg1 error:(id*)arg2 ;
+(void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4 ;
+(id)wrapperWithURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setCreateSandbox:(BOOL)arg1 ;
-(void)setScope:(NSData *)arg1 ;
-(NSData *)scope;
-(void)setPromiseScope:(NSData *)arg1 ;
-(NSData *)promiseScope;
-(BOOL)createSandbox;
@end

