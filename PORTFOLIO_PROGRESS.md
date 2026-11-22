# Portfolio Progress & Work Log

Last updated: 22 November 2026

This file tracks the portfolio work completed with ChatGPT and what remains. It is intended as a persistent project record.

## Goal
Build a polished GitHub portfolio targeting entry-level Data Analyst roles, with evidence of Python, SQL, analytics, visualization, and clear business communication.

## Completed work

### GitHub presentation
- Updated the main `Profile` repository README with a professional portfolio overview.
- Refocused the README toward Data Analyst skills and projects.
- Prepared a profile README template in `PROFILE_README.md`. It is a template only; the special GitHub profile repository still needs to be created and activated.

### Retail Sales Analysis project
Project folder: `analytics-projects/retail-sales-analysis/`

Files created:
- `README.md`: project overview, questions, instructions, tools, and project structure.
- `data/retail_sales.csv`: 30 synthetic sales rows for Jan–Jun 2025.
- `analysis.py`: Pandas-based calculations, summaries, and chart generation.
- `queries.sql`: SQLite-compatible business analysis queries.

Verified sample dataset KPIs (unfiltered):
- Revenue: ₹114,700
- Profit: ₹55,300
- Units sold: 231
- Profit margin: 48.2%
- Highest-revenue month: May (₹23,750)
- Lowest-revenue month: February (₹14,450)
- Electronics revenue: ₹57,300
- Highest regional profit: West (₹16,180)

### Power BI preparation
Folder: `analytics-projects/retail-sales-analysis/power-bi/`

Created:
- `README.md`: dashboard objectives, page designs, data model, suggested layout, and insights.
- `measures.dax`: date-table expression and KPI/time-intelligence measures.
- `dashboard-build-checklist.md`: import/model, visual, QA, and final-export checklist.

The Power BI report itself (`.pbix`) has **not** been created yet; that requires building it in Power BI Desktop.

## Links to work
- Portfolio repo: https://github.com/Ishan13-dev/Profile
- Portfolio website: https://ishan13-dev.github.io/Profile/
- Retail Sales Analysis: https://github.com/Ishan13-dev/Profile/tree/main/analytics-projects/retail-sales-analysis
- Power BI preparation: https://github.com/Ishan13-dev/Profile/tree/main/analytics-projects/retail-sales-analysis/power-bi
- Profile README template: https://github.com/Ishan13-dev/Profile/blob/main/PROFILE_README.md

## Remaining tasks
1. Open Power BI Desktop and import the CSV.
2. Create the Date table and relationship; add DAX measures.
3. Build the overview and supporting dashboard pages; validate KPIs.
4. Save and add the finished `.pbix` (and screenshot, if appropriate) to the repository.
5. Create the special username-matching GitHub profile repository `Ishan13-dev` and copy in `PROFILE_README.md` to activate the profile README.
6. Manually pin recommended repositories on GitHub (connector can't manage pins): Mental Health NLP Analyzer, Retail Sales Analysis, Portfolio, Scientific Calculator, Advanced.
7. Continue with a SQL business-case project, then a customer analytics/retention project.
8. Polish resume, LinkedIn, and GitHub for Data Analyst applications.

## Notes
- Sales data is synthetic and for practice/portfolio demonstration only.
- The illustrative dashboard mockup may include figures not calculated from the dataset; use only verified figures in the final dashboard.
- Do not claim a Power BI report has been built until the actual `.pbix` is created and tested.
