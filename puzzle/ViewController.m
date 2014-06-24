//
//  ViewController.m
//  puzzle
//
//  Created by BSA Univ3 on 18/06/14.
//  Copyright (c) 2014 BSA Univ3. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"
@import AudioToolbox;
#import <Slt/Slt.h>
#import <OpenEars/FliteController.h>

@interface ViewController ()
{
    AppDelegate *delobj;
}
@property(strong,nonatomic)NSArray *kidname;
@property(strong,nonatomic) FliteController *flitecontroller;
@property(strong,nonatomic) Slt *slt;
//@property(strong,nonatomic)NSString *kid



@end

@implementation ViewController

//@synthesize  fliteController, slt;

- (void)viewDidLoad
{
    delobj=[[UIApplication sharedApplication]delegate];
    self.kidname=[delobj getname];
    self.second.text=[self.kidname description];
//
   [super viewDidLoad];
//	// Do any additional setup after loading the view, typically from a nib.
   [self.fliteController say:delobj.kid withVoice:self.slt];


}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//lazy accessor method

- (FliteController *)fliteController{

    if(_flitecontroller == nil){
        _flitecontroller=[[FliteController alloc]init];
    }
    return _flitecontroller;
}

-(Slt *)slt{
    
    if(_slt==nil){
        _slt=[[Slt alloc]init];
    }
    return _slt;
}
@end
