# Power BI Build Checklist

## Data import & model
- [ ] Import `data/retail_sales.csv` into Power BI Desktop.
- [ ] Rename table to `Sales`.
- [ ] Confirm `order_date` type is Date.
- [ ] Confirm `units_sold` is Whole Number and price/cost are Decimal Number.
- [ ] Create Date table using DAX in `measures.dax`.
- [ ] Mark Date table as Date table.
- [ ] Create Date-to-Sales relationship (1-to-many).
- [ ] Create all measures and format them.

## Overview page
- [ ] KPI cards: Revenue, Profit, Margin, Units Sold.
- [ ] Line chart: Revenue and Profit by Year-Month.
- [ ] Bar chart: Revenue by Category.
- [ ] Bar chart: Profit by Region.
- [ ] Top 5 Products by Revenue.
- [ ] Date, Region, Category slicers.
- [ ] Add concise dashboard title and subtitle.

## Category & Region page
- [ ] Matrix: Region × Category; Revenue, Profit, Profit Margin.
- [ ] Category revenue chart.
- [ ] Regional profit chart.
- [ ] Ensure cross-filtering interactions work.

## Product page
- [ ] Top 10 products by revenue.
- [ ] Product profit and margin comparison.
- [ ] Product-level table with Revenue, Profit, Margin, Units.

## Final QA
- [ ] Validate totals against README KPIs (₹114,700 Revenue; ₹55,300 Profit; 231 units).
- [ ] Verify May is highest revenue month and February lowest.
- [ ] Test all slicers and interactions.
- [ ] Check labels and number formats.
- [ ] Export a PDF or dashboard screenshot for portfolio.
- [ ] Add screenshot to project README after report is built.
