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

// Function: func_0024BB68
// Address: 0x24bb68 - 0x24bda0
void func_0024BB68_0x24bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024BB68_0x24bb68");
#endif

    switch (ctx->pc) {
        case 0x24bbdcu: goto label_24bbdc;
        case 0x24bc64u: goto label_24bc64;
        case 0x24bc74u: goto label_24bc74;
        case 0x24bcb4u: goto label_24bcb4;
        case 0x24bcecu: goto label_24bcec;
        case 0x24bd14u: goto label_24bd14;
        case 0x24bd24u: goto label_24bd24;
        default: break;
    }

    ctx->pc = 0x24bb68u;

    // 0x24bb68: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x24bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x24bb6c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x24bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x24bb70: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x24bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x24bb74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24bb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb78: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x24bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x24bb7c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x24bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x24bb80: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x24bb80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x24bb84: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x24bb84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x24bb88: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24bb8c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x24bb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x24bb90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BB90u;
    {
        const bool branch_taken_0x24bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB90u;
        // 0x24bb94: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb90) {
            ctx->pc = 0x24BBA0u;
            goto label_24bba0;
        }
    }
    ctx->pc = 0x24BB98u;
    // 0x24bb98: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BB98u;
    {
        const bool branch_taken_0x24bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb98) {
            ctx->pc = 0x24BB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BB98u;
            // 0x24bb9c: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BBC0u;
            goto label_24bbc0;
        }
    }
    ctx->pc = 0x24BBA0u;
label_24bba0:
    // 0x24bba0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x24bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x24bba4: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x24bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x24bba8: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x24bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x24bbac: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x24bbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x24bbb0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x24bbb4: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x24BBB4u;
    {
        const bool branch_taken_0x24bbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB4u;
        // 0x24bbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb4) {
            ctx->pc = 0x24BD7Cu;
            goto label_24bd7c;
        }
    }
    ctx->pc = 0x24BBBCu;
    // 0x24bbbc: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x24bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24bbc0:
    // 0x24bbc0: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x24bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x24bbc4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24bbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24bbc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24bbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24bbcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24bbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24bbd0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24bbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24bbd4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x24BBD4u;
    SET_GPR_U32(ctx, 31, 0x24BBDCu);
    ctx->pc = 0x24BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBD4u;
    // 0x24bbd8: 0x264516a0  addiu       $a1, $s2, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x24BBD4u, 0x24BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBDCu;
label_24bbdc:
    // 0x24bbdc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x24bbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbe0: 0x0  nop
    ctx->pc = 0x24bbe0u;
    // NOP
    // 0x24bbe4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BBE4u;
    {
        const bool branch_taken_0x24bbe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBE4u;
        // 0x24bbe8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbe4) {
            ctx->pc = 0x24BBF0u;
            goto label_24bbf0;
        }
    }
    ctx->pc = 0x24BBECu;
    // 0x24bbec: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x24bbecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_24bbf0:
    // 0x24bbf0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x24bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x24bbf4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x24bbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x24bbf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bbfc: 0x0  nop
    ctx->pc = 0x24bbfcu;
    // NOP
    // 0x24bc00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24bc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc04: 0x0  nop
    ctx->pc = 0x24bc04u;
    // NOP
    // 0x24bc08: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x24BC08u;
    {
        const bool branch_taken_0x24bc08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC08u;
        // 0x24bc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc08) {
            ctx->pc = 0x24BD7Cu;
            goto label_24bd7c;
        }
    }
    ctx->pc = 0x24BC10u;
    // 0x24bc10: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x24bc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24bc14: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x24bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bc18: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x24bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bc1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x24bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bc20: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x24bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bc24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24bc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24bc28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bc2c: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x24bc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x24bc30: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x24bc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x24bc34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24bc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24bc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc44: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x24bc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24bc48: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24bc4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24bc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc50: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x24bc50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24bc54: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24bc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24bc58: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x24bc58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24bc5c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24BC5Cu;
    SET_GPR_U32(ctx, 31, 0x24BC64u);
    ctx->pc = 0x24BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC5Cu;
    // 0x24bc60: 0xe7b50040  swc1        $f21, 0x40($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24BC5Cu, 0x24BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC64u;
label_24bc64:
    // 0x24bc64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc6c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24BC6Cu;
    SET_GPR_U32(ctx, 31, 0x24BC74u);
    ctx->pc = 0x24BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC6Cu;
    // 0x24bc70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24BC6Cu, 0x24BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC74u;
