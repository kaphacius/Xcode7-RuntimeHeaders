//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEShadableAnnotationProvider : DVTAnnotationProvider
{
    SKEShadableAnnotationContext *_context;
    DVTNotificationToken *_shadableCompilationDidFinishObservingToken;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (void)shadableCompilationDidFinish:(id)arg1;
- (unsigned long long)firstLineNumberMatchingString:(id)arg1 inString:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1;

@end