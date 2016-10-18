#ifndef YOLOH
#define YOLOH

typedef struct detector {
    float nms;
    box *boxes;
    float **probs;
    network net;
} detector;

detector init_detector(char *cfg, char *weightfile);
void predict(detector* dec, image input, float thresh);

#endif
