//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DataActivationRequestFactory : NSObject
{
}

+ (void)requestWithURL:(id)arg1 method:(unsigned long long)arg2 parameterSources:(unsigned long long)arg3 overrideParameters:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)_postRequestWithURL:(id)arg1 parameters:(id)arg2;
+ (id)_formURLEncodedStringForParameters:(id)arg1;
+ (id)_getRequestWithURL:(id)arg1 parameters:(id)arg2;
+ (void)_parameterDictionaryForSources:(unsigned long long)arg1 overrideParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_parametersForHandoffParametersWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_handoffTokenAndPodIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_parametersForSequoiaDeviceInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_sequoiaDeviceInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_parametersForLegacyDeviceInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)_legacyDeviceInfo;

@end