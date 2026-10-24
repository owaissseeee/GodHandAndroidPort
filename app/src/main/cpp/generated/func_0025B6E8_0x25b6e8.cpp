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

// Function: func_0025B6E8
// Address: 0x25b6e8 - 0x25b9f0
void func_0025B6E8_0x25b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025B6E8_0x25b6e8");
#endif

    switch (ctx->pc) {
        case 0x25b734u: goto label_25b734;
        case 0x25b768u: goto label_25b768;
        case 0x25b778u: goto label_25b778;
        case 0x25b908u: goto label_25b908;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b930u: goto label_25b930;
        case 0x25b944u: goto label_25b944;
        case 0x25b958u: goto label_25b958;
        case 0x25b978u: goto label_25b978;
        case 0x25b980u: goto label_25b980;
        case 0x25b990u: goto label_25b990;
        case 0x25b9a0u: goto label_25b9a0;
        default: break;
    }

    ctx->pc = 0x25b6e8u;

    // 0x25b6e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25b6ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25b6f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25b6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b6fc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x25b6fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25b700: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x25b700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25b704: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25b704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b708: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B708u;
    {
        const bool branch_taken_0x25b708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B708u;
        // 0x25b70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b708) {
            ctx->pc = 0x25B720u;
            goto label_25b720;
        }
    }
    ctx->pc = 0x25B710u;
    // 0x25b710: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x25B710u;
    {
        const bool branch_taken_0x25b710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b710) {
            ctx->pc = 0x25B950u;
            goto label_25b950;
        }
    }
    ctx->pc = 0x25B718u;
    // 0x25b718: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x25B718u;
    {
        const bool branch_taken_0x25b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B718u;
        // 0x25b71c: 0xc601176c  lwc1        $f1, 0x176C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b718) {
            ctx->pc = 0x25B9A4u;
            goto label_25b9a4;
        }
    }
    ctx->pc = 0x25B720u;
label_25b720:
    // 0x25b720: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25b720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x25b724: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25b724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25b728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b72c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25B72Cu;
    SET_GPR_U32(ctx, 31, 0x25B734u);
    ctx->pc = 0x25B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B72Cu;
    // 0x25b730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25B72Cu, 0x25B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B734u;
label_25b734:
    // 0x25b734: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25b734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b738: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x25b738u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25b73c: 0x8e030698  lw          $v1, 0x698($s0)
    ctx->pc = 0x25b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x25b740: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25B740u;
    {
        const bool branch_taken_0x25b740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B740u;
        // 0x25b744: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b740) {
            ctx->pc = 0x25B794u;
            goto label_25b794;
        }
    }
    ctx->pc = 0x25B748u;
    // 0x25b748: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x25b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x25b74c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25B74Cu;
    {
        const bool branch_taken_0x25b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B74Cu;
        // 0x25b750: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b74c) {
            ctx->pc = 0x25B794u;
            goto label_25b794;
        }
    }
    ctx->pc = 0x25B754u;
    // 0x25b754: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b754u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b758: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x25b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b75c: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x25b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b760: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x25B760u;
    SET_GPR_U32(ctx, 31, 0x25B768u);
    ctx->pc = 0x25B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B760u;
    // 0x25b764: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x25B760u, 0x25B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B768u;
label_25b768:
    // 0x25b768: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b76c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x25b76cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x25b770: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x25B770u;
    SET_GPR_U32(ctx, 31, 0x25B778u);
    ctx->pc = 0x25B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B770u;
    // 0x25b774: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x25B770u, 0x25B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B778u;
label_25b778:
    // 0x25b778: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25b778u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25b77c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x25b77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b780: 0x0  nop
    ctx->pc = 0x25b780u;
    // NOP
    // 0x25b784: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B784u;
    {
        const bool branch_taken_0x25b784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B784u;
        // 0x25b788: 0x46000b86  mov.s       $f14, $f1 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b784) {
            ctx->pc = 0x25B790u;
            goto label_25b790;
        }
    }
    ctx->pc = 0x25B78Cu;
    // 0x25b78c: 0x46000b87  neg.s       $f14, $f1
    ctx->pc = 0x25b78cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[1]);
