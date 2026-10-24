#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: Create__15cR305_ChihuahuaG4cVecffUs
// Address: 0x7996c8 - 0x7997f0
void Create__15cR305_ChihuahuaG4cVecffUs_0x7996c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__15cR305_ChihuahuaG4cVecffUs_0x7996c8");
#endif

    switch (ctx->pc) {
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        default: break;
    }

    ctx->pc = 0x7996c8u;

label_7996c8:
    // 0x7996c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_7996cc:
    // 0x7996cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7996ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_7996d0:
    // 0x7996d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_7996d4:
    // 0x7996d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7996d8:
    // 0x7996d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_7996dc:
    // 0x7996dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7996e0:
    // 0x7996e0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x7996e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_7996e4:
    // 0x7996e4: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_7996e8:
    // 0x7996e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x7996e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_7996ec:
    // 0x7996ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x7996ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_7996f0:
    // 0x7996f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7996f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7996f4:
    // 0x7996f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7996f8:
    // 0x7996f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_7996fc:
    if (ctx->pc == 0x7996FCu) {
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799700u;
        goto label_799700;
    }
    ctx->pc = 0x7996F8u;
    {
        const bool branch_taken_0x7996f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f8) {
            ctx->pc = 0x799718u;
            goto label_799718;
        }
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799704:
    // 0x799704: 0xc0c3ea6  jal         func_30FA98
label_799708:
    if (ctx->pc == 0x799708u) {
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x24040371  addiu       $a0, $zero, 0x371 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79970Cu;
        goto label_79970c;
    }
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x24040371  addiu       $a0, $zero, 0x371 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799710:
    // 0x799710: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_799714:
    if (ctx->pc == 0x799714u) {
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799718u;
        goto label_799718;
    }
    ctx->pc = 0x799710u;
    {
        const bool branch_taken_0x799710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799710) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x1000002d  b           . + 4 + (0x2D << 2)
label_79971c:
    if (ctx->pc == 0x79971Cu) {
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799720u;
        goto label_799720;
    }
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799718) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799724:
    // 0x799724: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799728:
    // 0x799728: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79972c:
    // 0x79972c: 0x40f809  jalr        $v0
label_799730:
    if (ctx->pc == 0x799730u) {
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799734u;
        goto label_799734;
    }
    ctx->pc = 0x79972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799734u);
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79972Cu, 0x799734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799738:
    // 0x799738: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79973c:
    // 0x79973c: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
label_799740:
    if (ctx->pc == 0x799740u) {
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799744u;
        goto label_799744;
    }
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x79973c) {
            ctx->pc = 0x799740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79973Cu;
            // 0x799740: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x799744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799748:
    // 0x799748: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79974c:
    // 0x79974c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799750:
    // 0x799750: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799754:
    // 0x799754: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x799754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799758:
    // 0x799758: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79975c:
    // 0x79975c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799760:
    // 0x799760: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_799764:
    // 0x799764: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_799768:
    if (ctx->pc == 0x799768u) {
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79976Cu;
        goto label_79976c;
    }
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799764) {
            ctx->pc = 0x799768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799764u;
            // 0x799768: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799770:
    // 0x799770: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x799770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_799774:
    // 0x799774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x799774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799778:
    // 0x799778: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x799778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_79977c:
    // 0x79977c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799780:
    // 0x799780: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x799780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_799784:
    // 0x799784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799788:
    // 0x799788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79978c:
    // 0x79978c: 0xe4750104  swc1        $f21, 0x104($v1)
    ctx->pc = 0x79978cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_799790:
    // 0x799790: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799794:
    // 0x799794: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x799794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_799798:
    // 0x799798: 0xe4540118  swc1        $f20, 0x118($v0)
    ctx->pc = 0x799798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_79979c:
    // 0x79979c: 0xe4540114  swc1        $f20, 0x114($v0)
    ctx->pc = 0x79979cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_7997a0:
    // 0x7997a0: 0xc06c846  jal         func_1B2118
label_7997a4:
    if (ctx->pc == 0x7997A4u) {
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A8u;
        goto label_7997a8;
    }
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2118u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_7997ac:
    // 0x7997ac: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
label_7997b0:
    if (ctx->pc == 0x7997B0u) {
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B4u;
        goto label_7997b4;
    }
    ctx->pc = 0x7997ACu;
    {
        const bool branch_taken_0x7997ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x7997ac) {
            ctx->pc = 0x7997B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997ACu;
            // 0x7997b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x7997b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7997b8:
    // 0x7997b8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x7997b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_7997bc:
    // 0x7997bc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x7997bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7997c0:
    // 0x7997c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7997c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7997c4:
    // 0x7997c4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x7997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7997c8:
    // 0x7997c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7997c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7997cc:
    // 0x7997cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997d0:
    // 0x7997d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7997d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7997d4:
    // 0x7997d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7997d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7997d8:
    // 0x7997d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7997d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7997dc:
    // 0x7997dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7997e0:
    // 0x7997e0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x7997e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7997e4:
    // 0x7997e4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x7997e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7997e8:
    // 0x7997e8: 0x3e00008  jr          $ra
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_fallthrough_0x7997e8;
    }
    ctx->pc = 0x7997E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7997e8:
    ctx->pc = 0x7997F0u;
}
} // namespace gh_r305
