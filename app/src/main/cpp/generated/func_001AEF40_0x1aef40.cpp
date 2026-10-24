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

// Function: func_001AEF40
// Address: 0x1aef40 - 0x1af098
void func_001AEF40_0x1aef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AEF40_0x1aef40");
#endif

    switch (ctx->pc) {
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef44u: goto label_1aef44;
        case 0x1aef48u: goto label_1aef48;
        case 0x1aef4cu: goto label_1aef4c;
        case 0x1aef50u: goto label_1aef50;
        case 0x1aef54u: goto label_1aef54;
        case 0x1aef58u: goto label_1aef58;
        case 0x1aef5cu: goto label_1aef5c;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef64u: goto label_1aef64;
        case 0x1aef68u: goto label_1aef68;
        case 0x1aef6cu: goto label_1aef6c;
        case 0x1aef70u: goto label_1aef70;
        case 0x1aef74u: goto label_1aef74;
        case 0x1aef78u: goto label_1aef78;
        case 0x1aef7cu: goto label_1aef7c;
        case 0x1aef80u: goto label_1aef80;
        case 0x1aef84u: goto label_1aef84;
        case 0x1aef88u: goto label_1aef88;
        case 0x1aef8cu: goto label_1aef8c;
        case 0x1aef90u: goto label_1aef90;
        case 0x1aef94u: goto label_1aef94;
        case 0x1aef98u: goto label_1aef98;
        case 0x1aef9cu: goto label_1aef9c;
        case 0x1aefa0u: goto label_1aefa0;
        case 0x1aefa4u: goto label_1aefa4;
        case 0x1aefa8u: goto label_1aefa8;
        case 0x1aefacu: goto label_1aefac;
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1aefb4u: goto label_1aefb4;
        case 0x1aefb8u: goto label_1aefb8;
        case 0x1aefbcu: goto label_1aefbc;
        case 0x1aefc0u: goto label_1aefc0;
        case 0x1aefc4u: goto label_1aefc4;
        case 0x1aefc8u: goto label_1aefc8;
        case 0x1aefccu: goto label_1aefcc;
        case 0x1aefd0u: goto label_1aefd0;
        case 0x1aefd4u: goto label_1aefd4;
        case 0x1aefd8u: goto label_1aefd8;
        case 0x1aefdcu: goto label_1aefdc;
        case 0x1aefe0u: goto label_1aefe0;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aefe8u: goto label_1aefe8;
        case 0x1aefecu: goto label_1aefec;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af000u: goto label_1af000;
        case 0x1af004u: goto label_1af004;
        case 0x1af008u: goto label_1af008;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        case 0x1af078u: goto label_1af078;
        case 0x1af07cu: goto label_1af07c;
        case 0x1af080u: goto label_1af080;
        case 0x1af084u: goto label_1af084;
        case 0x1af088u: goto label_1af088;
        case 0x1af08cu: goto label_1af08c;
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        default: break;
    }

    ctx->pc = 0x1aef40u;

label_1aef40:
    // 0x1aef40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1aef44:
    // 0x1aef44: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1aef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1aef48:
    // 0x1aef48: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1aef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1aef4c:
    // 0x1aef4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aef4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aef50:
    // 0x1aef50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1aef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1aef54:
    // 0x1aef54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1aef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1aef58:
    // 0x1aef58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aef5c:
    // 0x1aef5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1aef60:
    // 0x1aef60: 0x86820986  lh          $v0, 0x986($s4)
    ctx->pc = 0x1aef60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2438)));
label_1aef64:
    // 0x1aef64: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
label_1aef68:
    if (ctx->pc == 0x1AEF68u) {
        ctx->pc = 0x1AEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF64u;
        // 0x1aef68: 0x96830986  lhu         $v1, 0x986($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2438)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF6Cu;
        goto label_1aef6c;
    }
    ctx->pc = 0x1AEF64u;
    {
        const bool branch_taken_0x1aef64 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF64u;
        // 0x1aef68: 0x96830986  lhu         $v1, 0x986($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2438)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef64) {
            ctx->pc = 0x1AF078u;
            goto label_1af078;
        }
    }
    ctx->pc = 0x1AEF6Cu;
