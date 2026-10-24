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

// Function: Slot2_blinkMarkTick
// Address: 0x1e3858 - 0x1e3928
void Slot2_blinkMarkTick_0x1e3858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_blinkMarkTick_0x1e3858");
#endif

    switch (ctx->pc) {
        case 0x1e3888u: goto label_1e3888;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e3900u: goto label_1e3900;
        default: break;
    }

    ctx->pc = 0x1e3858u;

    // 0x1e3858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e385c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e3860: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e3860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e3864: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e3868: 0x2490049c  addiu       $s0, $a0, 0x49C
    ctx->pc = 0x1e3868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1180));
    // 0x1e386c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3870: 0x2451e130  addiu       $s1, $v0, -0x1ED0
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x1e3874: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e3878: 0x24920400  addiu       $s2, $a0, 0x400
    ctx->pc = 0x1e3878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1e387c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3880: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1e3880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3884: 0x0  nop
    ctx->pc = 0x1e3884u;
    // NOP
label_1e3888:
    // 0x1e3888: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1e3888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e388c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e388cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e3890: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1e3890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3894: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1e3894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1e3898: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E3898u;
    {
        const bool branch_taken_0x1e3898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3898u;
        // 0x1e389c: 0x30833fff  andi        $v1, $a0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3898) {
            ctx->pc = 0x1E3900u;
            goto label_1e3900;
        }
    }
    ctx->pc = 0x1E38A0u;
    // 0x1e38a0: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1e38a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1e38a4: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1e38a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e38a8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e38a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e38ac: 0x2c63000b  sltiu       $v1, $v1, 0xB
    ctx->pc = 0x1e38acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1e38b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e38b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e38b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e38b8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E38B8u;
    {
        const bool branch_taken_0x1e38b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B8u;
        // 0x1e38bc: 0x30444000  andi        $a0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b8) {
            ctx->pc = 0x1E3900u;
            goto label_1e3900;
        }
    }
    ctx->pc = 0x1E38C0u;
    // 0x1e38c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e38c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e38c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E38C4u;
    {
        const bool branch_taken_0x1e38c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38C4u;
        // 0x1e38c8: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38c4) {
            ctx->pc = 0x1E38E8u;
            goto label_1e38e8;
        }
    }
    ctx->pc = 0x1E38CCu;
    // 0x1e38cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e38d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e38d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e38d8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E38D8u;
    SET_GPR_U32(ctx, 31, 0x1E38E0u);
    ctx->pc = 0x1E38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38D8u;
    // 0x1e38dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E38D8u, 0x1E38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38E0u;
label_1e38e0:
    // 0x1e38e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E38E0u;
    {
        const bool branch_taken_0x1e38e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E0u;
        // 0x1e38e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38e0) {
            ctx->pc = 0x1E3904u;
            goto label_1e3904;
        }
    }
    ctx->pc = 0x1E38E8u;
label_1e38e8:
    // 0x1e38e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e38ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e38ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e38f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e38f8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E38F8u;
    SET_GPR_U32(ctx, 31, 0x1E3900u);
    ctx->pc = 0x1E38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38F8u;
    // 0x1e38fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E38F8u, 0x1E3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3900u;
label_1e3900:
    // 0x1e3900: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e3900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e3904:
    // 0x1e3904: 0x661ffe0  bgez        $s3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1E3904u;
    {
        const bool branch_taken_0x1e3904 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1E3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3904u;
        // 0x1e3908: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3904) {
            ctx->pc = 0x1E3888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3888;
        }
    }
    ctx->pc = 0x1E390Cu;
    // 0x1e390c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e390cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e3910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3918: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e3918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e391c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3920: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3920u;
        // 0x1e3924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3928u;
}
