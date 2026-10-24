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

// Function: ResetObjFields9820_1632A0
// Address: 0x1632a0 - 0x1632e8
void ResetObjFields9820_1632A0_0x1632a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjFields9820_1632A0_0x1632a0");
#endif

    switch (ctx->pc) {
        case 0x1632b4u: goto label_1632b4;
        case 0x1632bcu: goto label_1632bc;
        case 0x1632d8u: goto label_1632d8;
        default: break;
    }

    ctx->pc = 0x1632a0u;

    // 0x1632a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1632a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1632a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1632a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1632a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1632a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1632ac: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x1632ACu;
    SET_GPR_U32(ctx, 31, 0x1632B4u);
    ctx->pc = 0x1632B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632ACu;
    // 0x1632b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x1632ACu, 0x1632B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632B4u;
label_1632b4:
    // 0x1632b4: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1632B4u;
    SET_GPR_U32(ctx, 31, 0x1632BCu);
    ctx->pc = 0x1632B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632B4u;
    // 0x1632b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1632B4u, 0x1632BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632BCu;
label_1632bc:
    // 0x1632bc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1632c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632c4: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x1632c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1632c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1632cc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1632ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1632d0: 0xc058564  jal         func_161590
    ctx->pc = 0x1632D0u;
    SET_GPR_U32(ctx, 31, 0x1632D8u);
    ctx->pc = 0x1632D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632D0u;
    // 0x1632d4: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x1632D0u, 0x1632D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632D8u;
label_1632d8:
    // 0x1632d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1632d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1632dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1632dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1632e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1632E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632E0u;
        // 0x1632e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632E8u;
}
