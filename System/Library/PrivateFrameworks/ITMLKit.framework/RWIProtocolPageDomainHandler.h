/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RWIProtocolPageDomainHandler <NSObject>
@required
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)addScriptToEvaluateOnLoadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 scriptSource:(id)arg3;
-(void)removeScriptToEvaluateOnLoadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 identifier:(id)arg3;
-(void)reloadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ignoreCache:(BOOL*)arg3 scriptToEvaluateOnLoad:(id*)arg4;
-(void)navigateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3;
-(void)getCookiesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)deleteCookieWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 cookieName:(id)arg3 url:(id)arg4;
-(void)getResourceTreeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)getResourceContentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4;
-(void)searchInResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(BOOL*)arg6 isRegex:(BOOL*)arg7;
-(void)searchInResourcesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 text:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5;
-(void)setDocumentContentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 html:(id)arg4;
-(void)setShowPaintRectsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 result:(BOOL)arg3;
-(void)getScriptExecutionStatusWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)setScriptExecutionDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 value:(BOOL)arg3;
-(void)setTouchEmulationEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3;
-(void)setEmulatedMediaWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 media:(id)arg3;
-(void)getCompositingBordersVisibleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)setCompositingBordersVisibleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 visible:(BOOL)arg3;
-(void)snapshotNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3;
-(void)snapshotRectWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;
-(void)handleJavaScriptDialogWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 accept:(BOOL)arg3 promptText:(id*)arg4;
-(void)archiveWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;

@end

