# Driver-Drowsiness-Detection

## Overview
This project develops a real-time driver alertness monitoring system using deep learning and computer vision techniques. The system analyzes facial cues such as eyelid closure, yawning, and head position to detect signs of drowsiness and distraction. It then triggers timely alerts to improve driver safety and reduce accidents caused by fatigue.

## Features
- Real-time detection of driver drowsiness from video or image input
- Uses deep learning models including ZFNet and CNN for facial feature analysis
- Implements Hadoop HDFS for efficient large-scale dataset storage and processing
- Integrates Arduino-based hardware for immediate driver alert notifications
- Evaluated multiple machine learning models to choose the best balance of accuracy and efficiency

## Technologies Used
- Python
- TensorFlow, Keras
- OpenCV
- Hadoop HDFS
- Arduino
- Jupyter Notebook

## Dataset
The system is trained and tested on the Driver Drowsiness Dataset (DDD) obtained from Kaggle, containing over 41,000 labeled RGB images classified into ‘Drowsy’ and ‘Non-Drowsy’ categories.

## Model Performance
- The ZFNet model was selected for deployment due to its strong balance between accuracy and computational efficiency.
- Achieved **89.59% accuracy** on the test set.
- Other models such as CNN achieved slightly higher accuracy (93.96%) but with increased computational costs.

## Usage
1. Clone the repository.  
2. Set up the environment with required libraries (see `requirements.txt`).  
3. Run the Jupyter notebooks for data preprocessing, model training, and evaluation.  
4. Deploy the trained ZFNet model for real-time drowsiness detection.  
5. Connect Arduino hardware to receive real-time alert notifications.

## Future Work
- Explore further optimization of model architecture for embedded systems.  
- Incorporate additional physiological signals for improved accuracy.  
- Develop mobile or edge device deployment solutions.

 
