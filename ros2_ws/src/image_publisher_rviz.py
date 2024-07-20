import cv2 
import rclpy 

from cv_bridge import CvBridge 
from rclpy.node import Node 
from sensor_msgs.msg import Image, CompressedImage 


from camera_class import VideoStreamer
  
class ImagePublisher(Node):
  """
  Create an ImagePublisher class, which is a subclass of the Node class.
  """
  def __init__(self):
    """
    Class constructor to set up the node
    """
    # Initiate the Node class's constructor and give it a name
    super().__init__('image_subcriber')
    self.seg = VideoStreamer()
    # Create the publisher. This publisher will publish an Image
    # to the video_frames topic. The queue size is 10 messages.
    #self.publisher_ = self.create_publisher(Image, 'image_raw', 10)
    self.publisher_ = self.create_publisher(Image, '/camera/image_raw/segment', 10)
       
    self.subscription = self.create_subscription(
            Image,
            '/camera/color/image_raw',
            self.timer_callback,
            10  # Queue size
        )
    # We will publish a message every 0.1 seconds
    # timer_period = 0.1  # seconds
       
    # Create the timer
    # self.timer = self.create_timer(timer_period, self.timer_callback)
          
    # Create a VideoCapture object
    # The argument '0' gets the default webcam.
    # self.cap = cv2.VideoCapture(0)
          
    # Used to convert between ROS and OpenCV images
    self.br = CvBridge()
    
  def timer_callback(self, msg):
    """
    Callback function.
    This function gets called every 0.1 seconds.
    """
    # Capture frame-by-frame
    # This method returns True/False as well
    # as the video frame.
    # ret, frame = self.cap.read()
           
    # if ret == True:
      # Publish the image.
      # The 'cv2_to_imgmsg' method converts an OpenCV
      # image to a ROS 2 image message

    cv_image = self.br.imgmsg_to_cv2(msg, 'bgr8')
    image = self.seg.generate_frames(cv_image)
    
    # print(image)
    processed_image_msg = self.br.cv2_to_imgmsg(image)
    self.publisher_.publish(processed_image_msg)
    # print("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")
      
    # Display the message on the console
    self.get_logger().info('Publishing video frame')
   
def main(args=None):
   
  # Initialize the rclpy library
  rclpy.init(args=args)
   
  # Create the node
  image_publisher = ImagePublisher()
  
  # Spin the node so the callback function is called.
  rclpy.spin(image_publisher)
   
  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  image_publisher.destroy_node()
   
  # Shutdown the ROS client library for Python
  rclpy.shutdown()
   
if __name__ == '__main__':
  main()