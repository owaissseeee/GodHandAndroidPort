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

// Function: cBgmData_Relocate
// Address: 0x2d0360 - 0x2d03d0
void cBgmData_Relocate_0x2d0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_Relocate_0x2d0360");
#endif

    switch (ctx->pc) {
        case 0x2d03c0u: goto label_2d03c0;
        default: break;
    }

    ctx->pc = 0x2d0360u;

    // 0x2d0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0364: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d0364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d036c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d0370: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x2d0370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d0374: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0374u;
    {
        const bool branch_taken_0x2d0374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0374u;
        // 0x2d0378: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0374) {
            ctx->pc = 0x2D03B0u;
            goto label_2d03b0;
        }
    }
    ctx->pc = 0x2D037Cu;
    // 0x2d037c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d0380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0384: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d0384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d0388: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d038c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d0390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0390u;
    {
        const bool branch_taken_0x2d0390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0390u;
        // 0x2d0394: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0390) {
            ctx->pc = 0x2D03A0u;
            goto label_2d03a0;
        }
    }
    ctx->pc = 0x2D0398u;
    // 0x2d0398: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d0398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d039c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2d03a0:
    // 0x2d03a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d03a4: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x2d03a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d03a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2d03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2d03ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d03acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d03b0:
    // 0x2d03b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d03b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d03b8: 0xc0b40d4  jal         func_2D0350
    ctx->pc = 0x2D03B8u;
    SET_GPR_U32(ctx, 31, 0x2D03C0u);
    ctx->pc = 0x2D03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03B8u;
    // 0x2d03bc: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0350u, 0x2D03B8u, 0x2D03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03C0u;
label_2d03c0:
    // 0x2d03c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d03c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d03c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D03C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03C4u;
        // 0x2d03c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D03C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D03CCu;
    // 0x2d03cc: 0x0  nop
    ctx->pc = 0x2d03ccu;
    // NOP
    ctx->pc = 0x2d03d0u;
}
