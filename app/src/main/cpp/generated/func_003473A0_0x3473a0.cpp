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

// Function: func_003473A0
// Address: 0x3473a0 - 0x347400
void func_003473A0_0x3473a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003473A0_0x3473a0");
#endif

    switch (ctx->pc) {
        case 0x3473b4u: goto label_3473b4;
        case 0x3473e4u: goto label_3473e4;
        default: break;
    }

    ctx->pc = 0x3473a0u;

    // 0x3473a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3473a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3473a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3473a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3473a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3473a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3473ac: 0xc0d1cb6  jal         func_3472D8
    ctx->pc = 0x3473ACu;
    SET_GPR_U32(ctx, 31, 0x3473B4u);
    ctx->pc = 0x3473B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473ACu;
    // 0x3473b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472D8u, 0x3473ACu, 0x3473B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473B4u;
label_3473b4:
    // 0x3473b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3473b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3473b8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3473B8u;
    {
        const bool branch_taken_0x3473b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3473b8) {
            ctx->pc = 0x3473BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3473B8u;
            // 0x3473bc: 0x8e03017c  lw          $v1, 0x17C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3473C8u;
            goto label_3473c8;
        }
    }
    ctx->pc = 0x3473C0u;
    // 0x3473c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3473C0u;
    {
        const bool branch_taken_0x3473c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473C0u;
        // 0x3473c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473c0) {
            ctx->pc = 0x3473F0u;
            goto label_3473f0;
        }
    }
    ctx->pc = 0x3473C8u;
label_3473c8:
    // 0x3473c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3473c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3473CCu;
    {
        const bool branch_taken_0x3473cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473CCu;
        // 0x3473d0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473cc) {
            ctx->pc = 0x3473F0u;
            goto label_3473f0;
        }
    }
    ctx->pc = 0x3473D4u;
    // 0x3473d4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3473d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3473d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3473d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3473dc: 0xc0d7398  jal         func_35CE60
    ctx->pc = 0x3473DCu;
    SET_GPR_U32(ctx, 31, 0x3473E4u);
    ctx->pc = 0x3473E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473DCu;
    // 0x3473e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE60u, 0x3473DCu, 0x3473E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473E4u;
label_3473e4:
    // 0x3473e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3473e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3473e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3473e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3473ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3473ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3473f0:
    // 0x3473f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3473f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3473f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3473f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3473f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3473F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3473FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473F8u;
        // 0x3473fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3473F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347400u;
}
