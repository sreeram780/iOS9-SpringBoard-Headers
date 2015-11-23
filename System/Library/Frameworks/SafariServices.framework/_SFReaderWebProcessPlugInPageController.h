/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <WebUI/WBUWebProcessPlugInPageController.h>

@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInReaderEnabledPageController;

@interface _SFReaderWebProcessPlugInPageController : WBUWebProcessPlugInPageController {

	unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> >* _readerJSController;
	WKWebProcessPlugInScriptWorld* _isolatedWorldForNextPageDetection;
	_SFWebProcessPlugInReaderEnabledPageController* _originalPageController;

}

@property (assign,nonatomic,__weak) _SFWebProcessPlugInReaderEnabledPageController * originalPageController;              //@synthesize originalPageController=_originalPageController - In the implementation block
+(id)readerPageControllerForContextHandle:(id)arg1 ;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)_initializeReaderJSControllerForFrame:(id)arg1 ;
-(void)loadNewArticle;
-(void)setUserVisibleWidth:(double)arg1 ;
-(void)setReaderFont:(id)arg1 ;
-(void)setReaderTheme:(id)arg1 ;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(id)isolatedWorldForNextPageDetection;
-(id)collectReaderContentFromPrintAndMailingFrame;
-(id)printingMailingFrame;
-(_SFWebProcessPlugInReaderEnabledPageController *)originalPageController;
-(void)setOriginalPageController:(_SFWebProcessPlugInReaderEnabledPageController *)arg1 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
@end