label_25b790:
    // 0x25b790: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x25b790u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_25b794:
    // 0x25b794: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x25b794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x25b798: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b79c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25B79Cu;
    {
        const bool branch_taken_0x25b79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b79c) {
            ctx->pc = 0x25B7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B79Cu;
            // 0x25b7a0: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B818u;
            goto label_25b818;
        }
    }
    ctx->pc = 0x25B7A4u;
    // 0x25b7a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7a8: 0x0  nop
    ctx->pc = 0x25b7a8u;
    // NOP
    // 0x25b7ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b7b0: 0x0  nop
    ctx->pc = 0x25b7b0u;
    // NOP
    // 0x25b7b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25B7B4u;
    {
        const bool branch_taken_0x25b7b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7B4u;
        // 0x25b7b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7b4) {
            ctx->pc = 0x25B7C4u;
            goto label_25b7c4;
        }
    }
    ctx->pc = 0x25B7BCu;
    // 0x25b7bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B7BCu;
    {
        const bool branch_taken_0x25b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7BCu;
        // 0x25b7c0: 0xa20302f7  sb          $v1, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7bc) {
            ctx->pc = 0x25B7C8u;
            goto label_25b7c8;
        }
    }
    ctx->pc = 0x25B7C4u;
label_25b7c4:
    // 0x25b7c4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x25b7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_25b7c8:
    // 0x25b7c8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x25b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x25b7cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25b7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25b7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7d4: 0x0  nop
    ctx->pc = 0x25b7d4u;
    // NOP
    // 0x25b7d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b7dc: 0x0  nop
    ctx->pc = 0x25b7dcu;
    // NOP
    // 0x25b7e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B7E0u;
    {
        const bool branch_taken_0x25b7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7E0u;
        // 0x25b7e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7e0) {
            ctx->pc = 0x25B7ECu;
            goto label_25b7ec;
        }
    }
    ctx->pc = 0x25B7E8u;
    // 0x25b7e8: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x25b7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_25b7ec:
    // 0x25b7ec: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x25b7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x25b7f0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x25b7f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7f8: 0x0  nop
    ctx->pc = 0x25b7f8u;
    // NOP
    // 0x25b7fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25b7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b800: 0x0  nop
    ctx->pc = 0x25b800u;
    // NOP
    // 0x25b804: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B804u;
    {
        const bool branch_taken_0x25b804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B804u;
        // 0x25b808: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b804) {
            ctx->pc = 0x25B810u;
            goto label_25b810;
        }
    }
    ctx->pc = 0x25B80Cu;
    // 0x25b80c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x25b80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_25b810:
    // 0x25b810: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x25b810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x25b814: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25b814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_25b818:
    // 0x25b818: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B818u;
    {
        const bool branch_taken_0x25b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B818u;
        // 0x25b81c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b818) {
            ctx->pc = 0x25B838u;
            goto label_25b838;
        }
    }
    ctx->pc = 0x25B820u;
    // 0x25b820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25b820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b824: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x25b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x25b828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25b828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b82c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b830: 0x800008  jr          $a0
    ctx->pc = 0x25B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B838u: goto label_25b838;
            case 0x25B848u: goto label_25b848;
            case 0x25B860u: goto label_25b860;
            case 0x25B87Cu: goto label_25b87c;
            case 0x25B898u: goto label_25b898;
            case 0x25B8C4u: goto label_25b8c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B838u;
label_25b838:
    // 0x25b838: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b83c: 0x8c433dc4  lw          $v1, 0x3DC4($v0)
    ctx->pc = 0x25b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15812)));
    // 0x25b840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B840u;
    {
        const bool branch_taken_0x25b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B840u;
        // 0x25b844: 0x8c443dc8  lw          $a0, 0x3DC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b840) {
            ctx->pc = 0x25B854u;
            goto label_25b854;
        }
    }
    ctx->pc = 0x25B848u;
label_25b848:
    // 0x25b848: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b84c: 0x8c433dbc  lw          $v1, 0x3DBC($v0)
    ctx->pc = 0x25b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15804)));
    // 0x25b850: 0x8c443dc0  lw          $a0, 0x3DC0($v0)
    ctx->pc = 0x25b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15808)));
