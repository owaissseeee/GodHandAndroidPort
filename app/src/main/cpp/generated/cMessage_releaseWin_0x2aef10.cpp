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

// Function: cMessage_releaseWin
// Address: 0x2aef10 - 0x2aef90
void cMessage_releaseWin_0x2aef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_releaseWin_0x2aef10");
#endif

    switch (ctx->pc) {
        case 0x2aef44u: goto label_2aef44;
        case 0x2aef4cu: goto label_2aef4c;
        case 0x2aef68u: goto label_2aef68;
        default: break;
    }

    ctx->pc = 0x2aef10u;

    // 0x2aef10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aef14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aef18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2aef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2aef1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aef1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2aef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2aef24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aef28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aef2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEF2Cu;
    {
        const bool branch_taken_0x2aef2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF2Cu;
        // 0x2aef30: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef2c) {
            ctx->pc = 0x2AEF3Cu;
            goto label_2aef3c;
        }
    }
    ctx->pc = 0x2AEF34u;
    // 0x2aef34: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2aef38: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2aef38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2aef3c:
    // 0x2aef3c: 0xc0ac8d2  jal         func_2B2348
    ctx->pc = 0x2AEF3Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF44u);
    ctx->pc = 0x2AEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF3Cu;
    // 0x2aef40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2348u, 0x2AEF3Cu, 0x2AEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF44u;
label_2aef44:
    // 0x2aef44: 0xc0ac8c6  jal         func_2B2318
    ctx->pc = 0x2AEF44u;
    SET_GPR_U32(ctx, 31, 0x2AEF4Cu);
    ctx->pc = 0x2AEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF44u;
    // 0x2aef48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2318u, 0x2AEF44u, 0x2AEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF4Cu;
label_2aef4c:
    // 0x2aef4c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2aef50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aef5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef60: 0xc0ac8ba  jal         func_2B22E8
    ctx->pc = 0x2AEF60u;
    SET_GPR_U32(ctx, 31, 0x2AEF68u);
    ctx->pc = 0x2AEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF60u;
    // 0x2aef64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E8u, 0x2AEF60u, 0x2AEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF68u;
label_2aef68:
    // 0x2aef68: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x2aef68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
    // 0x2aef6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aef6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aef74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aef74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aef78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2aef78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aef7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aef80: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF80u;
        // 0x2aef84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEF88u;
    // 0x2aef88: 0xa0820bf0  sb          $v0, 0xBF0($a0)
    ctx->pc = 0x2aef88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3056), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aef8c: 0x0  nop
    ctx->pc = 0x2aef8cu;
    // NOP
    ctx->pc = 0x2aef90u;
}
