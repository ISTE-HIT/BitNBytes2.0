import heapq
from collections import Counter

class Node:
    def __init__(self, freq, ch):
        self.freq = freq
        self.ch = ch
    
    def __lt__(self, other):
        if self.freq == other.freq:
            return self.ch > other.ch
        return self.freq < other.freq

def sort_by_frequency(s):
    if len(s) == 0:
        return s

    # Frequency map
    freq_map = Counter(s)

    # Priority queue (min-heap)
    pq = []
    for ch, freq in freq_map.items():
        heapq.heappush(pq, Node(freq, ch))
    
    # Construct the resulting string
    result = []
    while pq:
        node = heapq.heappop(pq)
        result.append(node.ch * node.freq)
    
    return ''.join(result)

if __name__ == '__main__':
    s = input().strip()
    result = sort_by_frequency(s)
    print(result)
