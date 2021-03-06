//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface FLEXInstancesTableViewController : UITableViewController
{
    NSArray *_instances;
    NSArray *_fieldNames;
}

+ (id)instancesTableViewControllerForClassName:(id)arg1;
+ (id)instancesTableViewControllerForInstancesReferencingObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *fieldNames; // @synthesize fieldNames=_fieldNames;
@property(retain, nonatomic) NSArray *instances; // @synthesize instances=_instances;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end

