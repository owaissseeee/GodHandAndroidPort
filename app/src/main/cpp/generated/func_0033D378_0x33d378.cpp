#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0033D378
// Address: 0x33d378 - 0x33d3d0
void func_0033D378_0x33d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D378_0x33d378");
#endif

    switch (ctx->pc) {
        case 0x33d3b8u: goto label_33d3b8;
        default: break;
    }

    ctx->pc = 0x33d378u;

    // 0x33d378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d37c: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x33d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x33d380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d384: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33d384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d38c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x33d390: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x33d394: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x33d394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x33d398: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d39c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x33d39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33d3a0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x33d3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33d3a4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d3a8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33d3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d3b0: 0xc0cfeb4  jal         func_33FAD0
    ctx->pc = 0x33D3B0u;
    SET_GPR_U32(ctx, 31, 0x33D3B8u);
    ctx->pc = 0x33D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D3B0u;
    // 0x33d3b4: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FAD0u, 0x33D3B0u, 0x33D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3B8u;
label_33d3b8:
    // 0x33d3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d3bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d3c4: 0x80cfec0  j           func_33FB00
    ctx->pc = 0x33D3C4u;
    ctx->pc = 0x33D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D3C4u;
    // 0x33d3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB00u, 0x33D3C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D3CCu;
    // 0x33d3cc: 0x0  nop
    ctx->pc = 0x33d3ccu;
    // NOP
    ctx->pc = 0x33d3d0u;
}
