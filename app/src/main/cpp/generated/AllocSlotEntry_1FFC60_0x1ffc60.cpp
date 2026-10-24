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

// Function: AllocSlotEntry_1FFC60
// Address: 0x1ffc60 - 0x1ffd00
void AllocSlotEntry_1FFC60_0x1ffc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocSlotEntry_1FFC60_0x1ffc60");
#endif

    switch (ctx->pc) {
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd8u: goto label_1ffcd8;
        default: break;
    }

    ctx->pc = 0x1ffc60u;

    // 0x1ffc60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ffc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ffc64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ffc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ffc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ffc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ffc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ffc74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffc78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ffc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ffc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffc80: 0xc0c8d86  jal         func_323618
    ctx->pc = 0x1FFC80u;
    SET_GPR_U32(ctx, 31, 0x1FFC88u);
    ctx->pc = 0x1FFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC80u;
    // 0x1ffc84: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323618u, 0x1FFC80u, 0x1FFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC88u;
label_1ffc88:
    // 0x1ffc88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc8c: 0xc0c90f2  jal         func_3243C8
    ctx->pc = 0x1FFC8Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC94u);
    ctx->pc = 0x1FFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC8Cu;
    // 0x1ffc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243C8u, 0x1FFC8Cu, 0x1FFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC94u;
label_1ffc94:
    // 0x1ffc94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc98: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x1ffc9c: 0x24c64200  addiu       $a2, $a2, 0x4200
    ctx->pc = 0x1ffc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16896));
    // 0x1ffca0: 0x1022c0  sll         $a0, $s0, 11
    ctx->pc = 0x1ffca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1ffca4: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x1FFCA4u;
    SET_GPR_U32(ctx, 31, 0x1FFCACu);
    ctx->pc = 0x1FFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCA4u;
    // 0x1ffca8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x1FFCA4u, 0x1FFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCACu;
label_1ffcac:
    // 0x1ffcac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ffcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcb8: 0xc0c8fa0  jal         func_323E80
    ctx->pc = 0x1FFCB8u;
    SET_GPR_U32(ctx, 31, 0x1FFCC0u);
    ctx->pc = 0x1FFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCB8u;
    // 0x1ffcbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E80u, 0x1FFCB8u, 0x1FFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCC0u;
label_1ffcc0:
    // 0x1ffcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFCC0u;
    {
        const bool branch_taken_0x1ffcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcc0) {
            ctx->pc = 0x1FFCD0u;
            goto label_1ffcd0;
        }
    }
    ctx->pc = 0x1FFCC8u;
label_1ffcc8:
    // 0x1ffcc8: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x1FFCC8u;
    SET_GPR_U32(ctx, 31, 0x1FFCD0u);
    ctx->pc = 0x1FFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCC8u;
    // 0x1ffccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x1FFCC8u, 0x1FFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCD0u;
label_1ffcd0:
    // 0x1ffcd0: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x1FFCD0u;
    SET_GPR_U32(ctx, 31, 0x1FFCD8u);
    ctx->pc = 0x1FFCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCD0u;
    // 0x1ffcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x1FFCD0u, 0x1FFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCD8u;
label_1ffcd8:
    // 0x1ffcd8: 0x1453fffb  bne         $v0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FFCD8u;
    {
        const bool branch_taken_0x1ffcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCD8u;
        // 0x1ffcdc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcd8) {
            ctx->pc = 0x1FFCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffcc8;
        }
    }
    ctx->pc = 0x1FFCE0u;
    // 0x1ffce0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ffce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffce4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ffce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffcec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ffcecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCF4u;
        // 0x1ffcf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFCFCu;
    // 0x1ffcfc: 0x0  nop
    ctx->pc = 0x1ffcfcu;
    // NOP
    ctx->pc = 0x1ffd00u;
}
