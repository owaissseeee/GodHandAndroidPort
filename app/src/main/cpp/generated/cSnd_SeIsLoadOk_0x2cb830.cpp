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

// Function: cSnd_SeIsLoadOk
// Address: 0x2cb830 - 0x2cb8a0
void cSnd_SeIsLoadOk_0x2cb830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeIsLoadOk_0x2cb830");
#endif

    switch (ctx->pc) {
        case 0x2cb854u: goto label_2cb854;
        case 0x2cb85cu: goto label_2cb85c;
        case 0x2cb86cu: goto label_2cb86c;
        case 0x2cb874u: goto label_2cb874;
        default: break;
    }

    ctx->pc = 0x2cb830u;

    // 0x2cb830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cb834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cb838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cb83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb844: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cb844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cb848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb84c: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB84Cu;
    SET_GPR_U32(ctx, 31, 0x2CB854u);
    ctx->pc = 0x2CB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB84Cu;
    // 0x2cb850: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB84Cu, 0x2CB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB854u;
label_2cb854:
    // 0x2cb854: 0xc0b3f1e  jal         func_2CFC78
    ctx->pc = 0x2CB854u;
    SET_GPR_U32(ctx, 31, 0x2CB85Cu);
    ctx->pc = 0x2CB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB854u;
    // 0x2cb858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC78u, 0x2CB854u, 0x2CB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB85Cu;
label_2cb85c:
    // 0x2cb85c: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB85Cu;
    {
        const bool branch_taken_0x2cb85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB85Cu;
        // 0x2cb860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb85c) {
            ctx->pc = 0x2CB880u;
            goto label_2cb880;
        }
    }
    ctx->pc = 0x2CB864u;
    // 0x2cb864: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB864u;
    SET_GPR_U32(ctx, 31, 0x2CB86Cu);
    ctx->pc = 0x2CB868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB864u;
    // 0x2cb868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB864u, 0x2CB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB86Cu;
label_2cb86c:
    // 0x2cb86c: 0xc0b3f22  jal         func_2CFC88
    ctx->pc = 0x2CB86Cu;
    SET_GPR_U32(ctx, 31, 0x2CB874u);
    ctx->pc = 0x2CB870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB86Cu;
    // 0x2cb870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC88u, 0x2CB86Cu, 0x2CB874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB874u;
label_2cb874:
    // 0x2cb874: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2cb874u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2cb878: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB878u;
    {
        const bool branch_taken_0x2cb878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB878u;
        // 0x2cb87c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb878) {
            ctx->pc = 0x2CB884u;
            goto label_2cb884;
        }
    }
    ctx->pc = 0x2CB880u;
label_2cb880:
    // 0x2cb880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb884:
    // 0x2cb884: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cb884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb888: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb88c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cb88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb894: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB894u;
        // 0x2cb898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB89Cu;
    // 0x2cb89c: 0x0  nop
    ctx->pc = 0x2cb89cu;
    // NOP
    ctx->pc = 0x2cb8a0u;
}
