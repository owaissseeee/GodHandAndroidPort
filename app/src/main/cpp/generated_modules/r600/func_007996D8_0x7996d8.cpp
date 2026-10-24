#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_007996D8
// Address: 0x7996d8 - 0x799878
void func_007996D8_0x7996d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996D8_0x7996d8");
#endif

    switch (ctx->pc) {
        case 0x799718u: goto label_799718;
        case 0x799724u: goto label_799724;
        case 0x79973cu: goto label_79973c;
        case 0x799754u: goto label_799754;
        case 0x79976cu: goto label_79976c;
        case 0x799790u: goto label_799790;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997fcu: goto label_7997fc;
        case 0x799820u: goto label_799820;
        case 0x799834u: goto label_799834;
        case 0x799844u: goto label_799844;
        default: break;
    }

    ctx->pc = 0x7996d8u;

    // 0x7996d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x7996dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7996dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7996e0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7996e4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x7996e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7996ec: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7996f4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7996f8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x7996fc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799700: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799704: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799708: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79970c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799710: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799714: 0x0  nop
    ctx->pc = 0x799714u;
    // NOP
label_799718:
    // 0x799718: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79971c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79971Cu;
    SET_GPR_U32(ctx, 31, 0x799724u);
    ctx->pc = 0x799720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79971Cu;
    // 0x799720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79971Cu, 0x799724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799724u;
    {
        const bool branch_taken_0x799724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799724u;
        // 0x799728: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799724) {
            ctx->pc = 0x799744u;
            goto label_799744;
        }
    }
    ctx->pc = 0x79972Cu;
    // 0x79972c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799734: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x2604ea60  addiu       $a0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x799718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799718;
        }
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799748: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799748u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79974c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799758: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799758u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79975c: 0x260464f0  addiu       $a0, $s0, 0x64F0
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x799760: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799764: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799764u;
    SET_GPR_U32(ctx, 31, 0x79976Cu);
    ctx->pc = 0x799768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799764u;
    // 0x799768: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799764u, 0x79976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x799770: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799774: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799778: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x79977c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799784: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799788: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799788u;
    SET_GPR_U32(ctx, 31, 0x799790u);
    ctx->pc = 0x79978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799788u;
    // 0x79978c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799788u, 0x799790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799790u;
label_799790:
    // 0x799790: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799794: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799798: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x79979c: 0x2413003c  addiu       $s3, $zero, 0x3C
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7997a0: 0x2414003e  addiu       $s4, $zero, 0x3E
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x7997a4: 0x2415003f  addiu       $s5, $zero, 0x3F
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x7997a8: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    // 0x7997ac: 0x0  nop
    ctx->pc = 0x7997acu;
    // NOP
label_7997b0:
    // 0x7997b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7997b4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7997B4u;
    SET_GPR_U32(ctx, 31, 0x7997BCu);
    ctx->pc = 0x7997B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B4u;
    // 0x7997b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7997B4u, 0x7997BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x7997BCu;
    {
        const bool branch_taken_0x7997bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997bc) {
            ctx->pc = 0x799828u;
            goto label_799828;
        }
    }
    ctx->pc = 0x7997C4u;
    // 0x7997c4: 0xa3b10010  sb          $s1, 0x10($sp)
    ctx->pc = 0x7997c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 17));
    // 0x7997c8: 0xa3b30018  sb          $s3, 0x18($sp)
    ctx->pc = 0x7997c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 19));
    // 0x7997cc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7997d0: 0xa3b40020  sb          $s4, 0x20($sp)
    ctx->pc = 0x7997d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 20));
    // 0x7997d4: 0xa3b50028  sb          $s5, 0x28($sp)
    ctx->pc = 0x7997d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 21));
label_7997d8:
    // 0x7997d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7997DCu;
    SET_GPR_U32(ctx, 31, 0x7997E4u);
    ctx->pc = 0x7997E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997DCu;
    // 0x7997e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7997DCu, 0x7997E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x0  nop
    ctx->pc = 0x7997e4u;
    // NOP
    // 0x7997e8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x7997D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997F0u;
    // 0x7997f0: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x7997f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x7997f4: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7997F4u;
    SET_GPR_U32(ctx, 31, 0x7997FCu);
    ctx->pc = 0x7997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F4u;
    // 0x7997f8: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7997F4u, 0x7997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x799800: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799808: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x79980c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799810: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799814: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799818: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799820u;
    {
        const bool branch_taken_0x799820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799820) {
            ctx->pc = 0x79983Cu;
            goto label_79983c;
        }
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79982c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79982Cu;
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79982Cu, 0x799834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x799834u;
    {
        const bool branch_taken_0x799834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0x26c4ea60  addiu       $a0, $s6, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799834) {
            ctx->pc = 0x7997B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997b0;
        }
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799848: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79984c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79984cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799850: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799854: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799858: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79985c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79985cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799860: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x799860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799864: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79986c: 0x3e00008  jr          $ra
    ctx->pc = 0x79986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799874u;
    // 0x799874: 0x0  nop
    ctx->pc = 0x799874u;
    // NOP
    ctx->pc = 0x799878u;
}
} // namespace gh_r600
