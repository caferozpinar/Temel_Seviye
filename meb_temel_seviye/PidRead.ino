
void PidRead(){
  //pid çalışmaz ancak sensörler okumaya devam eder.
  if(zemin)uint16_t position = qtr.readLineWhite(sensor);
  else uint16_t position = qtr.readLineBlack(sensor);
}
