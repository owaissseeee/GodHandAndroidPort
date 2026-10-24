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

// Function: Draw_Line2
// Address: 0x15ef10 - 0x15f0b8
void Draw_Line2_0x15ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Line2_0x15ef10");
#endif

    switch (ctx->pc) {
        case 0x15ef98u: goto label_15ef98;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efd0u: goto label_15efd0;
        case 0x15f064u: goto label_15f064;
        default: break;
    }

    ctx->pc = 0x15ef10u;

    // 0x15ef10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x15ef14: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x15ef18: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x15ef1c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x15ef20: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x15ef24: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x15ef28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15ef28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef2c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x15ef30: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15ef30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef34: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x15ef38: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x15ef38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x15ef3c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x15ef40: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x15ef44: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15ef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x15ef48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15ef4c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15ef50: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x15EF50u;
    {
        const bool branch_taken_0x15ef50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF50u;
        // 0x15ef54: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef50) {
            ctx->pc = 0x15F07Cu;
            goto label_15f07c;
        }
    }
    ctx->pc = 0x15EF58u;
    // 0x15ef58: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EF58u;
    {
        const bool branch_taken_0x15ef58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF58u;
        // 0x15ef5c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef58) {
            ctx->pc = 0x15EF70u;
            goto label_15ef70;
        }
    }
    ctx->pc = 0x15EF60u;
    // 0x15ef60: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ef64: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x15ef68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15ef6c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x15ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_15ef70:
    // 0x15ef70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15ef70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef74: 0x12800041  beqz        $s4, . + 4 + (0x41 << 2)
    ctx->pc = 0x15EF74u;
    {
        const bool branch_taken_0x15ef74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF74u;
        // 0x15ef78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef74) {
            ctx->pc = 0x15F07Cu;
            goto label_15f07c;
        }
    }
    ctx->pc = 0x15EF7Cu;
    // 0x15ef7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x15ef80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15ef80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x15ef84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15ef84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15ef88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15ef88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef8c: 0x3c17005d  lui         $s7, 0x5D
    ctx->pc = 0x15ef8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
    // 0x15ef90: 0x2492fff0  addiu       $s2, $a0, -0x10
    ctx->pc = 0x15ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x15ef94: 0x0  nop
    ctx->pc = 0x15ef94u;
    // NOP
label_15ef98:
    // 0x15ef98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ef98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef9c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x15ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15efa0: 0x8ee5aff0  lw          $a1, -0x5010($s7)
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946800)));
    // 0x15efa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15efa8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15EFA8u;
    SET_GPR_U32(ctx, 31, 0x15EFB0u);
    ctx->pc = 0x15EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFA8u;
    // 0x15efac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15EFA8u, 0x15EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB0u;
label_15efb0:
    // 0x15efb0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x15efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15efb4: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x15efb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15efb8: 0x0  nop
    ctx->pc = 0x15efb8u;
    // NOP
    // 0x15efbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15EFBCu;
    {
        const bool branch_taken_0x15efbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15efbc) {
            ctx->pc = 0x15EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EFBCu;
            // 0x15efc0: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EFC4u;
            goto label_15efc4;
        }
    }
    ctx->pc = 0x15EFC4u;
