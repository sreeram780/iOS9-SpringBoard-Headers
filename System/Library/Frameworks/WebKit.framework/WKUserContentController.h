/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;

}

@property (nonatomic,copy,readonly) NSArray * userScripts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)_addUserContentFilter:(id)arg1 ;
-(void)_removeUserContentFilter:(id)arg1 ;
-(void)_removeAllUserContentFilters;
-(void)dealloc;
-(id)init;
-(Object*)_apiObject;
-(void)removeAllUserScripts;
-(NSArray *)userScripts;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
-(void)addScriptMessageHandler:(id)arg1 name:(id)arg2 ;
-(void)addUserScript:(id)arg1 ;
@end

