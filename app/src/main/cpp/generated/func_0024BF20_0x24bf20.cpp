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

// Function: func_0024BF20
// Address: 0x24bf20 - 0x24c0f0
void func_0024BF20_0x24bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024BF20_0x24bf20");
#endif

    switch (ctx->pc) {
        case 0x24bfc4u: goto label_24bfc4;
        case 0x24bfd4u: goto label_24bfd4;
        case 0x24c010u: goto label_24c010;
        case 0x24c040u: goto label_24c040;
        case 0x24c068u: goto label_24c068;
        case 0x24c078u: goto label_24c078;
        default: break;
    }

    ctx->pc = 0x24bf20u;

    // 0x24bf20: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x24bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x24bf24: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x24bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x24bf28: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x24bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x24bf2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24bf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf30: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x24bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x24bf34: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x24bf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x24bf38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x24bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x24bf3c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x24bf3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x24bf40: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x24bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24bf44: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x24bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x24bf48: 0x2c830077  sltiu       $v1, $a0, 0x77
    ctx->pc = 0x24bf48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x24bf4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BF4Cu;
    {
        const bool branch_taken_0x24bf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF4Cu;
        // 0x24bf50: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf4c) {
            ctx->pc = 0x24BF6Cu;
            goto label_24bf6c;
        }
    }
    ctx->pc = 0x24BF54u;
    // 0x24bf54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24bf58: 0x2442d870  addiu       $v0, $v0, -0x2790
    ctx->pc = 0x24bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x24bf5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24bf60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bf64: 0x800008  jr          $a0
    ctx->pc = 0x24BF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24BF6Cu: goto label_24bf6c;
            case 0x24C028u: goto label_24c028;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24BF6Cu;
label_24bf6c:
    // 0x24bf6c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x24bf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24bf70: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x24bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bf74: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x24bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bf78: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x24bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bf7c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x24bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24bf80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24bf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24bf84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bf88: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x24bf88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x24bf8c: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x24bf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x24bf90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24bf90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24bf94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bf94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bf98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bf9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x24bf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24bfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfa4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24bfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24bfa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24bfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24bfb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24bfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bfb4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24bfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24bfb8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x24bfbc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24BFBCu;
    SET_GPR_U32(ctx, 31, 0x24BFC4u);
    ctx->pc = 0x24BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BFBCu;
    // 0x24bfc0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24BFBCu, 0x24BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFC4u;
label_24bfc4:
    // 0x24bfc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bfc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfcc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24BFCCu;
    SET_GPR_U32(ctx, 31, 0x24BFD4u);
    ctx->pc = 0x24BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BFCCu;
    // 0x24bfd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24BFCCu, 0x24BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFD4u;
label_24bfd4:
    // 0x24bfd4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24bfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfdc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24bfe0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bfe4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x24bfe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24bfe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bfec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24bff0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x24bff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24bff4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24bff8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24bff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bffc: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x24bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x24c000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24c000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c004: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x24c004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24c008: 0xc04c784  jal         func_131E10
    ctx->pc = 0x24C008u;
    SET_GPR_U32(ctx, 31, 0x24C010u);
    ctx->pc = 0x24C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C008u;
    // 0x24c00c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x24C008u, 0x24C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C010u;
label_24c010:
    // 0x24c010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C010u;
    {
        const bool branch_taken_0x24c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C010u;
        // 0x24c014: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c010) {
            ctx->pc = 0x24C028u;
            goto label_24c028;
        }
    }
    ctx->pc = 0x24C018u;
    // 0x24c018: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24c01c: 0x30420120  andi        $v0, $v0, 0x120
    ctx->pc = 0x24c01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)288);
    // 0x24c020: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C020u;
    {
        const bool branch_taken_0x24c020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c020) {
            ctx->pc = 0x24C030u;
            goto label_24c030;
        }
    }
    ctx->pc = 0x24C028u;
label_24c028:
    // 0x24c028: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24C028u;
    {
        const bool branch_taken_0x24c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C028u;
        // 0x24c02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c028) {
            ctx->pc = 0x24C0D0u;
            goto label_24c0d0;
        }
    }
    ctx->pc = 0x24C030u;
label_24c030:
    // 0x24c030: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x24c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24c034: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x24c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24c038: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24C038u;
    SET_GPR_U32(ctx, 31, 0x24C040u);
    ctx->pc = 0x24C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C038u;
    // 0x24c03c: 0xc7ad0068  lwc1        $f13, 0x68($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24C038u, 0x24C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C040u;
label_24c040:
    // 0x24c040: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x24c040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24c044: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x24c044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24c048: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x24c048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x24c04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c054: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x24c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x24c058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24c058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24c05c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x24c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x24c060: 0xc051e62  jal         func_147988
    ctx->pc = 0x24C060u;
    SET_GPR_U32(ctx, 31, 0x24C068u);
    ctx->pc = 0x24C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C060u;
    // 0x24c064: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x24C060u, 0x24C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C068u;
label_24c068:
    // 0x24c068: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x24c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24c06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c070: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24C070u;
    SET_GPR_U32(ctx, 31, 0x24C078u);
    ctx->pc = 0x24C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C070u;
    // 0x24c074: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24C070u, 0x24C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C078u;
label_24c078:
    // 0x24c078: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x24c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24c07c: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x24c07cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24c080: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x24c080u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24c084: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24c084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24c088: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x24c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24c08c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x24c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24c090: 0x264406d0  addiu       $a0, $s2, 0x6D0
    ctx->pc = 0x24c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x24c094: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c098: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C098u;
    {
        const bool branch_taken_0x24c098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C098u;
        // 0x24c09c: 0xe7a100b4  swc1        $f1, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c098) {
            ctx->pc = 0x24C0B4u;
            goto label_24c0b4;
        }
    }
    ctx->pc = 0x24C0A0u;
    // 0x24c0a0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24c0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c0a4: 0xe64006d0  swc1        $f0, 0x6D0($s2)
    ctx->pc = 0x24c0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1744), bits); }
    // 0x24c0a8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x24c0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24c0ac: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x24c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c0b0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_24c0b4:
    // 0x24c0b4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x24c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x24c0b8: 0xe65406e0  swc1        $f20, 0x6E0($s2)
    ctx->pc = 0x24c0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1760), bits); }
    // 0x24c0bc: 0xa25302f4  sb          $s3, 0x2F4($s2)
    ctx->pc = 0x24c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 19));
    // 0x24c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c0c4: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x24c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x24c0c8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x24c0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c0cc: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x24c0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_24c0d0:
    // 0x24c0d0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x24c0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24c0d4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x24c0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24c0d8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x24c0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24c0dc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x24c0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24c0e0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x24c0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c0e4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x24c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24c0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24C0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0E8u;
        // 0x24c0ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C0F0u;
}
