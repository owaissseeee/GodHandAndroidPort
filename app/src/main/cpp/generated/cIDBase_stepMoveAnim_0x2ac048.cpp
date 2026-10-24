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

// Function: cIDBase_stepMoveAnim
// Address: 0x2ac048 - 0x2ac1c0
void cIDBase_stepMoveAnim_0x2ac048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_stepMoveAnim_0x2ac048");
#endif

    switch (ctx->pc) {
        case 0x2ac0f0u: goto label_2ac0f0;
        case 0x2ac128u: goto label_2ac128;
        case 0x2ac144u: goto label_2ac144;
        default: break;
    }

    ctx->pc = 0x2ac048u;

    // 0x2ac048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac04c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2ac04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2ac050: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ac050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ac054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ac058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac05c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac060: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ac060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ac064: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x2ac064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ac068: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ac068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac06c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2ac06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ac070: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2AC070u;
    {
        const bool branch_taken_0x2ac070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC070u;
        // 0x2ac074: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac070) {
            ctx->pc = 0x2AC1A8u;
            goto label_2ac1a8;
        }
    }
    ctx->pc = 0x2AC078u;
    // 0x2ac078: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x2ac078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac07c: 0x30e22000  andi        $v0, $a3, 0x2000
    ctx->pc = 0x2ac07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x2ac080: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2AC080u;
    {
        const bool branch_taken_0x2ac080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac080) {
            ctx->pc = 0x2AC084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC080u;
            // 0x2ac084: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC1ACu;
            goto label_2ac1ac;
        }
    }
    ctx->pc = 0x2AC088u;
    // 0x2ac088: 0x8222005d  lb          $v0, 0x5D($s1)
    ctx->pc = 0x2ac088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
    // 0x2ac08c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2AC08Cu;
    {
        const bool branch_taken_0x2ac08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac08c) {
            ctx->pc = 0x2AC090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC08Cu;
            // 0x2ac090: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC1ACu;
            goto label_2ac1ac;
        }
    }
    ctx->pc = 0x2AC094u;
    // 0x2ac094: 0x8626006c  lh          $a2, 0x6C($s1)
    ctx->pc = 0x2ac094u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2ac098: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ac098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2ac09c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ac09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac0a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ac0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ac0a4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac0a8: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x2ac0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ac0ac: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2ac0b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC0B0u;
    {
        const bool branch_taken_0x2ac0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0B0u;
        // 0x2ac0b4: 0x84440078  lh          $a0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0b0) {
            ctx->pc = 0x2AC0D0u;
            goto label_2ac0d0;
        }
    }
    ctx->pc = 0x2AC0B8u;
    // 0x2ac0b8: 0x960200a2  lhu         $v0, 0xA2($s0)
    ctx->pc = 0x2ac0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2ac0bc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac0c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC0C0u;
    {
        const bool branch_taken_0x2ac0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0C0u;
        // 0x2ac0c4: 0x34e22000  ori         $v0, $a3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0c0) {
            ctx->pc = 0x2AC0E0u;
            goto label_2ac0e0;
        }
    }
    ctx->pc = 0x2AC0C8u;
    // 0x2ac0c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2AC0C8u;
    {
        const bool branch_taken_0x2ac0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0C8u;
        // 0x2ac0cc: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0c8) {
            ctx->pc = 0x2AC1A8u;
            goto label_2ac1a8;
        }
    }
    ctx->pc = 0x2AC0D0u;
label_2ac0d0:
    // 0x2ac0d0: 0x960200a2  lhu         $v0, 0xA2($s0)
    ctx->pc = 0x2ac0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2ac0d4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac0d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AC0D8u;
    {
        const bool branch_taken_0x2ac0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac0d8) {
            ctx->pc = 0x2AC0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC0D8u;
            // 0x2ac0dc: 0xa60000a2  sh          $zero, 0xA2($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC0E0u;
            goto label_2ac0e0;
        }
    }
    ctx->pc = 0x2AC0E0u;
