import matplotlib.pyplot as plt
import numpy as np

N = [1000003, 2000003, 4000037, 8000009, 16000057, 32000011, 64000031, 
     128000003, 256000001, 512000009, 1024000009, 2048000011]

T = [0.008024, 0.014059, 0.025929, 0.055440, 0.119256, 0.185167, 0.308924,
     0.626430, 1.369814, 2.502697, 4.961742, 9.724833]

fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(14, 5))

ax1.plot(N, T, 'bo-', linewidth=2, markersize=8)
ax1.set_xlabel('N')
ax1.set_ylabel('Time (seconds)')
ax1.set_title('Graph 1: Experimental T(N) - A2')
ax1.grid(True, alpha=0.3)
ax1.ticklabel_format(style='scientific', axis='x', scilimits=(0,0))

O_N = np.array(N) / N[0] * T[0]
ax2.plot(N, O_N, 'r^-', linewidth=2, markersize=8)
ax2.set_xlabel('N')
ax2.set_ylabel('Complexity (normalized)')
ax2.set_title('Graph 2: Theoretical O(N/2)')
ax2.grid(True, alpha=0.3)
ax2.ticklabel_format(style='scientific', axis='x', scilimits=(0,0))

plt.tight_layout()
plt.savefig('static/A2.graph.png', dpi=300, bbox_inches='tight')
print("Graphs saved: static/A2.graph.png")
plt.show()
