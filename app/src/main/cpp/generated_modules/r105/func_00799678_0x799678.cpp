#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_00799678
// Address: 0x799678 - 0x7997e8
void func_00799678_0x799678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799678_0x799678");
#endif

    switch (ctx->pc) {
        case 0x7996b0u: goto label_7996b0;
        case 0x7996e0u: goto label_7996e0;
        case 0x799734u: goto label_799734;
        case 0x799758u: goto label_799758;
        case 0x799764u: goto label_799764;
        case 0x799788u: goto label_799788;
        case 0x79979cu: goto label_79979c;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997d4u: goto label_7997d4;
        default: break;
    }

    ctx->pc = 0x799678u;

    // 0x799678: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79967c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799680: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799684: 0x8044a820  lb          $a0, -0x57E0($v0)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A820u));
    // 0x799688: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79968c: 0x2446a820  addiu       $a2, $v0, -0x57E0
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944800));
    // 0x799690: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799694: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79969c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x7996D8u;
            goto label_7996d8;
        }
    }
    ctx->pc = 0x7996A8u;
    // 0x7996a8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996ac: 0x0  nop
    ctx->pc = 0x7996acu;
    // NOP
label_7996b0:
    // 0x7996b0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996bc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996c0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996C4u;
    {
        const bool branch_taken_0x7996c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c4) {
            ctx->pc = 0x7996D8u;
            goto label_7996d8;
        }
    }
    ctx->pc = 0x7996CCu;
    // 0x7996cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996D0u;
    {
        const bool branch_taken_0x7996d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996d0) {
            ctx->pc = 0x7996D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996D0u;
            // 0x7996d4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996b0;
        }
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x7996E4u;
    {
        const bool branch_taken_0x7996e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e4) {
            ctx->pc = 0x7997D4u;
            goto label_7997d4;
        }
    }
    ctx->pc = 0x7996ECu;
    // 0x7996ec: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x7996f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7996f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7996f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7996f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7996fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799700: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x799704: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799708: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79970c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799710: 0x8e04a900  lw          $a0, -0x5700($s0)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
    // 0x799714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799718: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79971c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79971cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799720: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x799720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799724: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799728: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x79972c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x79972Cu;
    SET_GPR_U32(ctx, 31, 0x799734u);
    ctx->pc = 0x799730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79972Cu;
    // 0x799730: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x79972Cu, 0x799734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79973c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799740: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799744: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799748: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79974c: 0x8e04a900  lw          $a0, -0x5700($s0)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
    // 0x799750: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x8e04a900  lw          $a0, -0x5700($s0)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
    // 0x79975c: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x799768: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79976c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799774: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799778: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79977c: 0x24a5a828  addiu       $a1, $a1, -0x57D8
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944808));
    // 0x799780: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799780u;
    SET_GPR_U32(ctx, 31, 0x799788u);
    ctx->pc = 0x799784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799780u;
    // 0x799784: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799780u, 0x799788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799788u;
label_799788:
    // 0x799788: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79978c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799790: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799794: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799794u;
    SET_GPR_U32(ctx, 31, 0x79979Cu);
    ctx->pc = 0x799798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799794u;
    // 0x799798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799794u, 0x79979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7997a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7997a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a8: 0x24e797e8  addiu       $a3, $a3, -0x6818
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940648));
    // 0x7997ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997b4: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7997B4u;
    SET_GPR_U32(ctx, 31, 0x7997BCu);
    ctx->pc = 0x7997B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B4u;
    // 0x7997b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7997B4u, 0x7997BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c0: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7997C0u;
    SET_GPR_U32(ctx, 31, 0x7997C8u);
    ctx->pc = 0x7997C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C0u;
    // 0x7997c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7997C0u, 0x7997C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C8u;
label_7997c8:
    // 0x7997c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7997d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7997d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7997d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7997dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7997e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7997E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997E8u;
}
} // namespace gh_r105
