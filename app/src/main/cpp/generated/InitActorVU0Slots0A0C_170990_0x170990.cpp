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

// Function: InitActorVU0Slots0A0C_170990
// Address: 0x170990 - 0x170a08
void InitActorVU0Slots0A0C_170990_0x170990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorVU0Slots0A0C_170990_0x170990");
#endif

    switch (ctx->pc) {
        case 0x1709d0u: goto label_1709d0;
        case 0x1709f4u: goto label_1709f4;
        default: break;
    }

    ctx->pc = 0x170990u;

    // 0x170990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17099c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x17099cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1709a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1709a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1709a4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1709a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1709a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1709a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709ac: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1709b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1709b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1709b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1709b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1709b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1709bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1709c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1709c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709c8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1709C8u;
    SET_GPR_U32(ctx, 31, 0x1709D0u);
    ctx->pc = 0x1709CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709C8u;
    // 0x1709cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1709C8u, 0x1709D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709D0u;
label_1709d0:
    // 0x1709d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1709d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1709d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1709dc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1709e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1709e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1709e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709ec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1709ECu;
    SET_GPR_U32(ctx, 31, 0x1709F4u);
    ctx->pc = 0x1709F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709ECu;
    // 0x1709f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1709ECu, 0x1709F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709F4u;
label_1709f4:
    // 0x1709f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1709f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1709f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1709f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1709fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1709fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a00: 0x3e00008  jr          $ra
    ctx->pc = 0x170A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A00u;
        // 0x170a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A08u;
}
