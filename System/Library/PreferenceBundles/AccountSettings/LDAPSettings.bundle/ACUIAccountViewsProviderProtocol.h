/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIAccountViewsProviderProtocol <NSObject>
@optional
-(Class)controllerClassForCreatingAccountWithType:(id)arg1;

@required
-(id)supportedAccountTypeIdentifiers;
-(Class)viewControllerClassForViewingAccount:(id)arg1;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
-(id)configurationInfoForViewingAccount:(id)arg1;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1;

@end

