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

// Function: DogRace
// Address: 0x1e90f8 - 0x1e91f8
void DogRace_0x1e90f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DogRace_0x1e90f8");
#endif

    switch (ctx->pc) {
        case 0x1e9128u: goto label_1e9128;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91c0u: goto label_1e91c0;
        default: break;
    }

    ctx->pc = 0x1e90f8u;

    // 0x1e90f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e90fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e90fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9104: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1e9108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e910c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e9110: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e9110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e9114: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e9114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e9118: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1e9118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1e911c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9120: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1E9120u;
    SET_GPR_U32(ctx, 31, 0x1E9128u);
    ctx->pc = 0x1E9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9120u;
    // 0x1e9124: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1E9120u, 0x1E9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9128u;
label_1e9128:
    // 0x1e9128: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e912c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1e912cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_1e9130:
    // 0x1e9130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9134: 0xc07b9da  jal         func_1EE768
    ctx->pc = 0x1E9134u;
    SET_GPR_U32(ctx, 31, 0x1E913Cu);
    ctx->pc = 0x1E9138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9134u;
    // 0x1e9138: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE768u, 0x1E9134u, 0x1E913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E913Cu;
label_1e913c:
    // 0x1e913c: 0x0  nop
    ctx->pc = 0x1e913cu;
    // NOP
    // 0x1e9140: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E9140u;
    {
        const bool branch_taken_0x1e9140 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9140u;
        // 0x1e9144: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9140) {
            ctx->pc = 0x1E9130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9130;
        }
    }
    ctx->pc = 0x1E9148u;
    // 0x1e9148: 0xc07b2a0  jal         func_1ECA80
    ctx->pc = 0x1E9148u;
    SET_GPR_U32(ctx, 31, 0x1E9150u);
    ctx->pc = 0x1E914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9148u;
    // 0x1e914c: 0x26440210  addiu       $a0, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECA80u, 0x1E9148u, 0x1E9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9150u;
label_1e9150:
    // 0x1e9150: 0xc07b552  jal         func_1ED548
    ctx->pc = 0x1E9150u;
    SET_GPR_U32(ctx, 31, 0x1E9158u);
    ctx->pc = 0x1E9154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9150u;
    // 0x1e9154: 0x26441840  addiu       $a0, $s2, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED548u, 0x1E9150u, 0x1E9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0xc07b78e  jal         func_1EDE38
    ctx->pc = 0x1E9158u;
    SET_GPR_U32(ctx, 31, 0x1E9160u);
    ctx->pc = 0x1E915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9158u;
    // 0x1e915c: 0x26441b90  addiu       $a0, $s2, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE38u, 0x1E9158u, 0x1E9160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9160u;
label_1e9160:
    // 0x1e9160: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e9164: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x1e9164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
    // 0x1e9168: 0xa64201b0  sh          $v0, 0x1B0($s2)
    ctx->pc = 0x1e9168u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 432), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e916c: 0x2644019c  addiu       $a0, $s2, 0x19C
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x1e9170: 0x264501ec  addiu       $a1, $s2, 0x1EC
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
    // 0x1e9174: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e9178: 0x264201e8  addiu       $v0, $s2, 0x1E8
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    // 0x1e917c: 0x0  nop
    ctx->pc = 0x1e917cu;
    // NOP
label_1e9180:
    // 0x1e9180: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e9180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e9184: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e9188: 0x0  nop
    ctx->pc = 0x1e9188u;
    // NOP
    // 0x1e918c: 0x0  nop
    ctx->pc = 0x1e918cu;
    // NOP
    // 0x1e9190: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E9190u;
    {
        const bool branch_taken_0x1e9190 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9190u;
        // 0x1e9194: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9190) {
            ctx->pc = 0x1E9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9180;
        }
    }
    ctx->pc = 0x1E9198u;
    // 0x1e9198: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e919c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e91a0:
    // 0x1e91a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e91a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e91a8: 0x0  nop
    ctx->pc = 0x1e91a8u;
    // NOP
    // 0x1e91ac: 0x0  nop
    ctx->pc = 0x1e91acu;
    // NOP
    // 0x1e91b0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E91B0u;
    {
        const bool branch_taken_0x1e91b0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91B0u;
        // 0x1e91b4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91b0) {
            ctx->pc = 0x1E91A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e91a0;
        }
    }
    ctx->pc = 0x1E91B8u;
    // 0x1e91b8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e91bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e91c0:
    // 0x1e91c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e91c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e91c8: 0x0  nop
    ctx->pc = 0x1e91c8u;
    // NOP
    // 0x1e91cc: 0x0  nop
    ctx->pc = 0x1e91ccu;
    // NOP
    // 0x1e91d0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E91D0u;
    {
        const bool branch_taken_0x1e91d0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91D0u;
        // 0x1e91d4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91d0) {
            ctx->pc = 0x1E91C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e91c0;
        }
    }
    ctx->pc = 0x1E91D8u;
    // 0x1e91d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e91d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e91dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e91e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e91e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e91e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e91e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e91e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e91e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e91ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e91ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e91f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91F0u;
        // 0x1e91f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E91F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E91F8u;
}
