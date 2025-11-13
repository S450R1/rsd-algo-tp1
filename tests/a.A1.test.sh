#!/bin/bash
echo "Running tests for A1, It should state that all numbers are prime."
echo ""

numbers=(
  1000003
  2000003
  4000037
  8000009
  16000057
  32000011
  64000031
)

for number in "${numbers[@]}"; do
    echo "Testing number: $number"
    echo "$number" | ./A1
    echo ""
done