label_25b854:
    // 0x25b854: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x25b854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b858: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25B858u;
    {
        const bool branch_taken_0x25b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B858u;
        // 0x25b85c: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b858) {
            ctx->pc = 0x25B8ECu;
            goto label_25b8ec;
        }
    }
    ctx->pc = 0x25B860u;
label_25b860:
    // 0x25b860: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x25b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b864: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x25b868: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x25b86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25b870: 0x8c853dcc  lw          $a1, 0x3DCC($a0)
    ctx->pc = 0x25b870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15820)));
    // 0x25b874: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B874u;
    {
        const bool branch_taken_0x25b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B874u;
        // 0x25b878: 0x8c863dd0  lw          $a2, 0x3DD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b874) {
            ctx->pc = 0x25B8B0u;
            goto label_25b8b0;
        }
    }
    ctx->pc = 0x25B87Cu;
label_25b87c:
    // 0x25b87c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x25b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b880: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x25b884: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x25b888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25b88c: 0x8c853dd4  lw          $a1, 0x3DD4($a0)
    ctx->pc = 0x25b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15828)));
    // 0x25b890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B890u;
    {
        const bool branch_taken_0x25b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B890u;
        // 0x25b894: 0x8c863dd8  lw          $a2, 0x3DD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b890) {
            ctx->pc = 0x25B8B0u;
            goto label_25b8b0;
        }
    }
    ctx->pc = 0x25B898u;
label_25b898:
    // 0x25b898: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x25b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b89c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x25b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x25b8a0: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x25b8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25b8a8: 0x8c853ddc  lw          $a1, 0x3DDC($a0)
    ctx->pc = 0x25b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
    // 0x25b8ac: 0x8c863de0  lw          $a2, 0x3DE0($a0)
    ctx->pc = 0x25b8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15840)));
label_25b8b0:
    // 0x25b8b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25b8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25b8b4: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25b8b8: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x25b8bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25B8BCu;
    {
        const bool branch_taken_0x25b8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8BCu;
        // 0x25b8c0: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8bc) {
            ctx->pc = 0x25B8ECu;
            goto label_25b8ec;
        }
    }
    ctx->pc = 0x25B8C4u;
label_25b8c4:
    // 0x25b8c4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x25b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b8c8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x25b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x25b8cc: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x25b8d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25b8d4: 0x8c863de4  lw          $a2, 0x3DE4($a0)
    ctx->pc = 0x25b8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15844)));
    // 0x25b8d8: 0x8c853de8  lw          $a1, 0x3DE8($a0)
    ctx->pc = 0x25b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15848)));
    // 0x25b8dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25b8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25b8e0: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x25b8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x25b8e4: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x25b8e8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x25b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25b8ec:
    // 0x25b8ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x25b8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25b8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x25b8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25b8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b900: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25B900u;
    SET_GPR_U32(ctx, 31, 0x25B908u);
    ctx->pc = 0x25B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B900u;
    // 0x25b904: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25B900u, 0x25B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B908u;
label_25b908:
    // 0x25b908: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25b908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x25b90c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B90Cu;
    {
        const bool branch_taken_0x25b90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b90c) {
            ctx->pc = 0x25B910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B90Cu;
            // 0x25b910: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B920u;
            goto label_25b920;
        }
    }
    ctx->pc = 0x25B914u;
    // 0x25b914: 0xc0a0516  jal         func_281458
    ctx->pc = 0x25B914u;
    SET_GPR_U32(ctx, 31, 0x25B91Cu);
    ctx->pc = 0x25B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B914u;
    // 0x25b918: 0x920502f7  lbu         $a1, 0x2F7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281458u, 0x25B914u, 0x25B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B91Cu;
label_25b91c:
    // 0x25b91c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25b920:
    // 0x25b920: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B920u;
    {
        const bool branch_taken_0x25b920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b920) {
            ctx->pc = 0x25B924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B920u;
            // 0x25b924: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B934u;
            goto label_25b934;
        }
    }
    ctx->pc = 0x25B928u;
    // 0x25b928: 0xc0a0cd8  jal         func_283360
    ctx->pc = 0x25B928u;
    SET_GPR_U32(ctx, 31, 0x25B930u);
    ctx->pc = 0x25B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B928u;
    // 0x25b92c: 0x920502f7  lbu         $a1, 0x2F7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283360u, 0x25B928u, 0x25B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B930u;
