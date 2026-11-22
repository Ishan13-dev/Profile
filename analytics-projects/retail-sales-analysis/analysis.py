"""Retail sales analysis using Pandas and Matplotlib.
Run: python analysis.py
Synthetic data is used for practice; no real business data.
"""
from pathlib import Path
import pandas as pd
import matplotlib.pyplot as plt

ROOT = Path(__file__).resolve().parent
DATA = ROOT / "data" / "retail_sales.csv"
OUT = ROOT / "outputs"
OUT.mkdir(exist_ok=True)

df = pd.read_csv(DATA, parse_dates=["order_date"])
df["revenue"] = df["units_sold"] * df["unit_price"]
df["cost"] = df["units_sold"] * df["unit_cost"]
df["profit"] = df["revenue"] - df["cost"]
df["month"] = df["order_date"].dt.to_period("M").astype(str)

print("\n--- OVERALL KPIs ---")
print(f"Revenue: ₹{df['revenue'].sum():,.0f}")
print(f"Profit: ₹{df['profit'].sum():,.0f}")
print(f"Units sold: {df['units_sold'].sum():,}")
print(f"Average order revenue: ₹{df['revenue'].mean():,.0f}")
print(f"Profit margin: {df['profit'].sum() / df['revenue'].sum():.1%}")

category = df.groupby("category")[["revenue", "profit"]].sum().sort_values("revenue", ascending=False)
region = df.groupby("region")[["revenue", "profit"]].sum().sort_values("profit", ascending=False)
product = df.groupby("product")[["revenue", "profit", "units_sold"]].sum().sort_values("revenue", ascending=False)
monthly = df.groupby("month")["revenue"].sum()

print("\n--- CATEGORY PERFORMANCE ---\n", category)
print("\n--- REGION PERFORMANCE (ranked by profit) ---\n", region)
print("\n--- TOP PRODUCTS ---\n", product.head(5))
print("\n--- MONTHLY REVENUE ---\n", monthly)

category.to_csv(OUT / "category_summary.csv")
region.to_csv(OUT / "region_summary.csv")
product.to_csv(OUT / "product_summary.csv")
monthly.to_csv(OUT / "monthly_revenue.csv")

# Category revenue bar chart
category["revenue"].plot(kind="bar", title="Revenue by Category", ylabel="Revenue (₹)", xlabel="Category", rot=0)
plt.tight_layout()
plt.savefig(OUT / "revenue_by_category.png", dpi=160)
plt.close()

# Monthly revenue trend
monthly.plot(kind="line", marker="o", title="Monthly Revenue Trend", ylabel="Revenue (₹)", xlabel="Month")
plt.xticks(rotation=45)
plt.tight_layout()
plt.savefig(OUT / "monthly_revenue_trend.png", dpi=160)
plt.close()

# Profit by region
region["profit"].plot(kind="bar", title="Profit by Region", ylabel="Profit (₹)", xlabel="Region", rot=0)
plt.tight_layout()
plt.savefig(OUT / "profit_by_region.png", dpi=160)
plt.close()

print(f"\nAnalysis complete. CSV summaries and charts saved to: {OUT}")
