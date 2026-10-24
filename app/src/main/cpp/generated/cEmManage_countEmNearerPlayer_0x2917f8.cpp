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

// Function: cEmManage_countEmNearerPlayer
// Address: 0x2917f8 - 0x2919c0
void cEmManage_countEmNearerPlayer_0x2917f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_countEmNearerPlayer_0x2917f8");
#endif

    switch (ctx->pc) {
        case 0x291830u: goto label_291830;
        case 0x29183cu: goto label_29183c;
        case 0x291844u: goto label_291844;
        case 0x291880u: goto label_291880;
        case 0x2918d4u: goto label_2918d4;
        case 0x2918e0u: goto label_2918e0;
        case 0x2918e8u: goto label_2918e8;
        default: break;
    }

    ctx->pc = 0x2917f8u;

    // 0x2917f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2917f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2917fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2917fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x291800: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x291800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x291804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29180c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29180cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291810: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x291810u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x291814: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291818: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x291818u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29181c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x291820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291824: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x291824u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x291828: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x291828u;
    SET_GPR_U32(ctx, 31, 0x291830u);
    ctx->pc = 0x29182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291828u;
    // 0x29182c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x291828u, 0x291830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291830u;
label_291830:
    // 0x291830: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x291830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x291834: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x291834u;
    SET_GPR_U32(ctx, 31, 0x29183Cu);
    ctx->pc = 0x291838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291834u;
    // 0x291838: 0x8e6500f0  lw          $a1, 0xF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x291834u, 0x29183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29183Cu;
label_29183c:
    // 0x29183c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29183Cu;
    SET_GPR_U32(ctx, 31, 0x291844u);
    ctx->pc = 0x291840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29183Cu;
    // 0x291840: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29183Cu, 0x291844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291844u;
label_291844:
    // 0x291844: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x291848: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x29184c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291850: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x291850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291854: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x291854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291858: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x291858u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29185c: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x29185cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291860: 0x0  nop
    ctx->pc = 0x291860u;
    // NOP
    // 0x291864: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291864u;
    {
        const bool branch_taken_0x291864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291864) {
            ctx->pc = 0x291868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291864u;
            // 0x291868: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29186Cu;
            goto label_29186c;
        }
    }
    ctx->pc = 0x29186Cu;
label_29186c:
    // 0x29186c: 0x8e110500  lw          $s1, 0x500($s0)
    ctx->pc = 0x29186cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x291870: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x291870u;
    {
        const bool branch_taken_0x291870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x291874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291870u;
        // 0x291874: 0x460015c6  mov.s       $f23, $f2 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291870) {
            ctx->pc = 0x29198Cu;
            goto label_29198c;
        }
    }
    ctx->pc = 0x291878u;
    // 0x291878: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x291878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29187c: 0x0  nop
    ctx->pc = 0x29187cu;
    // NOP
