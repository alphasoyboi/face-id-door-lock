//#include <dlib/image_processing/frontal_face_detector.h>
//#include <dlib/image_processing/render_face_detections.h>
//#include <dlib/image_processing.h>
//#include <dlib/image_io.h>
#include <dlib/logger.h>
#include <dlib/misc_api.h>
#include <iostream>

dlib::logger dlog("main");

int main(int argc, char** argv) {
  dlog << dlib::LINFO << "No input image provided";

  return 0;
}


  /*
  cv::Mat frame, gray_frame;

  //// INITIALIZE VIDEOCAPTURE
  cv::VideoCapture cap;
  cap.open(0);
  // check if we succeeded
  if (!cap.isOpened()) {
    std::cerr << "unable to open camera\n";
    return -1;
  }

  //// INITIALIZE FACE DETECTOR
  cv::String haar_detector_path = "haarcascade_frontalface_default.xml";
  cv::CascadeClassifier face_cascade;

  if(!face_cascade.load(HAAR_CASCADE_PATH+haar_detector_path)){
    std::cout << "error loading face cascade from path: " << HAAR_CASCADE_PATH+haar_detector_path << "\n";
    return -1;
  }

  //// GRAB AND WRITE LOOP
  std::cout << "press any key to terminate\n";
  for (;;) {
    // wait for a new frame from camera and store it into 'frame'
    if (!cap.read(frame)) {
      std::cerr << "error reading frame\n";
      break;
    }
    // convert to gray scale
    cv::cvtColor(frame, gray_frame, cv::COLOR_BGR2GRAY);
    std::vector<cv::Rect> faces;
    face_cascade.detectMultiScale(gray_frame, faces);
    if (faces.empty()) {
      cv::putText(frame, "no face detected", cv::Point(10, 50), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 255), 2);
    }
    for (auto& face : faces) {
      cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2);
    }

    // show detector frame and wait for a key with timeout long enough to show images
    imshow("detector", frame);
    if (cv::waitKey(5) >= 0)
      break;
  }
  // the camera will be deinitialized automatically in VideoCapture destructor
  return 0;
   */
}