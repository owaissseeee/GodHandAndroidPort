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

// Function: ResetObjFields3430_161CC0
// Address: 0x161cc0 - 0x161d08
void ResetObjFields3430_161CC0_0x161cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjFields3430_161CC0_0x161cc0");
#endif

    switch (ctx->pc) {
        case 0x161cd4u: goto label_161cd4;
        case 0x161cdcu: goto label_161cdc;
        case 0x161cf8u: goto label_161cf8;
        default: break;
    }

    ctx->pc = 0x161cc0u;

    // 0x161cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161ccc: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x161CCCu;
    SET_GPR_U32(ctx, 31, 0x161CD4u);
    ctx->pc = 0x161CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CCCu;
    // 0x161cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x161CCCu, 0x161CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CD4u;
label_161cd4:
    // 0x161cd4: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x161CD4u;
    SET_GPR_U32(ctx, 31, 0x161CDCu);
    ctx->pc = 0x161CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CD4u;
    // 0x161cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x161CD4u, 0x161CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CDCu;
label_161cdc:
    // 0x161cdc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x161cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x161ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce4: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x161ce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161cec: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x161cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x161cf0: 0xc058564  jal         func_161590
    ctx->pc = 0x161CF0u;
    SET_GPR_U32(ctx, 31, 0x161CF8u);
    ctx->pc = 0x161CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CF0u;
    // 0x161cf4: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x161CF0u, 0x161CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CF8u;
label_161cf8:
    // 0x161cf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d00: 0x3e00008  jr          $ra
    ctx->pc = 0x161D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D00u;
        // 0x161d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161D08u;
}
