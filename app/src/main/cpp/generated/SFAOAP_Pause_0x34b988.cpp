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

// Function: SFAOAP_Pause
// Address: 0x34b988 - 0x34b9e0
void SFAOAP_Pause_0x34b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFAOAP_Pause_0x34b988");
#endif

    switch (ctx->pc) {
        case 0x34b9a8u: goto label_34b9a8;
        case 0x34b9c8u: goto label_34b9c8;
        default: break;
    }

    ctx->pc = 0x34b988u;

    // 0x34b988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b98c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b990: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b994: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b99c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b9a0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B9A0u;
    SET_GPR_U32(ctx, 31, 0x34B9A8u);
    ctx->pc = 0x34B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9A0u;
    // 0x34b9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B9A0u, 0x34B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9A8u;
label_34b9a8:
    // 0x34b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34b9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b9b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34b9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34b9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B9B8u;
    {
        const bool branch_taken_0x34b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9B8u;
        // 0x34b9bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9b8) {
            ctx->pc = 0x34B9C8u;
            goto label_34b9c8;
        }
    }
    ctx->pc = 0x34B9C0u;
    // 0x34b9c0: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x34B9C0u;
    SET_GPR_U32(ctx, 31, 0x34B9C8u);
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x34B9C0u, 0x34B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9C8u;
label_34b9c8:
    // 0x34b9c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b9cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b9d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9D4u;
        // 0x34b9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B9DCu;
    // 0x34b9dc: 0x0  nop
    ctx->pc = 0x34b9dcu;
    // NOP
    ctx->pc = 0x34b9e0u;
}
