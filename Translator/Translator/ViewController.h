//
//  ViewController.h
//  Translator
//
//  Created by Dalton on 1/18/16.
//  Copyright © 2016 Dalton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenEars/OEEventsObserver.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;
//@property (strong, nonatomic) OEFliteController *fliteController;

@end

