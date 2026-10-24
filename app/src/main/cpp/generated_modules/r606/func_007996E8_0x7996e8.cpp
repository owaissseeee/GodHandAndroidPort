#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_007996E8
// Address: 0x7996e8 - 0x7998c8
void func_007996E8_0x7996e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996E8_0x7996e8");
#endif

    switch (ctx->pc) {
        case 0x799748u: goto label_799748;
        case 0x799750u: goto label_799750;
        case 0x799764u: goto label_799764;
        case 0x799770u: goto label_799770;
        case 0x79978cu: goto label_79978c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997fcu: goto label_7997fc;
        case 0x799808u: goto label_799808;
        case 0x799810u: goto label_799810;
        case 0x79981cu: goto label_79981c;
        case 0x799850u: goto label_799850;
        case 0x79985cu: goto label_79985c;
        case 0x799874u: goto label_799874;
        case 0x79987cu: goto label_79987c;
        case 0x799884u: goto label_799884;
        case 0x799890u: goto label_799890;
        default: break;
    }

    ctx->pc = 0x7996e8u;

    // 0x7996e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7996ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7996f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7996f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7996f8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7996fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799700: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x799704: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799708: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79970c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799710: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799714: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x799714u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x799718: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x799718u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x79971c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x79971cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x799720: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x799720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x799724: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799728: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x79972c: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x79972cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799730: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799734: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799738: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79973c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x3c15007a  lui         $s5, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x79978Cu;
            goto label_79978c;
        }
    }
    ctx->pc = 0x799744u;
    // 0x799744: 0x0  nop
    ctx->pc = 0x799744u;
    // NOP
label_799748:
    // 0x799748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79974c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799750:
    // 0x799750: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x799754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79975c: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799768: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799768u;
    SET_GPR_U32(ctx, 31, 0x799770u);
    ctx->pc = 0x79976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799768u;
    // 0x79976c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799768u, 0x799770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799774: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799774u;
    {
        const bool branch_taken_0x799774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799774) {
            ctx->pc = 0x799750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799750;
        }
    }
    ctx->pc = 0x79977Cu;
    // 0x79977c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799784: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x2650ea60  addiu       $s0, $s2, -0x15A0
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799790: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799798: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799798u;
    SET_GPR_U32(ctx, 31, 0x7997A0u);
    ctx->pc = 0x79979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799798u;
    // 0x79979c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799798u, 0x7997A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x7997A0u;
    {
        const bool branch_taken_0x7997a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a0) {
            ctx->pc = 0x799748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799748;
        }
    }
    ctx->pc = 0x7997A8u;
    // 0x7997a8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7997A8u;
    SET_GPR_U32(ctx, 31, 0x7997B0u);
    ctx->pc = 0x7997ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A8u;
    // 0x7997ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7997A8u, 0x7997B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0x3c01c2df  lui         $at, 0xC2DF
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49887 << 16));
    // 0x7997b4: 0x3421428f  ori         $at, $at, 0x428F
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17039);
    // 0x7997b8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x7997b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x7997bc: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7997c0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7997c4: 0x3c01c252  lui         $at, 0xC252
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49746 << 16));
    // 0x7997c8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x7997cc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7997ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7997d0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x7997d8: 0x3c01c258  lui         $at, 0xC258
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49752 << 16));
    // 0x7997dc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x7997e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7997e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7997e4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997E4u;
    SET_GPR_U32(ctx, 31, 0x7997ECu);
    ctx->pc = 0x7997E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E4u;
    // 0x7997e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997E4u, 0x7997ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ECu;
label_7997ec:
    // 0x7997ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7997f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7997f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7997f4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7997F4u;
    SET_GPR_U32(ctx, 31, 0x7997FCu);
    ctx->pc = 0x7997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F4u;
    // 0x7997f8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7997F4u, 0x7997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799800: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79980c: 0x0  nop
    ctx->pc = 0x79980cu;
    // NOP
label_799810:
    // 0x799810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799814: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799814u;
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799820: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x799820u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799828: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79982c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79983c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799840: 0xe6360004  swc1        $f22, 0x4($s1)
    ctx->pc = 0x799840u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799844: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x799844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799848: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799854: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799854u;
    SET_GPR_U32(ctx, 31, 0x79985Cu);
    ctx->pc = 0x799858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799854u;
    // 0x799858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799854u, 0x79985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79985Cu;
label_79985c:
    // 0x79985c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799860: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799860u;
    {
        const bool branch_taken_0x799860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799860u;
        // 0x799864: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799860) {
            ctx->pc = 0x799810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799810;
        }
    }
    ctx->pc = 0x799868u;
    // 0x799868: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79986c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x799870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79986Cu;
    // 0x799870: 0x26a5a8b0  addiu       $a1, $s5, -0x5750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79987Cu;
    SET_GPR_U32(ctx, 31, 0x799884u);
    ctx->pc = 0x799880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79987Cu;
    // 0x799880: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79987Cu, 0x799884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799884u;
label_799884:
    // 0x799884: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799888: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799894: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x799894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799898: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79989c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79989cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7998a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7998a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7998a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998ac: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x7998acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7998b0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x7998b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7998b4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x7998b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7998b8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x7998b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7998bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7998BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998C4u;
    // 0x7998c4: 0x0  nop
    ctx->pc = 0x7998c4u;
    // NOP
    ctx->pc = 0x7998c8u;
}
} // namespace gh_r606
