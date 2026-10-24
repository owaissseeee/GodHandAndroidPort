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

// Function: func_002CABE8
// Address: 0x2cabe8 - 0x2cae10
void func_002CABE8_0x2cabe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CABE8_0x2cabe8");
#endif

    switch (ctx->pc) {
        case 0x2cac34u: goto label_2cac34;
        case 0x2cac4cu: goto label_2cac4c;
        case 0x2cac90u: goto label_2cac90;
        case 0x2cacbcu: goto label_2cacbc;
        case 0x2cacd8u: goto label_2cacd8;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cad08u: goto label_2cad08;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cadb0u: goto label_2cadb0;
        default: break;
    }

    ctx->pc = 0x2cabe8u;

    // 0x2cabe8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cabe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cabec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cabecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cabf0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cabf4: 0x24a5ccb8  addiu       $a1, $a1, -0x3348
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954168));
    // 0x2cabf8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2cabfc: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2cabfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2cac00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cac04: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2cac04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cac0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cac0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cac14: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x2cac14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x2cac18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2cac1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cac24: 0x3c13000c  lui         $s3, 0xC
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)12 << 16));
    // 0x2cac28: 0x36738000  ori         $s3, $s3, 0x8000
    ctx->pc = 0x2cac28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x2cac2c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2CAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC34u);
    ctx->pc = 0x2CAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC2Cu;
    // 0x2cac30: 0x8e0405ac  lw          $a0, 0x5AC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2CAC2Cu, 0x2CAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC34u;
label_2cac34:
    // 0x2cac34: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2cac34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2cac38: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cac38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cac3c: 0x24a5ccb0  addiu       $a1, $a1, -0x3350
    ctx->pc = 0x2cac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954160));
    // 0x2cac40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cac40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac44: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2CAC44u;
    SET_GPR_U32(ctx, 31, 0x2CAC4Cu);
    ctx->pc = 0x2CAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC44u;
    // 0x2cac48: 0x8e0405ac  lw          $a0, 0x5AC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2CAC44u, 0x2CAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC4Cu;
label_2cac4c:
    // 0x2cac4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CAC50u;
    {
        const bool branch_taken_0x2cac50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC50u;
        // 0x2cac54: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac50) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CAC58u;
    // 0x2cac58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2cac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cac5c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2cac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2cac60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cac60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cac64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cac64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac68: 0x0  nop
    ctx->pc = 0x2cac68u;
    // NOP
    // 0x2cac6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cac6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cac70: 0x0  nop
    ctx->pc = 0x2cac70u;
    // NOP
    // 0x2cac74: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAC74u;
    {
        const bool branch_taken_0x2cac74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cac74) {
            ctx->pc = 0x2CAC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC74u;
            // 0x2cac78: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CAC7Cu;
    // 0x2cac7c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cac80: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x2cac80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cac84:
    // 0x2cac84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac88: 0xc0b28e4  jal         func_2CA390
    ctx->pc = 0x2CAC88u;
    SET_GPR_U32(ctx, 31, 0x2CAC90u);
    ctx->pc = 0x2CAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC88u;
    // 0x2cac8c: 0x3c12000f  lui         $s2, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA390u, 0x2CAC88u, 0x2CAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC90u;
label_2cac90:
    // 0x2cac90: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x2cac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2cac94: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cac98: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2cac98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2cac9c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2cac9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2caca0: 0x2463ccc0  addiu       $v1, $v1, -0x3340
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954176));
    // 0x2caca4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2caca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2caca8: 0x8444000c  lh          $a0, 0xC($v0)
    ctx->pc = 0x2caca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cacac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CACACu;
    {
        const bool branch_taken_0x2cacac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACACu;
        // 0x2cacb0: 0x3652ffc0  ori         $s2, $s2, 0xFFC0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65472);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacac) {
            ctx->pc = 0x2CACCCu;
            goto label_2caccc;
        }
    }
    ctx->pc = 0x2CACB4u;
    // 0x2cacb4: 0xc0dd2b8  jal         func_374AE0
    ctx->pc = 0x2CACB4u;
    SET_GPR_U32(ctx, 31, 0x2CACBCu);
    ctx->pc = 0x2CACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACB4u;
    // 0x2cacb8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374AE0u, 0x2CACB4u, 0x2CACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACBCu;
label_2cacbc:
    // 0x2cacbc: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x2cacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x2cacc0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2cacc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x2cacc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CACC4u;
    {
        const bool branch_taken_0x2cacc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACC4u;
        // 0x2cacc8: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacc4) {
            ctx->pc = 0x2CACE0u;
            goto label_2cace0;
        }
    }
    ctx->pc = 0x2CACCCu;
label_2caccc:
    // 0x2caccc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2cacccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cacd0: 0xc0dd2b8  jal         func_374AE0
    ctx->pc = 0x2CACD0u;
    SET_GPR_U32(ctx, 31, 0x2CACD8u);
    ctx->pc = 0x2CACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACD0u;
    // 0x2cacd4: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374AE0u, 0x2CACD0u, 0x2CACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACD8u;
label_2cacd8:
    // 0x2cacd8: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2cacd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cacdc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2cacdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2cace0:
    // 0x2cace0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cace4: 0x26103310  addiu       $s0, $s0, 0x3310
    ctx->pc = 0x2cace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13072));
    // 0x2cace8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2cace8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2cacec: 0xc0b359a  jal         func_2CD668
    ctx->pc = 0x2CACECu;
    SET_GPR_U32(ctx, 31, 0x2CACF4u);
    ctx->pc = 0x2CACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CACECu;
    // 0x2cacf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD668u, 0x2CACECu, 0x2CACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF4u;