label_24bc74:
    // 0x24bc74: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x24bc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24bc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bc7c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x24bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x24bc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24bc88: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bc8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x24bc90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24bc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24bc98: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x24bc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24bc9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24bca0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24bca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bca8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x24bca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24bcac: 0xc04c784  jal         func_131E10
    ctx->pc = 0x24BCACu;
    SET_GPR_U32(ctx, 31, 0x24BCB4u);
    ctx->pc = 0x24BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCACu;
    // 0x24bcb0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x24BCACu, 0x24BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCB4u;
label_24bcb4:
    // 0x24bcb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BCB4u;
    {
        const bool branch_taken_0x24bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCB4u;
        // 0x24bcb8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcb4) {
            ctx->pc = 0x24BCCCu;
            goto label_24bccc;
        }
    }
    ctx->pc = 0x24BCBCu;
    // 0x24bcbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24bcc0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x24bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x24bcc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BCC4u;
    {
        const bool branch_taken_0x24bcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bcc4) {
            ctx->pc = 0x24BCD4u;
            goto label_24bcd4;
        }
    }
    ctx->pc = 0x24BCCCu;
label_24bccc:
    // 0x24bccc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x24BCCCu;
    {
        const bool branch_taken_0x24bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCCCu;
        // 0x24bcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bccc) {
            ctx->pc = 0x24BD7Cu;
            goto label_24bd7c;
        }
    }
    ctx->pc = 0x24BCD4u;
label_24bcd4:
    // 0x24bcd4: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x24bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bcd8: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x24bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24bcdc: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x24bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bce0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x24bce0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x24bce4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24BCE4u;
    SET_GPR_U32(ctx, 31, 0x24BCECu);
    ctx->pc = 0x24BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCE4u;
    // 0x24bce8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24BCE4u, 0x24BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCECu;
label_24bcec:
    // 0x24bcec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x24bcecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24bcf0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x24bcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24bcf4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x24bcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x24bcf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd00: 0xe7b500b4  swc1        $f21, 0xB4($sp)
    ctx->pc = 0x24bd00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x24bd04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24bd04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24bd08: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x24bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x24bd0c: 0xc051e62  jal         func_147988
    ctx->pc = 0x24BD0Cu;
    SET_GPR_U32(ctx, 31, 0x24BD14u);
    ctx->pc = 0x24BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD0Cu;
    // 0x24bd10: 0xe7b500b0  swc1        $f21, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x24BD0Cu, 0x24BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD14u;
label_24bd14:
    // 0x24bd14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x24bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24bd18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24bd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd1c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24BD1Cu;
    SET_GPR_U32(ctx, 31, 0x24BD24u);
    ctx->pc = 0x24BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD1Cu;
    // 0x24bd20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24BD1Cu, 0x24BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD24u;
label_24bd24:
    // 0x24bd24: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x24bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24bd28: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x24bd28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24bd2c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x24bd2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24bd30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24bd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24bd34: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x24bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24bd38: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x24bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24bd3c: 0x264406d0  addiu       $a0, $s2, 0x6D0
    ctx->pc = 0x24bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x24bd40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bd44: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BD44u;
    {
        const bool branch_taken_0x24bd44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD44u;
        // 0x24bd48: 0xe7a100b4  swc1        $f1, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd44) {
            ctx->pc = 0x24BD60u;
            goto label_24bd60;
        }
    }
    ctx->pc = 0x24BD4Cu;
    // 0x24bd4c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd50: 0xe64006d0  swc1        $f0, 0x6D0($s2)
    ctx->pc = 0x24bd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1744), bits); }
    // 0x24bd54: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x24bd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24bd58: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x24bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_24bd60:
    // 0x24bd60: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x24bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x24bd64: 0xe65406e0  swc1        $f20, 0x6E0($s2)
    ctx->pc = 0x24bd64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1760), bits); }
    // 0x24bd68: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x24bd68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24bd6c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x24bd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24bd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bd74: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x24bd74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24bd78: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x24bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_24bd7c:
    // 0x24bd7c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x24bd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24bd80: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x24bd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24bd84: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x24bd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24bd88: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x24bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24bd8c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x24bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24bd90: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x24bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24bd94: 0x3e00008  jr          $ra
    ctx->pc = 0x24BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD94u;
        // 0x24bd98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BD9Cu;
    // 0x24bd9c: 0x0  nop
    ctx->pc = 0x24bd9cu;
    // NOP
    ctx->pc = 0x24bda0u;
}
