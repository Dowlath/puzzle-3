//
//  nameViewController.h
//  puzzle
//
//  Created by BSA Univ14 on 24/06/14.
//  Copyright (c) 2014 BSA Univ3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface nameViewController : UIViewController
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
//@property (strong, nonatomic) IBOutlet UITextField *name;
//@property (strong, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) IBOutlet UITextField *name;
- (IBAction)save:(id)sender;
@property (weak, nonatomic) NSString *obj;
//@property (nonatomic,strong) audioViewController *next;
//- (IBAction)save:(id)sender;


@end
