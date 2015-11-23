/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;


@protocol IKJSDOMDocument <JSExport>
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) BOOL xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) BOOL strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(void)setNeedsUpdate;
-(id)createTextNode:(id)arg1;
-(id)createDocumentFragment;
-(void)replace:(id)arg1;
-(id)createElement:(id)arg1;
-(IKDOMElement *)documentElement;
-(id)getElementsByTagName:(id)arg1;
-(void)scrollToTop;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)runTest:(id)arg1 :(id)arg2;
-(BOOL)strictErrorChecking;
-(void)setStrictErrorChecking:(BOOL)arg1;
-(IKJSNavigationDocument *)navigationDocument;
-(IKDOMImplementation *)implementation;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(id)arg1;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1;
-(NSString *)documentURI;
-(void)setDocumentURI:(id)arg1;
-(id)createComment:(id)arg1;
-(id)adoptNode:(id)arg1;
-(id)getElementById:(id)arg1;

@end

