from markitdown import MarkItDown

md = MarkItDown()
result = md.convert("D:\VCU\VCU_SL_ZhengZhou\ZT2\Module\CAN_DBC\整车CAN20260630.xlsx")
print(result.text_content)