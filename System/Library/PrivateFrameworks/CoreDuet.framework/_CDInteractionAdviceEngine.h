/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionAdvising.h>

@class _CDInteractionStore, _CDTemporalInteractionAdvisor, _CDSocialInteractionAdvisor, _CDQueryInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising> {

	_CDInteractionStore* _store;
	_CDTemporalInteractionAdvisor* _temporalAdvisor;
	_CDSocialInteractionAdvisor* _socialAdvisor;
	_CDQueryInteractionAdvisor* _queryAdvisor;

}

@property (nonatomic,readonly) _CDSocialInteractionAdvisor * socialAdvisor; 
@property (nonatomic,readonly) _CDTemporalInteractionAdvisor * temporalAdvisor; 
+(id)interactionAdviceEngineWithStore:(id)arg1 ;
-(id)adviseInteractionsUsingSettings:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(_CDSocialInteractionAdvisor *)socialAdvisor;
-(_CDTemporalInteractionAdvisor *)temporalAdvisor;
@end

