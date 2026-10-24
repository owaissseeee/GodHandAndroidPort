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

// Function: func_003183C8
// Address: 0x3183c8 - 0x318418
void func_003183C8_0x3183c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003183C8_0x3183c8");
#endif

    switch (ctx->pc) {
        case 0x3183ecu: goto label_3183ec;
        case 0x318404u: goto label_318404;
        default: break;
    }

    ctx->pc = 0x3183c8u;

    // 0x3183c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3183c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3183cc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3183ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3183d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3183d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3183d4: 0x8c626608  lw          $v0, 0x6608($v1)
    ctx->pc = 0x3183d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786608u));
    // 0x3183d8: 0x24706608  addiu       $s0, $v1, 0x6608
    ctx->pc = 0x3183d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26120));
    // 0x3183dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3183DCu;
    {
        const bool branch_taken_0x3183dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3183E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183DCu;
        // 0x3183e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183dc) {
            ctx->pc = 0x318404u;
            goto label_318404;
        }
    }
    ctx->pc = 0x3183E4u;
    // 0x3183e4: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x3183E4u;
    SET_GPR_U32(ctx, 31, 0x3183ECu);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x3183E4u, 0x3183ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183ECu;
label_3183ec:
    // 0x3183ec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3183ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3183f0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x3183f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x3183f4: 0x24a50c18  addiu       $a1, $a1, 0xC18
    ctx->pc = 0x3183f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3096));
    // 0x3183f8: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x3183f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x3183fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3183FCu;
    SET_GPR_U32(ctx, 31, 0x318404u);
    ctx->pc = 0x318400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183FCu;
    // 0x318400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3183FCu, 0x318404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318404u;
label_318404:
    // 0x318404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x318404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31840c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318410: 0x3e00008  jr          $ra
    ctx->pc = 0x318410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318410u;
        // 0x318414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318418u;
}
