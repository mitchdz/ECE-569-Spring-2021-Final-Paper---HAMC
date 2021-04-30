make_GF2_identity_gpu()
for (int i = 0; i < numARows; i++) {
    GF2_LU_decompose_find_max_row()
    GF2_LU_decompose_pivot_row()
    GF2_LU_decompose_update_trailing_row()
}
GF2_Forward_substitute()
GF2_Backward_substitute()
GF2_swap_cols()