label_1aef6c:
    // 0x1aef6c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1aef70:
    // 0x1aef70: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aef74:
    // 0x1aef74: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1aef78:
    if (ctx->pc == 0x1AEF78u) {
        ctx->pc = 0x1AEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF74u;
        // 0x1aef78: 0xa6820986  sh          $v0, 0x986($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2438), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF7Cu;
        goto label_1aef7c;
    }
    ctx->pc = 0x1AEF74u;
    {
        const bool branch_taken_0x1aef74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF74u;
        // 0x1aef78: 0xa6820986  sh          $v0, 0x986($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2438), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef74) {
            ctx->pc = 0x1AF00Cu;
            goto label_1af00c;
        }
    }
    ctx->pc = 0x1AEF7Cu;
label_1aef7c:
    // 0x1aef7c: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x1aef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_1aef80:
    // 0x1aef80: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1aef84:
    // 0x1aef84: 0x24730078  addiu       $s3, $v1, 0x78
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1aef88:
    // 0x1aef88: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1aef8c:
    // 0x1aef8c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1aef90:
    // 0x1aef90: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1aef94:
    // 0x1aef94: 0x40f809  jalr        $v0
label_1aef98:
    if (ctx->pc == 0x1AEF98u) {
        ctx->pc = 0x1AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF94u;
        // 0x1aef98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF9Cu;
        goto label_1aef9c;
    }
    ctx->pc = 0x1AEF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEF9Cu);
        ctx->pc = 0x1AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF94u;
        // 0x1aef98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF94u, 0x1AEF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEF9Cu;
label_1aef9c:
    // 0x1aef9c: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x1aef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_1aefa0:
    // 0x1aefa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aefa4:
    // 0x1aefa4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1aefa8:
    // 0x1aefa8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1aefac:
    // 0x1aefac: 0x40f809  jalr        $v0
label_1aefb0:
    if (ctx->pc == 0x1AEFB0u) {
        ctx->pc = 0x1AEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFACu;
        // 0x1aefb0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEFB4u;
        goto label_1aefb4;
    }
    ctx->pc = 0x1AEFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEFB4u);
        ctx->pc = 0x1AEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFACu;
        // 0x1aefb0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEFACu, 0x1AEFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEFB4u;
label_1aefb4:
    // 0x1aefb4: 0xc0c7408  jal         func_31D020
label_1aefb8:
    if (ctx->pc == 0x1AEFB8u) {
        ctx->pc = 0x1AEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFB4u;
        // 0x1aefb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEFBCu;
        goto label_1aefbc;
    }
    ctx->pc = 0x1AEFB4u;
    SET_GPR_U32(ctx, 31, 0x1AEFBCu);
    ctx->pc = 0x1AEFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFB4u;
    // 0x1aefb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AEFB4u, 0x1AEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFBCu;
label_1aefbc:
    // 0x1aefbc: 0x3c013d0e  lui         $at, 0x3D0E
    ctx->pc = 0x1aefbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15630 << 16));
label_1aefc0:
    // 0x1aefc0: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1aefc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_1aefc4:
    // 0x1aefc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aefc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aefc8:
    // 0x1aefc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aefc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aefcc:
    // 0x1aefcc: 0xc6810988  lwc1        $f1, 0x988($s4)
    ctx->pc = 0x1aefccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aefd0:
    // 0x1aefd0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aefd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1aefd4:
    // 0x1aefd4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1aefd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1aefd8:
    // 0x1aefd8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1aefd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aefdc:
    // 0x1aefdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aefdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1aefe0:
    // 0x1aefe0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1aefe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1aefe4:
    // 0x1aefe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aefe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aefe8:
    // 0x1aefe8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1aefe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1aefec:
    // 0x1aefec: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1aefecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1aeff0:
    // 0x1aeff0: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1aeff0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1aeff4:
    // 0x1aeff4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1aeff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aeff8:
    // 0x1aeff8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1aeffc:
    // 0x1aeffc: 0x40f809  jalr        $v0
