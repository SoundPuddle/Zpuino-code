
print "Calculating optimal sample rate"

maxsamplerate = 16000
min_sample_rate = 15999

fftsize = 4096
bincount = fftsize/2
#target_freqs = [65.41, 69.3, 73.42, 77.78, 82.41, 87.31, 92.5, 98, 103.8, 110, 116.5, 123.5, 130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902, 8372, 8870, 9398, 9956, 10548, 11176, 11840, 12544, 13290, 14080, 14918, 15804] #C2 - B9
#target_freqs = [65.41, 69.3, 73.42, 77.78, 82.41, 87.31, 92.5, 98, 103.8, 110, 116.5, 123.5, 130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902] #C2 - B8
target_freqs = [32.7, 34.65, 36.71, 38.89, 41.2, 43.65, 46.25, 49, 51.91, 55, 58.27, 61.74, 65.41, 69.3, 73.42, 77.78, 82.41, 87.31, 92.5, 98, 103.8, 110, 116.5, 123.5, 130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902] #C1 - B8
#target_freqs = [130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9,261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902] #C3 - B8
#target_freqs = [261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976] # C4 - B6
#target_freqs = [130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 932.3, 987.8] #C3 - B5

#pos = [x for i in range(99)]

def compute_error(ts_freq, debug):
  bin_freq = []
  bins_to_use = []
  bin_size = (ts_freq/2.0)/bincount  # number of hz in each bin
  if debug:
    print "bin size is %f Hz" % bin_size
  for i in range(0, bincount):
    bin_freq.append((i * bin_size) + (bin_size/2.0))
  error = 0
  for target_freq in target_freqs:
    target_bin = int(target_freq / bin_size)
    bins_to_use.append(target_bin)
    if target_bin >= bincount:
      #print "target freq %f falls in bin %d, outside the fft (fftsize=%d)" % (target_freq, target_bin, fftsize)
      target_bin = bincount - 1
    this_error = abs(bin_freq[target_bin] - target_freq)
    error += this_error
    if debug:
      print "target %f: bin %d; bin freq %f; error %f" % (target_freq, target_bin, bin_freq[target_bin], this_error)
  print "C array:"
  print bins_to_use
  return error

#def print_bin_list(ts_freq, debug):
  #bin_freq = []
  #bin_size = (ts_freq/2.0)/fftsize  # number of hz in each bin
  #for i in range(0, fftsize):
    #bin_freq.append((i * bin_size) + (bin_size/2.0))
  #error = 0
  #for target_freq in target_freqs:
    #target_bin = int(target_freq / bin_size)
    #if target_bin >= fftsize:
      ##print "target freq %f falls in bin %d, outside the fft (fftsize=%d)" % (target_freq, target_bin, fftsize)
      #target_bin = fftsize - 1
    #this_error = abs(bin_freq[target_bin] - target_freq)
    #error += this_error
    #print target_bin
  #return error
  
best_error = 999999999
best_ts_freq = 0

for ts_freq in range(min_sample_rate, maxsamplerate):
  this_error = compute_error(ts_freq, 0)
  #print_bin_list(ts_freq, 0)
  #print "ts_freq=%5d, error=%d" % (ts_freq, this_error)
  if this_error < best_error:
    best_ts_freq = ts_freq
    best_error = this_error

print "best one:"
print "ts_freq=%5d, error=%f" % (best_ts_freq, best_error)
compute_error(best_ts_freq, 1)

#  binmaxvalues[x] = ((fftmaxfreq/fftsize) * x)
#  if (x == 0): binmaxvalues[x] = 0
#  else if: binavgvalues[x] =((binmaxvalues[x] - binmaxvalues[x-1])/2) + binmaxvalues[x-1]
  