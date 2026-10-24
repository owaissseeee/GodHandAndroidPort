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

// Function: GetSingleton7861C8_276790
// Address: 0x276790 - 0x2767e0
void GetSingleton7861C8_276790_0x276790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton7861C8_276790_0x276790");
#endif

    switch (ctx->pc) {
        case 0x2767b4u: goto label_2767b4;
        case 0x2767ccu: goto label_2767cc;
        default: break;
    }

    ctx->pc = 0x276790u;

    // 0x276790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276794: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x276794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x276798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x276798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27679c: 0x8c6261c8  lw          $v0, 0x61C8($v1)
    ctx->pc = 0x27679cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7861C8u));
    // 0x2767a0: 0x247061c8  addiu       $s0, $v1, 0x61C8
    ctx->pc = 0x2767a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25032));
    // 0x2767a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2767A4u;
    {
        const bool branch_taken_0x2767a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2767A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767A4u;
        // 0x2767a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767a4) {
            ctx->pc = 0x2767CCu;
            goto label_2767cc;
        }
    }
    ctx->pc = 0x2767ACu;
    // 0x2767ac: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x2767ACu;
    SET_GPR_U32(ctx, 31, 0x2767B4u);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x2767ACu, 0x2767B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767B4u;
label_2767b4:
    // 0x2767b4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x2767b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x2767b8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2767b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2767bc: 0x24a57ab8  addiu       $a1, $a1, 0x7AB8
    ctx->pc = 0x2767bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31416));
    // 0x2767c0: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x2767c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2767C4u;
    SET_GPR_U32(ctx, 31, 0x2767CCu);
    ctx->pc = 0x2767C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767C4u;
    // 0x2767c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2767C4u, 0x2767CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767CCu;
label_2767cc:
    // 0x2767cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2767ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2767d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2767d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2767d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2767D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2767DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767D8u;
        // 0x2767dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2767D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2767E0u;
}