label_291880:
    // 0x291880: 0x52000040  beql        $s0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x291880u;
    {
        const bool branch_taken_0x291880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291880) {
            ctx->pc = 0x291884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291880u;
            // 0x291884: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x291888u;
    // 0x291888: 0x5213003e  beql        $s0, $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x291888u;
    {
        const bool branch_taken_0x291888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x291888) {
            ctx->pc = 0x29188Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291888u;
            // 0x29188c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x291890u;
    // 0x291890: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x291890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x291894: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x291894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x291898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291898u;
    {
        const bool branch_taken_0x291898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291898u;
        // 0x29189c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291898) {
            ctx->pc = 0x2918A8u;
            goto label_2918a8;
        }
    }
    ctx->pc = 0x2918A0u;
    // 0x2918a0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2918a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2918a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2918a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2918a8:
    // 0x2918a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2918a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2918ac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2918ACu;
    {
        const bool branch_taken_0x2918ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918ACu;
        // 0x2918b0: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918ac) {
            ctx->pc = 0x291980u;
            goto label_291980;
        }
    }
    ctx->pc = 0x2918B4u;
    // 0x2918b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2918b8: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2918B8u;
    {
        const bool branch_taken_0x2918b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2918b8) {
            ctx->pc = 0x2918BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2918B8u;
            // 0x2918bc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x2918C0u;
    // 0x2918c0: 0x92020617  lbu         $v0, 0x617($s0)
    ctx->pc = 0x2918c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1559)));
    // 0x2918c4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2918C4u;
    {
        const bool branch_taken_0x2918c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2918c4) {
            ctx->pc = 0x2918C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2918C4u;
            // 0x2918c8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x2918CCu;
    // 0x2918cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2918CCu;
    SET_GPR_U32(ctx, 31, 0x2918D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2918CCu, 0x2918D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918D4u;
label_2918d4:
    // 0x2918d4: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2918d8: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2918D8u;
    SET_GPR_U32(ctx, 31, 0x2918E0u);
    ctx->pc = 0x2918DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918D8u;
    // 0x2918dc: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2918D8u, 0x2918E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918E0u;
label_2918e0:
    // 0x2918e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2918E0u;
    SET_GPR_U32(ctx, 31, 0x2918E8u);
    ctx->pc = 0x2918E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918E0u;
    // 0x2918e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2918E0u, 0x2918E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918E8u;
label_2918e8:
    // 0x2918e8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2918ec: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2918f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2918f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2918f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2918f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2918f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2918fc: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x2918fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291900: 0x0  nop
    ctx->pc = 0x291900u;
    // NOP
    // 0x291904: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291904u;
    {
        const bool branch_taken_0x291904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291904) {
            ctx->pc = 0x291908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291904u;
            // 0x291908: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29190Cu;
            goto label_29190c;
        }
    }
    ctx->pc = 0x29190Cu;
label_29190c:
    // 0x29190c: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x29190cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291910: 0x0  nop
    ctx->pc = 0x291910u;
    // NOP
    // 0x291914: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x291914u;
    {
        const bool branch_taken_0x291914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291914) {
            ctx->pc = 0x291950u;
            goto label_291950;
        }
    }
    ctx->pc = 0x29191Cu;
    // 0x29191c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x29191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x291920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291924: 0x0  nop
    ctx->pc = 0x291924u;
    // NOP
    // 0x291928: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x291928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29192c: 0x0  nop
    ctx->pc = 0x29192cu;
    // NOP
    // 0x291930: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x291930u;
    {
        const bool branch_taken_0x291930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291930) {
            ctx->pc = 0x291934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291930u;
            // 0x291934: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291980u;
            goto label_291980;
        }
    }
    ctx->pc = 0x291938u;
    // 0x291938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x291938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29193c: 0x0  nop
    ctx->pc = 0x29193cu;
    // NOP
    // 0x291940: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x291940u;
    {
        const bool branch_taken_0x291940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291940) {
            ctx->pc = 0x291944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291940u;
            // 0x291944: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x291948u;
    // 0x291948: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x291948u;
    {
        const bool branch_taken_0x291948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291948u;
        // 0x29194c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291948) {
            ctx->pc = 0x291980u;
            goto label_291980;
        }
    }
    ctx->pc = 0x291950u;
label_291950:
    // 0x291950: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x291950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x291954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291958: 0x0  nop
    ctx->pc = 0x291958u;
    // NOP
    // 0x29195c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x29195cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291960: 0x0  nop
    ctx->pc = 0x291960u;
    // NOP
    // 0x291964: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x291964u;
    {
        const bool branch_taken_0x291964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291964) {
            ctx->pc = 0x291968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291964u;
            // 0x291968: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x29196Cu;
    // 0x29196c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29196cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291970: 0x0  nop
    ctx->pc = 0x291970u;
    // NOP
    // 0x291974: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x291974u;
    {
        const bool branch_taken_0x291974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291974) {
            ctx->pc = 0x291978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291974u;
            // 0x291978: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291984u;
            goto label_291984;
        }
    }
    ctx->pc = 0x29197Cu;
    // 0x29197c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_291980:
    // 0x291980: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x291980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_291984:
    // 0x291984: 0x5620ffbe  bnel        $s1, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x291984u;
    {
        const bool branch_taken_0x291984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x291984) {
            ctx->pc = 0x291988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291984u;
            // 0x291988: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291880;
        }
    }
    ctx->pc = 0x29198Cu;
label_29198c:
    // 0x29198c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29198cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x291990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291994: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x291994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29199c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29199cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2919a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2919a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2919a4: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2919a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2919a8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2919a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2919ac: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2919acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2919b0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2919b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2919b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2919B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919B4u;
        // 0x2919b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2919B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2919BCu;
    // 0x2919bc: 0x0  nop
    ctx->pc = 0x2919bcu;
    // NOP
    ctx->pc = 0x2919c0u;
}