label_2ac0e0:
    // 0x2ac0e0: 0x860500a2  lh          $a1, 0xA2($s0)
    ctx->pc = 0x2ac0e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2ac0e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ac0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac0e8: 0xc0ab194  jal         func_2AC650
    ctx->pc = 0x2AC0E8u;
    SET_GPR_U32(ctx, 31, 0x2AC0F0u);
    ctx->pc = 0x2AC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0E8u;
    // 0x2ac0ec: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC650u, 0x2AC0E8u, 0x2AC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0F0u;
label_2ac0f0:
    // 0x2ac0f0: 0x92230067  lbu         $v1, 0x67($s1)
    ctx->pc = 0x2ac0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 103)));
    // 0x2ac0f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC0F4u;
    {
        const bool branch_taken_0x2ac0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0F4u;
        // 0x2ac0f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0f4) {
            ctx->pc = 0x2AC110u;
            goto label_2ac110;
        }
    }
    ctx->pc = 0x2AC0FCu;
    // 0x2ac0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac100: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC100u;
    {
        const bool branch_taken_0x2ac100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ac100) {
            ctx->pc = 0x2AC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC100u;
            // 0x2ac104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC130u;
            goto label_2ac130;
        }
    }
    ctx->pc = 0x2AC108u;
    // 0x2ac108: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AC108u;
    {
        const bool branch_taken_0x2ac108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac108) {
            ctx->pc = 0x2AC148u;
            goto label_2ac148;
        }
    }
    ctx->pc = 0x2AC110u;
label_2ac110:
    // 0x2ac110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ac110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac114: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ac114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ac118: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac11c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2ac11cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2ac120: 0xc0ab1b8  jal         func_2AC6E0
    ctx->pc = 0x2AC120u;
    SET_GPR_U32(ctx, 31, 0x2AC128u);
    ctx->pc = 0x2AC124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC120u;
    // 0x2ac124: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6E0u, 0x2AC120u, 0x2AC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC128u;
label_2ac128:
    // 0x2ac128: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC128u;
    {
        const bool branch_taken_0x2ac128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC128u;
        // 0x2ac12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac128) {
            ctx->pc = 0x2AC148u;
            goto label_2ac148;
        }
    }
    ctx->pc = 0x2AC130u;
label_2ac130:
    // 0x2ac130: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ac130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ac134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac138: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2ac138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2ac13c: 0xc0ab21e  jal         func_2AC878
    ctx->pc = 0x2AC13Cu;
    SET_GPR_U32(ctx, 31, 0x2AC144u);
    ctx->pc = 0x2AC140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC13Cu;
    // 0x2ac140: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC878u, 0x2AC13Cu, 0x2AC144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC144u;
label_2ac144:
    // 0x2ac144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac148:
    // 0x2ac148: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC148u;
    {
        const bool branch_taken_0x2ac148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC148u;
        // 0x2ac14c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac148) {
            ctx->pc = 0x2AC188u;
            goto label_2ac188;
        }
    }
    ctx->pc = 0x2AC150u;
    // 0x2ac150: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2ac150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2ac154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac158: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2ac158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ac15c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ac15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac160: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ac160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac164: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2ac164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac168: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x2ac16c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ac16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ac170: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ac170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac174: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2ac174u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2ac178: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2ac178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ac17c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ac17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac180: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ac180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ac184: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2ac184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_2ac188:
    // 0x2ac188: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac18c: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2ac18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2ac190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ac190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ac194: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC194u;
    {
        const bool branch_taken_0x2ac194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac194) {
            ctx->pc = 0x2AC198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC194u;
            // 0x2ac198: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC1ACu;
            goto label_2ac1ac;
        }
    }
    ctx->pc = 0x2AC19Cu;
    // 0x2ac19c: 0x960200a2  lhu         $v0, 0xA2($s0)
    ctx->pc = 0x2ac19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2ac1a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac1a4: 0xa60200a2  sh          $v0, 0xA2($s0)
    ctx->pc = 0x2ac1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 2));
label_2ac1a8:
    // 0x2ac1a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ac1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac1ac:
    // 0x2ac1ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ac1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac1b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ac1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac1b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1B8u;
        // 0x2ac1bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC1C0u;
}
