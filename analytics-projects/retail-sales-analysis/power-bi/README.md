# Retail Sales Dashboard — Power BI

## Project objective
Build an interactive business dashboard that summarizes sales performance for a fictional retail business across January–June 2025.

**Dataset:** `../data/retail_sales.csv` (30 synthetic records)  
**Tools:** Power BI Desktop, Power Query, DAX

> The data is synthetic and is intended for portfolio demonstration and practice only.

## Business questions
1. How much revenue and profit did we generate?
2. Which product categories and regions contribute most?
3. Which month performed best and worst?
4. Which products generate the most revenue and profit?
5. Where are margins comparatively weak?

## KPIs (expected from the dataset)
| KPI | Value |
|---|---:|
| Total Revenue | ₹114,700 |
| Total Profit | ₹55,300 |
| Units Sold | 231 |
| Profit Margin | 48.2% |
| Best Revenue Month | May 2025 |
| Lowest Revenue Month | February 2025 |

## Dashboard pages

### 1. Sales Overview
**Slicers:** Date, Region, Category  
**Top row:** Revenue, Profit, Profit Margin, Units Sold  
**Visuals:**
- Revenue and profit by month (line chart)
- Revenue by category (horizontal bar)
- Revenue by region (bar or map if location data is suitable)
- Top 5 products by revenue

### 2. Category & Region
- Matrix: Region × Category with Revenue, Profit, Margin
- Revenue by category (donut or bar)
- Profit by region (bar)
- Category and region slicers

### 3. Product Performance
- Top 10 products by Revenue
- Profit by product
- Units sold by product
- Revenue / Profit / Margin tooltip

## Suggested layout (Overview page)
```
┌──────────────────────────────────────────────────────────────────┐
│ RETAIL SALES PERFORMANCE                     Date | Region | Category│
├──────────────┬──────────────┬──────────────┬─────────────────────┤
│ Revenue      │ Profit       │ Profit Margin│ Units Sold          │
├────────────────────────────────────┬─────────────────────────────┤
│ Monthly Revenue & Profit trend     │ Revenue by Category          │
├────────────────────────────────────┬─────────────────────────────┤
│ Revenue by Region                 │ Top 5 Products               │
└────────────────────────────────────┴─────────────────────────────┘
```

## Data model
1. Import the CSV using **Get Data → Text/CSV**.
2. Rename the imported table to `Sales`.
3. Set `order_date` to Date; numeric fields to Whole Number / Decimal Number as appropriate.
4. Add a Date table using the DAX expression in `measures.dax`.
5. Mark the Date table as the date table.
6. Create relationship: `Date[Date]` (one) → `Sales[order_date]` (many).
7. Add measures from `measures.dax`.
8. Format Revenue and Profit as currency (₹); margin as percentage.

## Recommended visual formatting
- Canvas: 16:9
- Background: warm off-white or very light gray
- Cards: clean white, subtle border, generous spacing
- Accent: deep navy with teal highlight; use restrained colors consistently
- Avoid excessive gridlines, shadows, and decorative chart effects
- Keep titles descriptive and labels readable

## Insights to highlight
- May is the highest-revenue month in the sample; February is the lowest.
- Electronics contributes the largest share of revenue.
- West has the largest regional profit in the sample.
- Use slicers to explore whether rankings change across category and region.

## Reproducibility
The dataset is synthetic. KPI values are expected to match when measures are applied to all rows without filters.

## Next iteration
- Replace synthetic data with a larger, realistic dataset.
- Add year-over-year comparisons once multiple years exist.
- Add a drill-through page for product details.
- Publish a screenshot of the finished dashboard and, if possible, a Power BI report file.
