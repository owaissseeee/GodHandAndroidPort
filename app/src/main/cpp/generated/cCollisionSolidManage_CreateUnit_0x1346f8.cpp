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

// Function: cCollisionSolidManage_CreateUnit
// Address: 0x1346f8 - 0x1347e8
void cCollisionSolidManage_CreateUnit_0x1346f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_CreateUnit_0x1346f8");
#endif

    switch (ctx->pc) {
        case 0x134730u: goto label_134730;
        case 0x134758u: goto label_134758;
        case 0x134778u: goto label_134778;
        case 0x13478cu: goto label_13478c;
        case 0x13479cu: goto label_13479c;
        case 0x1347b0u: goto label_1347b0;
        default: break;
    }

    ctx->pc = 0x1346f8u;

    // 0x1346f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1346fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1346fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x134700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134708: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x134708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13470c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13470cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134710: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x134710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x134714: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x134714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134718: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x134718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13471c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13471cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x134720: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x134720u;
    {
        const bool branch_taken_0x134720 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x134724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134720u;
        // 0x134724: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134720) {
            ctx->pc = 0x1347C8u;
            goto label_1347c8;
        }
    }
    ctx->pc = 0x134728u;
    // 0x134728: 0xc04d1b2  jal         func_1346C8
    ctx->pc = 0x134728u;
    SET_GPR_U32(ctx, 31, 0x134730u);
    ctx->pc = 0x1346C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346C8u, 0x134728u, 0x134730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134730u;
label_134730:
    // 0x134730: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x134730u;
    {
        const bool branch_taken_0x134730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134730u;
        // 0x134734: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134730) {
            ctx->pc = 0x1347CCu;
            goto label_1347cc;
        }
    }
    ctx->pc = 0x134738u;
    // 0x134738: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x134738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13473c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13473Cu;
    {
        const bool branch_taken_0x13473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13473Cu;
        // 0x134740: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13473c) {
            ctx->pc = 0x134794u;
            goto label_134794;
        }
    }
    ctx->pc = 0x134744u;
    // 0x134744: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x134744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x134748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134748u;
    {
        const bool branch_taken_0x134748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134748) {
            ctx->pc = 0x134770u;
            goto label_134770;
        }
    }
    ctx->pc = 0x134750u;
    // 0x134750: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x134754: 0x0  nop
    ctx->pc = 0x134754u;
    // NOP
label_134758:
    // 0x134758: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13475c: 0x0  nop
    ctx->pc = 0x13475cu;
    // NOP
    // 0x134760: 0x0  nop
    ctx->pc = 0x134760u;
    // NOP
    // 0x134764: 0x0  nop
    ctx->pc = 0x134764u;
    // NOP
    // 0x134768: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x134768u;
    {
        const bool branch_taken_0x134768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134768) {
            ctx->pc = 0x13476Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134768u;
            // 0x13476c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134758;
        }
    }
    ctx->pc = 0x134770u;
label_134770:
    // 0x134770: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x134770u;
    SET_GPR_U32(ctx, 31, 0x134778u);
    ctx->pc = 0x134774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134770u;
    // 0x134774: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x134770u, 0x134778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134778u;
label_134778:
    // 0x134778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13477c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134780: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x134780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134784: 0xc04d10c  jal         func_134430
    ctx->pc = 0x134784u;
    SET_GPR_U32(ctx, 31, 0x13478Cu);
    ctx->pc = 0x134788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134784u;
    // 0x134788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x134430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134430u, 0x134784u, 0x13478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13478Cu;
label_13478c:
    // 0x13478c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13478Cu;
    {
        const bool branch_taken_0x13478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13478Cu;
        // 0x134790: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13478c) {
            ctx->pc = 0x1347B4u;
            goto label_1347b4;
        }
    }
    ctx->pc = 0x134794u;
label_134794:
    // 0x134794: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x134794u;
    SET_GPR_U32(ctx, 31, 0x13479Cu);
    ctx->pc = 0x134798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134794u;
    // 0x134798: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x134794u, 0x13479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13479Cu;
label_13479c:
    // 0x13479c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1347a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1347a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347a8: 0xc04d10c  jal         func_134430
    ctx->pc = 0x1347A8u;
    SET_GPR_U32(ctx, 31, 0x1347B0u);
    ctx->pc = 0x1347ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347A8u;
    // 0x1347ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x134430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134430u, 0x1347A8u, 0x1347B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347B0u;
label_1347b0:
    // 0x1347b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1347b4:
    // 0x1347b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1347B4u;
    {
        const bool branch_taken_0x1347b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B4u;
        // 0x1347b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b4) {
            ctx->pc = 0x1347CCu;
            goto label_1347cc;
        }
    }
    ctx->pc = 0x1347BCu;
    // 0x1347bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1347c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1347c4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1347c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1347c8:
    // 0x1347c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1347c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1347cc:
    // 0x1347cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1347ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1347d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1347d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1347d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1347d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1347d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1347d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1347dc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1347dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1347e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1347E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1347E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347E0u;
        // 0x1347e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1347E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1347E8u;
}