label_2cacf4:
    // 0x2cacf4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cacf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cacf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cacfc: 0x248436a0  addiu       $a0, $a0, 0x36A0
    ctx->pc = 0x2cacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    // 0x2cad00: 0xc0b35b4  jal         func_2CD6D0
    ctx->pc = 0x2CAD00u;
    SET_GPR_U32(ctx, 31, 0x2CAD08u);
    ctx->pc = 0x2CAD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD00u;
    // 0x2cad04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD6D0u, 0x2CAD00u, 0x2CAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD08u;
label_2cad08:
    // 0x2cad08: 0x26a274a0  addiu       $v0, $s5, 0x74A0
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x2cad0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad10: 0x944605b0  lhu         $a2, 0x5B0($v0)
    ctx->pc = 0x2cad10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2cad14: 0xc0b2da8  jal         func_2CB6A0
    ctx->pc = 0x2CAD14u;
    SET_GPR_U32(ctx, 31, 0x2CAD1Cu);
    ctx->pc = 0x2CAD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD14u;
    // 0x2cad18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB6A0u, 0x2CAD14u, 0x2CAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD1Cu;
label_2cad1c:
    // 0x2cad1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAD1Cu;
    {
        const bool branch_taken_0x2cad1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD1Cu;
        // 0x2cad20: 0x3c140045  lui         $s4, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad1c) {
            ctx->pc = 0x2CAD38u;
            goto label_2cad38;
        }
    }
    ctx->pc = 0x2CAD24u;
    // 0x2cad24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cad2c: 0xc0b2da8  jal         func_2CB6A0
    ctx->pc = 0x2CAD2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD34u);
    ctx->pc = 0x2CAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD2Cu;
    // 0x2cad30: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB6A0u, 0x2CAD2Cu, 0x2CAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD34u;
label_2cad34:
    // 0x2cad34: 0x3c140045  lui         $s4, 0x45
    ctx->pc = 0x2cad34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
label_2cad38:
    // 0x2cad38: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2cad3c: 0x26330074  addiu       $s3, $s1, 0x74
    ctx->pc = 0x2cad3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x2cad40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAD40u;
    {
        const bool branch_taken_0x2cad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD40u;
        // 0x2cad44: 0x26300088  addiu       $s0, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad40) {
            ctx->pc = 0x2CAD50u;
            goto label_2cad50;
        }
    }
    ctx->pc = 0x2CAD48u;
label_2cad48:
    // 0x2cad48: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x2CAD48u;
    SET_GPR_U32(ctx, 31, 0x2CAD50u);
    ctx->pc = 0x2CAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD48u;
    // 0x2cad4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x2CAD48u, 0x2CAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD50u;
label_2cad50:
    // 0x2cad50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad54: 0xc0b2dde  jal         func_2CB778
    ctx->pc = 0x2CAD54u;
    SET_GPR_U32(ctx, 31, 0x2CAD5Cu);
    ctx->pc = 0x2CAD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD54u;
    // 0x2cad58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB778u, 0x2CAD54u, 0x2CAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD5Cu;
label_2cad5c:
    // 0x2cad5c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CAD5Cu;
    {
        const bool branch_taken_0x2cad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD5Cu;
        // 0x2cad60: 0x26a274a0  addiu       $v0, $s5, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad5c) {
            ctx->pc = 0x2CAD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cad48;
        }
    }
    ctx->pc = 0x2CAD64u;
    // 0x2cad64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cad64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad68: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2cad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2cad6c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2CAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD74u);
    ctx->pc = 0x2CAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD6Cu;
    // 0x2cad70: 0x2685ce38  addiu       $a1, $s4, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2CAD6Cu, 0x2CAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD74u;
label_2cad74:
    // 0x2cad74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad78: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2cad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2cad7c: 0xc0b2c20  jal         func_2CB080
    ctx->pc = 0x2CAD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD84u);
    ctx->pc = 0x2CAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD7Cu;
    // 0x2cad80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB080u, 0x2CAD7Cu, 0x2CAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD84u;
label_2cad84:
    // 0x2cad84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cad84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cad88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cad88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cad8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad90: 0xc0b4b3c  jal         func_2D2CF0
    ctx->pc = 0x2CAD90u;
    SET_GPR_U32(ctx, 31, 0x2CAD98u);
    ctx->pc = 0x2CAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD90u;
    // 0x2cad94: 0xe620009c  swc1        $f0, 0x9C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CF0u, 0x2CAD90u, 0x2CAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x2cad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x2cad9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cada0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2cada0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cada4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cada4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cada8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cadac: 0x0  nop
    ctx->pc = 0x2cadacu;
    // NOP
label_2cadb0:
    // 0x2cadb0: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2cadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2cadb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cadb8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cadb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cadbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2cadbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2cadc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cadc4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cadc8: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x2cadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cadccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2cadd0: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CADD0u;
    {
        const bool branch_taken_0x2cadd0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADD0u;
        // 0x2cadd4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadd0) {
            ctx->pc = 0x2CADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cadb0;
        }
    }
    ctx->pc = 0x2CADD8u;
    // 0x2cadd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2caddc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2caddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cade0: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x2cade0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    // 0x2cade4: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2cade4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x2cade8: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x2cade8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    // 0x2cadec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cadecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cadf0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cadf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cadf4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cadf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cadf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cadf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cadfc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cadfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cae00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cae00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cae04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cae08: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE08u;
        // 0x2cae0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAE10u;
}
