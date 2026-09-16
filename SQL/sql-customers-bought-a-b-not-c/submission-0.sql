SELECT
    c.customer_id,
    c.customer_name
FROM customers c
WHERE EXISTS (
    SELECT 1
    FROM orders o1
    WHERE o1.customer_id = c.customer_id
      AND o1.product_name = 'A'
)
AND EXISTS (
    SELECT 1
    FROM orders o2
    WHERE o2.customer_id = c.customer_id
      AND o2.product_name = 'B'
)
AND NOT EXISTS (
    SELECT 1
    FROM orders o3
    WHERE o3.customer_id = c.customer_id
      AND o3.product_name = 'C'
)
ORDER BY c.customer_name;