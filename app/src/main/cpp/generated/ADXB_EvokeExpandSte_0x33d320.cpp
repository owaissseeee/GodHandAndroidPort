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

// Function: ADXB_EvokeExpandSte
// Address: 0x33d320 - 0x33d378
void ADXB_EvokeExpandSte_0x33d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXB_EvokeExpandSte_0x33d320");
#endif

    switch (ctx->pc) {
        case 0x33d364u: goto label_33d364;
        default: break;
    }

    ctx->pc = 0x33d320u;

    // 0x33d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d324: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x33d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x33d328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d32c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x33d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33d330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d334: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33d334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d338: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x33d33c: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x33d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x33d340: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x33d340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x33d344: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33d344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d348: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x33d348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33d34c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x33d34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33d350: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x33d350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d354: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x33d354u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33d358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d35c: 0xc0cfea8  jal         func_33FAA0
    ctx->pc = 0x33D35Cu;
    SET_GPR_U32(ctx, 31, 0x33D364u);
    ctx->pc = 0x33D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D35Cu;
    // 0x33d360: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FAA0u, 0x33D35Cu, 0x33D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D364u;
label_33d364:
    // 0x33d364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d370: 0x80cfec0  j           func_33FB00
    ctx->pc = 0x33D370u;
    ctx->pc = 0x33D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D370u;
    // 0x33d374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB00u, 0x33D370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D378u;
}
