//
//  AppDelegate.h
//  puzzle
//
//  Created by BSA Univ3 on 18/06/14.
//  Copyright (c) 2014 BSA Univ3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property(strong,nonatomic) NSString *kid;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
-(NSArray *)getname;

@end
