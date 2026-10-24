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

// Function: GetSingletonD00786618_318788
// Address: 0x318788 - 0x3187d8
void GetSingletonD00786618_318788_0x318788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingletonD00786618_318788_0x318788");
#endif

    switch (ctx->pc) {
        case 0x3187acu: goto label_3187ac;
        case 0x3187c4u: goto label_3187c4;
        default: break;
    }

    ctx->pc = 0x318788u;

    // 0x318788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31878c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x318790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x318790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x318794: 0x8c626618  lw          $v0, 0x6618($v1)
    ctx->pc = 0x318794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786618u));
    // 0x318798: 0x24706618  addiu       $s0, $v1, 0x6618
    ctx->pc = 0x318798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26136));
    // 0x31879c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31879Cu;
    {
        const bool branch_taken_0x31879c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31879Cu;
        // 0x3187a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31879c) {
            ctx->pc = 0x3187C4u;
            goto label_3187c4;
        }
    }
    ctx->pc = 0x3187A4u;
    // 0x3187a4: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x3187A4u;
    SET_GPR_U32(ctx, 31, 0x3187ACu);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x3187A4u, 0x3187ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187ACu;
label_3187ac:
    // 0x3187ac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3187b0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x3187b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x3187b4: 0x24a50ca8  addiu       $a1, $a1, 0xCA8
    ctx->pc = 0x3187b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3240));
    // 0x3187b8: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x3187b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x3187bc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3187BCu;
    SET_GPR_U32(ctx, 31, 0x3187C4u);
    ctx->pc = 0x3187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187BCu;
    // 0x3187c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3187BCu, 0x3187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187C4u;
label_3187c4:
    // 0x3187c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3187c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3187c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3187cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3187ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3187d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3187D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3187D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187D0u;
        // 0x3187d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3187D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3187D8u;
}
