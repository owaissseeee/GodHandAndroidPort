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

// Function: func_0034FE90
// Address: 0x34fe90 - 0x34fee0
void func_0034FE90_0x34fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FE90_0x34fe90");
#endif

    switch (ctx->pc) {
        case 0x34feacu: goto label_34feac;
        default: break;
    }

    ctx->pc = 0x34fe90u;

    // 0x34fe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fe94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34fe98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fe98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34fea0: 0x8e021f7c  lw          $v0, 0x1F7C($s0)
    ctx->pc = 0x34fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x34fea4: 0xc0d3fb8  jal         func_34FEE0
    ctx->pc = 0x34FEA4u;
    SET_GPR_U32(ctx, 31, 0x34FEACu);
    ctx->pc = 0x34FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEA4u;
    // 0x34fea8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FEE0u, 0x34FEA4u, 0x34FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FEACu;
label_34feac:
    // 0x34feac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34feacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34feb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34FEB0u;
    {
        const bool branch_taken_0x34feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEB0u;
        // 0x34feb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34feb0) {
            ctx->pc = 0x34FED0u;
            goto label_34fed0;
        }
    }
    ctx->pc = 0x34FEB8u;
    // 0x34feb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34feb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34febc: 0x34a50d0a  ori         $a1, $a1, 0xD0A
    ctx->pc = 0x34febcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3338);
    // 0x34fec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fec4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34FEC4u;
    ctx->pc = 0x34FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEC4u;
    // 0x34fec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34FEC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FECCu;
    // 0x34fecc: 0x0  nop
    ctx->pc = 0x34feccu;
    // NOP
label_34fed0:
    // 0x34fed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fed4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fed8: 0x3e00008  jr          $ra
    ctx->pc = 0x34FED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FED8u;
        // 0x34fedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FEE0u;
}
