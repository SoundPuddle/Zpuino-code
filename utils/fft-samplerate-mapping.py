
print "Calculating optimal sample rate"

maxsamplerate = 3954
min_sample_rate = 3953

fftsize = 128

#target_freqs = [77.78, 82.41, 87.31, 92.5, 98, 103.8, 110, 116.5, 123.5, 130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7]

#target_freqs = [261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 932.3, 987.8]
target_freqs = [130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9,261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976] # C3 - B6
#target_freqs = [261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976] # C4 - B6
#target_freqs = [130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185, 196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 932.3, 987.8] #C3 - B5
#target_freqs = [196, 207.7, 220, 233.1, 246.9, 261.6, 277.2, 293.7, 311.1, 329.6, 349.2, 370, 392, 415.3, 440, 466.2, 493.9, 523.3, 554.4, 587.3, 622.3, 659.3, 698.5, 740, 784, 830.6, 880, 932.3, 987.8,  1047,1109,1175,1245,1319,1397,1480,1568] #G3 - F#6
#pos = [x for i in range(99)]

def compute_error(ts_freq, debug):
  bin_freq = []
  bin_size = (ts_freq/2.0)/fftsize  # number of hz in each bin
  if debug:
    print "bin size is %f Hz" % bin_size
    
  for i in range(0, fftsize):
    bin_freq.append((i * bin_size) + (bin_size/2.0))
    
  error = 0
  for target_freq in target_freqs:
    target_bin = int(target_freq / bin_size)
    if target_bin >= fftsize:
      #print "target freq %f falls in bin %d, outside the fft (fftsize=%d)" % (target_freq, target_bin, fftsize)
      target_bin = fftsize - 1

    this_error = abs(bin_freq[target_bin] - target_freq)
    error += this_error
    
    if debug:
      print "target %f: bin %d; bin freq %f; error %f" % (target_freq, target_bin, bin_freq[target_bin], this_error)

  return error
  
best_error = 999999999
best_ts_freq = 0

for ts_freq in range(min_sample_rate, maxsamplerate):
  this_error = compute_error(ts_freq, 0)
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
  