//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSError (IDEProductsUIAdditions)
+ (id)ide_productsErrorWrappingAnalyticsError:(id)arg1 product:(id)arg2 wasUpdate:(BOOL)arg3;
+ (id)ide_logInErrorForFailedSessionAccountNames:(id)arg1 accountsCount:(unsigned long long)arg2;
+ (id)ide_genericInternetConnectionErrorForProducts;
+ (id)ide_genericInternetConnectionErrorForCrashes:(BOOL)arg1;
- (BOOL)ide_isInternetConnectionError;
@end