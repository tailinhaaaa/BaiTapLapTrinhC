from ._anvil_designer import Form1Template
from anvil import *
import anvil.server
import anvil.tables as tables
import anvil.tables.query as q
from anvil.tables import app_tables

class Form1(Form1Template):
  def __init__(self, **properties):
    # Set Form properties and Data Bindings.
    self.init_components(**properties)

    # Any code you write here will run before the form opens.

  def button_1_click(self, **event_args):
    """This method is called when the button is clicked"""
    sorted_numbers = self.insertionSort(self.text_box_1.text)
    self.text_box_2.text = sorted_numbers
  def insertionSort(self, arr):
        # Convert the input string to a list of integers
        arr = list(map(int, arr.split()))

        n = len(arr)
        if n <= 1:
            return

        for i in range(1, n):
            key = arr[i]
            j = i - 1
            while j >= 0 and key < arr[j]:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key

        # Convert the sorted list back to a space-separated string
        sorted_arr = ' '.join(map(str, arr))
        return sorted_arr
