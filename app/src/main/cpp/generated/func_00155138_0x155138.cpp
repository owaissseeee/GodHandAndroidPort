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

// Function: func_00155138
// Address: 0x155138 - 0x1551c0
void func_00155138_0x155138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155138_0x155138");
#endif

    switch (ctx->pc) {
        case 0x155180u: goto label_155180;
        case 0x15518cu: goto label_15518c;
        default: break;
    }

    ctx->pc = 0x155138u;

    // 0x155138: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15513c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x155140: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x155140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x155144: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x155144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x155148: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x155148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15514c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x155150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155154: 0x8e620388  lw          $v0, 0x388($s3)
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 904)));
    // 0x155158: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x155158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15515c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x15515cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x155160: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x155160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155164: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x155164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x155168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155168u;
    {
        const bool branch_taken_0x155168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155168u;
        // 0x15516c: 0xa2630385  sb          $v1, 0x385($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 901), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155168) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155170u;
    // 0x155170: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155170u;
    {
        const bool branch_taken_0x155170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155170u;
        // 0x155174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155170) {
            ctx->pc = 0x1551A4u;
            goto label_1551a4;
        }
    }
    ctx->pc = 0x155178u;
label_155178:
    // 0x155178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x155178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15517c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15517cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155180:
    // 0x155180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155184: 0xc055470  jal         func_1551C0
    ctx->pc = 0x155184u;
    SET_GPR_U32(ctx, 31, 0x15518Cu);
    ctx->pc = 0x155188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155184u;
    // 0x155188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1551C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1551C0u, 0x155184u, 0x15518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15518Cu;
label_15518c:
    // 0x15518c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15518cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155190: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x155194: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x155198: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x155198u;
    {
        const bool branch_taken_0x155198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155198u;
        // 0x15519c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155198) {
            ctx->pc = 0x155180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155180;
        }
    }
    ctx->pc = 0x1551A0u;
    // 0x1551a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1551a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1551a4:
    // 0x1551a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1551a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1551a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1551a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1551ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1551acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1551b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1551b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1551b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1551b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1551b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1551B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1551BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B8u;
        // 0x1551bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1551C0u;
}
