//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHStateManager : NSObject
{
    id <NPHStateManagerDelegate> _delegate;
}

+ (id)currentCallConfigurationWithSource:(id)arg1;
@property(readonly, nonatomic) __weak id <NPHStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end