import numpy as np
import time
start_time=time.time()
x=np.linspace(0,100,100000000)
y=x**3
end_time=time.time()
interval=end_time-start_time
print(interval)