label_15efc4:
    // 0x15efc4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15efc8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x15EFC8u;
    SET_GPR_U32(ctx, 31, 0x15EFD0u);
    ctx->pc = 0x15EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC8u;
    // 0x15efcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x15EFC8u, 0x15EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15efd4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15efd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15efd8: 0x0  nop
    ctx->pc = 0x15efd8u;
    // NOP
    // 0x15efdc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15efdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15efe0: 0x0  nop
    ctx->pc = 0x15efe0u;
    // NOP
    // 0x15efe4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x15EFE4u;
    {
        const bool branch_taken_0x15efe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15efe4) {
            ctx->pc = 0x15EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EFE4u;
            // 0x15efe8: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F030u;
            goto label_15f030;
        }
    }
    ctx->pc = 0x15EFECu;
    // 0x15efec: 0x3c01457f  lui         $at, 0x457F
    ctx->pc = 0x15efecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17791 << 16));
    // 0x15eff0: 0x3421fe66  ori         $at, $at, 0xFE66
    ctx->pc = 0x15eff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65126);
    // 0x15eff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15eff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eff8: 0x0  nop
    ctx->pc = 0x15eff8u;
    // NOP
    // 0x15effc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15effcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f000: 0x0  nop
    ctx->pc = 0x15f000u;
    // NOP
    // 0x15f004: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x15F004u;
    {
        const bool branch_taken_0x15f004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f004) {
            ctx->pc = 0x15F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F004u;
            // 0x15f008: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F030u;
            goto label_15f030;
        }
    }
    ctx->pc = 0x15F00Cu;
    // 0x15f00c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15f00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f010: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15f010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f014: 0x0  nop
    ctx->pc = 0x15f014u;
    // NOP
    // 0x15f018: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15F018u;
    {
        const bool branch_taken_0x15f018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f018) {
            ctx->pc = 0x15F01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F018u;
            // 0x15f01c: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F030u;
            goto label_15f030;
        }
    }
    ctx->pc = 0x15F020u;
    // 0x15f020: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f024: 0x0  nop
    ctx->pc = 0x15f024u;
    // NOP
    // 0x15f028: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15F028u;
    {
        const bool branch_taken_0x15f028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f028) {
            ctx->pc = 0x15F02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F028u;
            // 0x15f02c: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F030u;
            goto label_15f030;
        }
    }
    ctx->pc = 0x15F030u;
label_15f030:
    // 0x15f030: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15F030u;
    {
        const bool branch_taken_0x15f030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f030) {
            ctx->pc = 0x15F034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F030u;
            // 0x15f034: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F068u;
            goto label_15f068;
        }
    }
    ctx->pc = 0x15F038u;
    // 0x15f038: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15F038u;
    {
        const bool branch_taken_0x15f038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f038) {
            ctx->pc = 0x15F03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F038u;
            // 0x15f03c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F068u;
            goto label_15f068;
        }
    }
    ctx->pc = 0x15F040u;
    // 0x15f040: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F040u;
    {
        const bool branch_taken_0x15f040 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f040) {
            ctx->pc = 0x15F044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F040u;
            // 0x15f044: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F068u;
            goto label_15f068;
        }
    }
    ctx->pc = 0x15F048u;
    // 0x15f048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f04c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f054: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x15f054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15f058: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15f058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f05c: 0xc056c4e  jal         func_15B138
    ctx->pc = 0x15F05Cu;
    SET_GPR_U32(ctx, 31, 0x15F064u);
    ctx->pc = 0x15F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F05Cu;
    // 0x15f060: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B138u, 0x15F05Cu, 0x15F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F064u;
label_15f064:
    // 0x15f064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f068:
    // 0x15f068: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x15f068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f06c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15f06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15f070: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x15f070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x15f074: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x15F074u;
    {
        const bool branch_taken_0x15f074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F074u;
        // 0x15f078: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f074) {
            ctx->pc = 0x15EF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ef98;
        }
    }
    ctx->pc = 0x15F07Cu;
label_15f07c:
    // 0x15f07c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15f07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15f080: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15f080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f084: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15f084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15f088: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15f088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f08c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15f08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15f090: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15f090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15f094: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15f094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f098: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15f098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f09c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15f09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f0a0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15F0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0A4u;
        // 0x15f0a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F0ACu;
    // 0x15f0ac: 0x0  nop
    ctx->pc = 0x15f0acu;
    // NOP
    // 0x15f0b0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15f0b4: 0x0  nop
    ctx->pc = 0x15f0b4u;
    // NOP
    ctx->pc = 0x15f0b8u;
}