label_1af000:
    if (ctx->pc == 0x1AF000u) {
        ctx->pc = 0x1AF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFFCu;
        // 0x1af000: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF004u;
        goto label_1af004;
    }
    ctx->pc = 0x1AEFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF004u);
        ctx->pc = 0x1AF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFFCu;
        // 0x1af000: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEFFCu, 0x1AF004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF004u;
label_1af004:
    // 0x1af004: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1af008:
    if (ctx->pc == 0x1AF008u) {
        ctx->pc = 0x1AF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF004u;
        // 0x1af008: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF00Cu;
        goto label_1af00c;
    }
    ctx->pc = 0x1AF004u;
    {
        const bool branch_taken_0x1af004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF004u;
        // 0x1af008: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af004) {
            ctx->pc = 0x1AF07Cu;
            goto label_1af07c;
        }
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x1af00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_1af010:
    // 0x1af010: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1af014:
    // 0x1af014: 0x24720078  addiu       $s2, $v1, 0x78
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1af018:
    // 0x1af018: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1af018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1af01c:
    // 0x1af01c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1af020:
    // 0x1af020: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1af024:
    // 0x1af024: 0x40f809  jalr        $v0
label_1af028:
    if (ctx->pc == 0x1AF028u) {
        ctx->pc = 0x1AF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF024u;
        // 0x1af028: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF02Cu;
        goto label_1af02c;
    }
    ctx->pc = 0x1AF024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF02Cu);
        ctx->pc = 0x1AF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF024u;
        // 0x1af028: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF024u, 0x1AF02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF02Cu;
label_1af02c:
    // 0x1af02c: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_1af030:
    // 0x1af030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af034:
    // 0x1af034: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1af034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1af038:
    // 0x1af038: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1af03c:
    // 0x1af03c: 0x40f809  jalr        $v0
label_1af040:
    if (ctx->pc == 0x1AF040u) {
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF044u;
        goto label_1af044;
    }
    ctx->pc = 0x1AF03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF044u);
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF03Cu, 0x1AF044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF044u;
label_1af044:
    // 0x1af044: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1af044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af048:
    // 0x1af048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af04c:
    // 0x1af04c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1af04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af050:
    // 0x1af050: 0xc6800988  lwc1        $f0, 0x988($s4)
    ctx->pc = 0x1af050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af054:
    // 0x1af054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af058:
    // 0x1af058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af05c:
    // 0x1af05c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1af05cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1af060:
    // 0x1af060: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1af060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1af064:
    // 0x1af064: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1af064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1af068:
    // 0x1af068: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1af068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1af06c:
    // 0x1af06c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1af06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1af070:
    // 0x1af070: 0x40f809  jalr        $v0
label_1af074:
    if (ctx->pc == 0x1AF074u) {
        ctx->pc = 0x1AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF070u;
        // 0x1af074: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF078u;
        goto label_1af078;
    }
    ctx->pc = 0x1AF070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF078u);
        ctx->pc = 0x1AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF070u;
        // 0x1af074: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF070u, 0x1AF078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF078u;
label_1af078:
    // 0x1af078: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1af078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1af07c:
    // 0x1af07c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1af07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1af080:
    // 0x1af080: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1af080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1af084:
    // 0x1af084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af088:
    // 0x1af088: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1af088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af08c:
    // 0x1af08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af090:
    // 0x1af090: 0x3e00008  jr          $ra
label_1af094:
    if (ctx->pc == 0x1AF094u) {
        ctx->pc = 0x1AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF090u;
        // 0x1af094: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF098u;
        goto label_fallthrough_0x1af090;
    }
    ctx->pc = 0x1AF090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF090u;
        // 0x1af094: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af090:
    ctx->pc = 0x1AF098u;
}
