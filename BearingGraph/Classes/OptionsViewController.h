//--------------------------------------------------------------------------
//  OptionsViewController.h
//
//  (c) StasH, 2011
//--------------------------------------------------------------------------


#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


@interface OptionsViewController : UITableViewController 
{
    UITableViewCell *shipCell_c;
    UITableViewCell *shipCell_v;
    UITableViewCell *targetCell_c;
    UITableViewCell *targetCell_v;
    UITableViewCell *targetCell_b;
    UITableViewCell *targetCell_d;
    UITableViewCell *targetCell_mse;
    
    UITextField *shipText_c;
    UITextField *shipText_v;
    UITextField *targetText_c;
    UITextField *targetText_v;
    UITextField *targetText_b;
    UITextField *targetText_d;
    
}

@property (nonatomic, retain) IBOutlet UITableViewCell *shipCell_c;
@property (nonatomic, retain) IBOutlet UITableViewCell *shipCell_v;
@property (nonatomic, retain) IBOutlet UITableViewCell *targetCell_c;
@property (nonatomic, retain) IBOutlet UITableViewCell *targetCell_v;
@property (nonatomic, retain) IBOutlet UITableViewCell *targetCell_b;
@property (nonatomic, retain) IBOutlet UITableViewCell *targetCell_d;
@property (nonatomic, retain) IBOutlet UITableViewCell *targetCell_mse;

@property (nonatomic, retain) IBOutlet UITextField *shipText_c;
@property (nonatomic, retain) IBOutlet UITextField *shipText_v;
@property (nonatomic, retain) IBOutlet UITextField *targetText_c;
@property (nonatomic, retain) IBOutlet UITextField *targetText_v;
@property (nonatomic, retain) IBOutlet UITextField *targetText_b;
@property (nonatomic, retain) IBOutlet UITextField *targetText_d;


-(IBAction) sliderValueChanged_ship_c: (id)sender;
-(IBAction) sliderValueChanged_ship_v: (id)sender;
-(IBAction) sliderValueChanged_target_c: (id)sender;
-(IBAction) sliderValueChanged_target_v: (id)sender;
-(IBAction) sliderValueChanged_target_b: (id)sender;
-(IBAction) sliderValueChanged_target_d: (id)sender;

@end
