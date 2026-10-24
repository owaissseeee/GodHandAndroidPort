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

// Function: func_0032C2A8
// Address: 0x32c2a8 - 0x32c310
void func_0032C2A8_0x32c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032C2A8_0x32c2a8");
#endif

    switch (ctx->pc) {
        case 0x32c2c0u: goto label_32c2c0;
        case 0x32c2f4u: goto label_32c2f4;
        default: break;
    }

    ctx->pc = 0x32c2a8u;

    // 0x32c2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32c2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32c2b8: 0xc0c9de8  jal         func_3277A0
    ctx->pc = 0x32C2B8u;
    SET_GPR_U32(ctx, 31, 0x32C2C0u);
    ctx->pc = 0x32C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2B8u;
    // 0x32c2bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32C2B8u, 0x32C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2C0u;
label_32c2c0:
    // 0x32c2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2c8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C2C8u;
    {
        const bool branch_taken_0x32c2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2C8u;
        // 0x32c2cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c2c8) {
            ctx->pc = 0x32C2E8u;
            goto label_32c2e8;
        }
    }
    ctx->pc = 0x32C2D0u;
    // 0x32c2d0: 0x84860042  lh          $a2, 0x42($a0)
    ctx->pc = 0x32c2d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x32c2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32c2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c2d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32c2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32c2dc: 0x80ca9b4  j           func_32A6D0
    ctx->pc = 0x32C2DCu;
    ctx->pc = 0x32C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2DCu;
    // 0x32c2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x32C2DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32C2E4u;
    // 0x32c2e4: 0x0  nop
    ctx->pc = 0x32c2e4u;
    // NOP
label_32c2e8:
    // 0x32c2e8: 0x86060042  lh          $a2, 0x42($s0)
    ctx->pc = 0x32c2e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x32c2ec: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x32C2ECu;
    SET_GPR_U32(ctx, 31, 0x32C2F4u);
    ctx->pc = 0x32C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2ECu;
    // 0x32c2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x32C2ECu, 0x32C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2F4u;
label_32c2f4:
    // 0x32c2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2f8: 0x84860044  lh          $a2, 0x44($a0)
    ctx->pc = 0x32c2f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x32c2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32c300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c304: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32c304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32c308: 0x80ca9b4  j           func_32A6D0
    ctx->pc = 0x32C308u;
    ctx->pc = 0x32C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C308u;
    // 0x32c30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x32C308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32C310u;
}
