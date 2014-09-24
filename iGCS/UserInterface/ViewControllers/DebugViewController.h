//
//  DebugViewController.h
//  iGCS
//
//  Created by Andrew Aarestad on 2/25/13.
//
//

#import <UIKit/UIKit.h>

@interface DebugViewController : UIViewController
#import <sys/socket.h>
#import "GCDAsyncSocket.h"
#import "GCDAsyncUdpSocket.h"
#import "FileUtils.h"

//#import "iGCSMavLinkInterface.h"



@interface DebugViewController : UIViewController <BRRequestDelegate>
{
    GCDAsyncSocket *gcdsocket;
}


@property (strong, nonatomic) IBOutlet UITextView *consoleTextView;
@property (strong, nonatomic) IBOutlet UITextView *errorsTextView;
@property (strong, nonatomic) IBOutlet UISegmentedControl *videoSource;
@property (strong, nonatomic) IBOutlet UISegmentedControl *videoDisplayLocation;

@property (strong) NSMutableArray *pendingConsoleMessages;
@property (strong) NSMutableArray *pendingErrorMessages;



- (IBAction)bluetoothRxClicked:(id)sender;
- (IBAction)bluetoothTxClicked:(id)sender;
- (IBAction)videoSourceValueChanged:(id)sender;
- (IBAction)videoDisplayLocationValueChanged:(id)sender;

- (IBAction)ftpClicked:(id)sender;
- (IBAction)telClicked:(id)sender;
- (IBAction)mavClicked:(id)sender;
- (IBAction)lndClicked:(id)sender;

-(void)consoleMessage:(NSString*)messageText;
-(void)errorMessage:(NSString*)messageText;


@end
