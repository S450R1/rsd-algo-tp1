#!/bin/bash
echo "Running tests for A2, It should state that all numbers are prime."
echo ""

numbers=(
  1000003
  2000003
  4000037
  8000009
  16000057
  32000011
  64000031
  128000003
  256000001
  512000009
  1024000009
  2048000011
)

for number in "${numbers[@]}"; do
    echo "Testing number: $number"
    echo "$number" | ./A2
    echo ""
done