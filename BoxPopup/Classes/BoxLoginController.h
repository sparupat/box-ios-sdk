//
//  BoxLoginController.h
//  BoxPopup
//
//  Created by Michael Smith on 9/8/09.
//  Copyright 2009 Box.net.
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
//  See the License for the specific language governing permissions and 
//  limitations under the License. 
//

/*
 * The BoxLoginController handles the content section of the login page. 
 */

#import <UIKit/UIKit.h>
#import "BoxCommonUISetup.h"
#import "BoxLoginModelXMLBuilder.h"
#import "BoxFlipViewController.h"



@interface BoxLoginController : UIViewController <UITextFieldDelegate,BoxFlipViewCompatible,UIAlertViewDelegate>{
	IBOutlet UITextField * userNameField;
	IBOutlet UITextField * passwordField;
	IBOutlet UIButton	 * loginButton;
	
	IBOutlet UIScrollView * _scrollView;
	
	BoxFlipViewController * _flipViewController;
}

-(IBAction) didPressLoginButton:(id)sender;
-(IBAction) didPressRegisterButton:(id)sender;

@end