label_25b930:
    // 0x25b930: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25b930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25b934:
    // 0x25b934: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B934u;
    {
        const bool branch_taken_0x25b934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b934) {
            ctx->pc = 0x25B938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B934u;
            // 0x25b938: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B948u;
            goto label_25b948;
        }
    }
    ctx->pc = 0x25B93Cu;
    // 0x25b93c: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x25B93Cu;
    SET_GPR_U32(ctx, 31, 0x25B944u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x25B93Cu, 0x25B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B944u;
label_25b944:
    // 0x25b944: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25b948:
    // 0x25b948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b94c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b950:
    // 0x25b950: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25B950u;
    SET_GPR_U32(ctx, 31, 0x25B958u);
    ctx->pc = 0x25B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B950u;
    // 0x25b954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25B950u, 0x25B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B958u;
label_25b958:
    // 0x25b958: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x25B958u;
    {
        const bool branch_taken_0x25b958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b958) {
            ctx->pc = 0x25B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B958u;
            // 0x25b95c: 0xc601176c  lwc1        $f1, 0x176C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B9A4u;
            goto label_25b9a4;
        }
    }
    ctx->pc = 0x25B960u;
    // 0x25b960: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x25b960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x25b964: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25b964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25b968: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25B968u;
    {
        const bool branch_taken_0x25b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b968) {
            ctx->pc = 0x25B998u;
            goto label_25b998;
        }
    }
    ctx->pc = 0x25B970u;
    // 0x25b970: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x25B970u;
    SET_GPR_U32(ctx, 31, 0x25B978u);
    ctx->pc = 0x25B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B970u;
    // 0x25b974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x25B970u, 0x25B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B978u;
label_25b978:
    // 0x25b978: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x25B978u;
    SET_GPR_U32(ctx, 31, 0x25B980u);
    ctx->pc = 0x25B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B978u;
    // 0x25b97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x25B978u, 0x25B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B980u;
label_25b980:
    // 0x25b980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B980u;
    {
        const bool branch_taken_0x25b980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b980) {
            ctx->pc = 0x25B998u;
            goto label_25b998;
        }
    }
    ctx->pc = 0x25B988u;
    // 0x25b988: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x25B988u;
    SET_GPR_U32(ctx, 31, 0x25B990u);
    ctx->pc = 0x25B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B988u;
    // 0x25b98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x25B988u, 0x25B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B990u;
label_25b990:
    // 0x25b990: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25B990u;
    {
        const bool branch_taken_0x25b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B990u;
        // 0x25b994: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b990) {
            ctx->pc = 0x25B9D4u;
            goto label_25b9d4;
        }
    }
    ctx->pc = 0x25B998u;
label_25b998:
    // 0x25b998: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25B998u;
    SET_GPR_U32(ctx, 31, 0x25B9A0u);
    ctx->pc = 0x25B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B998u;
    // 0x25b99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25B998u, 0x25B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9A0u;
label_25b9a0:
    // 0x25b9a0: 0xc601176c  lwc1        $f1, 0x176C($s0)
    ctx->pc = 0x25b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b9a4:
    // 0x25b9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b9a8: 0x0  nop
    ctx->pc = 0x25b9a8u;
    // NOP
    // 0x25b9ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b9b0: 0x0  nop
    ctx->pc = 0x25b9b0u;
    // NOP
    // 0x25b9b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25B9B4u;
    {
        const bool branch_taken_0x25b9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9B4u;
        // 0x25b9b8: 0x240200a5  addiu       $v0, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9b4) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B9BCu;
    // 0x25b9bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b9c0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x25b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b9c4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x25b9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b9c8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25b9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b9cc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x25b9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_25b9d0:
    // 0x25b9d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25b9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b9d4:
    // 0x25b9d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25b9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b9d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b9dc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x25b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b9e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9E4u;
        // 0x25b9e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B9ECu;
    // 0x25b9ec: 0x0  nop
    ctx->pc = 0x25b9ecu;
    // NOP
    ctx->pc = 0x25b9f0u;
}
