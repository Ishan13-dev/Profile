# Retail Sales Analysis

> A beginner-friendly data analytics portfolio project using **Python, Pandas, SQL, and data visualization**.

## Business Objective

Analyze a sample retail dataset to understand revenue and profit performance, identify top-performing products and regions, and uncover trends that could support business decisions.

**Dataset note:** This project uses a small, synthetic dataset created for demonstration and practice. It does not represent real company sales.

## Questions explored

- What are total revenue, profit, and units sold?
- Which product categories generate the most revenue and profit?
- Which regions perform best?
- How does revenue change month by month?
- Which products are the strongest performers?

## Tools

- Python 3
- Pandas
- Matplotlib
- SQL (SQLite-compatible queries)

## Project structure

```
retail-sales-analysis/
├── data/
│   └── retail_sales.csv
├── analysis.py
├── queries.sql
└── README.md
```

## How to run

1. Clone/download the repository.
2. Install dependencies:

```bash
pip install pandas matplotlib
```

3. Run the analysis:

```bash
python analysis.py
```

Charts are saved into the `outputs/` folder.

## Key metrics

The Python script calculates:

- Total revenue
- Total profit
- Total units sold
- Average order revenue
- Revenue by category
- Profit by region
- Monthly revenue trend
- Top products by revenue

## SQL practice

Open `queries.sql` in SQLite or adapt the queries for your database. The file includes aggregation, grouping, sorting, and monthly analysis.

## Business recommendations

After reviewing the outputs, a retail team could:

- Prioritize products and categories with strong revenue and profit.
- Investigate regions with lower profitability.
- Use monthly trends to plan inventory and promotional timing.
- Review high-revenue products with weak margins before expanding sales.

## Next improvements

- Replace the synthetic data with a public retail dataset.
- Add customer segmentation and repeat-purchase analysis.
- Build an interactive Power BI dashboard.
- Add automated data-quality checks and a more detailed executive summary.

---
*Created as a learning project to practice data analysis and communicate business insights clearly.*
