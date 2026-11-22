-- Retail Sales Analysis: SQLite-compatible queries
-- Run against data/retail_sales.csv imported as a table named retail_sales.
-- revenue = units_sold * unit_price; profit = units_sold * (unit_price - unit_cost)

-- 1. Overall KPIs
SELECT
    SUM(units_sold * unit_price) AS total_revenue,
    SUM(units_sold * (unit_price - unit_cost)) AS total_profit,
    SUM(units_sold) AS units_sold,
    ROUND(100.0 * SUM(units_sold * (unit_price - unit_cost))
          / SUM(units_sold * unit_price), 2) AS profit_margin_pct
FROM retail_sales;

-- 2. Revenue and profit by category
SELECT category,
       SUM(units_sold * unit_price) AS revenue,
       SUM(units_sold * (unit_price - unit_cost)) AS profit
FROM retail_sales
GROUP BY category
ORDER BY revenue DESC;

-- 3. Region comparison
SELECT region,
       SUM(units_sold * unit_price) AS revenue,
       SUM(units_sold * (unit_price - unit_cost)) AS profit
FROM retail_sales
GROUP BY region
ORDER BY profit DESC;

-- 4. Top products by revenue
SELECT product,
       SUM(units_sold) AS units,
       SUM(units_sold * unit_price) AS revenue,
       SUM(units_sold * (unit_price - unit_cost)) AS profit
FROM retail_sales
GROUP BY product
ORDER BY revenue DESC
LIMIT 5;

-- 5. Monthly revenue trend
SELECT strftime('%Y-%m', order_date) AS month,
       SUM(units_sold * unit_price) AS revenue
FROM retail_sales
GROUP BY month
ORDER BY month;

-- 6. Products with lower-than-average profit margin
SELECT product,
       SUM(units_sold * (unit_price - unit_cost)) AS profit,
       ROUND(100.0 * SUM(units_sold * (unit_price - unit_cost))
             / SUM(units_sold * unit_price), 2) AS margin_pct
FROM retail_sales
GROUP BY product
HAVING margin_pct < (
    SELECT AVG(product_margin)
    FROM (
        SELECT 100.0 * SUM(units_sold * (unit_price - unit_cost))
               / SUM(units_sold * unit_price) AS product_margin
        FROM retail_sales
        GROUP BY product
    )
)
ORDER BY margin_pct;
