//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHITabViewItemEditor : IBEditor
{
}

- (struct _NSRect)titleRectForEditingContext:(void *)arg1 userInfo:(id)arg2;
- (BOOL)stringEditingContextForEvent:(id)arg1 context:(void **)arg2 userInfo:(id *)arg3;
- (void)didOpen;
- (id)tabView;
- (id)tabViewItem;

@end