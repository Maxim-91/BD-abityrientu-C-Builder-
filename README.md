## Overview
The program is designed to work with data presented in two tables (`Table1` and `Table2`). The primary function of the application is to filter data from `Table1` and insert it into `Table2` based on criteria set by the user through the graphical interface.

### Workflow:
1. **Data Input**:
   - The user enters values into the text boxes (`Edit1`, `Edit2`, ...) which are then used to compare against the data in `Table1`.
   - The state of the checkboxes (`CheckBox1`, `CheckBox2`, ...) determines which fields will participate in the filtering.

2. **Data Filtering**:
   - When the button is clicked, the program begins checking the records in `Table1` against the specified criteria.
   - If a record meets the filtering conditions, it is added to `Table2`.
