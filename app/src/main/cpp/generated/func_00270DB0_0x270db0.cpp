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

// Function: func_00270DB0
// Address: 0x270db0 - 0x271148
void func_00270DB0_0x270db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00270DB0_0x270db0");
#endif

    switch (ctx->pc) {
        case 0x270dd0u: goto label_270dd0;
        case 0x270e18u: goto label_270e18;
        case 0x270f70u: goto label_270f70;
        case 0x270f7cu: goto label_270f7c;
        case 0x270f8cu: goto label_270f8c;
        case 0x270facu: goto label_270fac;
        case 0x271078u: goto label_271078;
        case 0x2710f8u: goto label_2710f8;
        case 0x27111cu: goto label_27111c;
        default: break;
    }

    ctx->pc = 0x270db0u;

    // 0x270db0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x270db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x270db4: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x270db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x270db8: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x270db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x270dbc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x270dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x270dc0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x270dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x270dc4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x270dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x270dc8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x270DC8u;
    SET_GPR_U32(ctx, 31, 0x270DD0u);
    ctx->pc = 0x270DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DC8u;
    // 0x270dcc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x270DC8u, 0x270DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DD0u;
label_270dd0:
    // 0x270dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270dd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x270dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270dd8: 0xc640054c  lwc1        $f0, 0x54C($s2)
    ctx->pc = 0x270dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270de0: 0x0  nop
    ctx->pc = 0x270de0u;
    // NOP
    // 0x270de4: 0x450100d0  bc1t        . + 4 + (0xD0 << 2)
    ctx->pc = 0x270DE4u;
    {
        const bool branch_taken_0x270de4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DE4u;
        // 0x270de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270de4) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x270DECu;
    // 0x270dec: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x270df0: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x270df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x270df4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x270df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x270df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270dfc: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x270DFCu;
    {
        const bool branch_taken_0x270dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DFCu;
        // 0x270e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dfc) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x270E04u;
    // 0x270e04: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x270e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x270e08: 0x184000c7  blez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x270E08u;
    {
        const bool branch_taken_0x270e08 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x270E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E08u;
        // 0x270e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e08) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x270E10u;
    // 0x270e10: 0xc04b14c  jal         func_12C530
    ctx->pc = 0x270E10u;
    SET_GPR_U32(ctx, 31, 0x270E18u);
    ctx->pc = 0x270E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E10u;
    // 0x270e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x270E10u, 0x270E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E18u;
label_270e18:
    // 0x270e18: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x270E18u;
    {
        const bool branch_taken_0x270e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E18u;
        // 0x270e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e18) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x270E20u;
    // 0x270e20: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x270e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x270e24: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x270e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x270e28: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x270e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x270e2c: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x270e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x270e30: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x270E30u;
    {
        const bool branch_taken_0x270e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E30u;
        // 0x270e34: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e30) {
            ctx->pc = 0x270F18u;
            goto label_270f18;
        }
    }
    ctx->pc = 0x270E38u;
    // 0x270e38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x270e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x270e3c: 0x24426010  addiu       $v0, $v0, 0x6010
    ctx->pc = 0x270e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24592));
    // 0x270e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270e48: 0x800008  jr          $a0
    ctx->pc = 0x270E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270E50u: goto label_270e50;
            case 0x270E64u: goto label_270e64;
            case 0x270E84u: goto label_270e84;
            case 0x270EACu: goto label_270eac;
            case 0x270ECCu: goto label_270ecc;
            case 0x270EECu: goto label_270eec;
            case 0x270F18u: goto label_270f18;
            case 0x270F44u: goto label_270f44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270E50u;
label_270e50:
    // 0x270e50: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x270e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x270e54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x270e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x270e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270e5c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x270E5Cu;
    {
        const bool branch_taken_0x270e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e5c) {
            ctx->pc = 0x270F24u;
            goto label_270f24;
        }
    }
    ctx->pc = 0x270E64u;
label_270e64:
    // 0x270e64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270e6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270e74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x270e78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270e7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x270E7Cu;
    {
        const bool branch_taken_0x270e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E7Cu;
        // 0x270e80: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e7c) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270E84u;
label_270e84:
    // 0x270e84: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x270e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x270e88: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x270e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x270e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270e90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270e98: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x270e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x270e9c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x270e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x270ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270ea4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x270EA4u;
    {
        const bool branch_taken_0x270ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EA4u;
        // 0x270ea8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ea4) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270EACu;
label_270eac:
    // 0x270eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270eb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270ebc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x270ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x270ec0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270ec4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x270EC4u;
    {
        const bool branch_taken_0x270ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EC4u;
        // 0x270ec8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ec4) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270ECCu;
label_270ecc:
    // 0x270ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ed4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270ed8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270edc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x270edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x270ee0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270ee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x270EE4u;
    {
        const bool branch_taken_0x270ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EE4u;
        // 0x270ee8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ee4) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270EECu;
label_270eec:
    // 0x270eec: 0x8e6206f0  lw          $v0, 0x6F0($s3)
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1776)));
    // 0x270ef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270EF0u;
    {
        const bool branch_taken_0x270ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ef0) {
            ctx->pc = 0x270F18u;
            goto label_270f18;
        }
    }
    ctx->pc = 0x270EF8u;
    // 0x270ef8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x270ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x270efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270f00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270f04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270f08: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x270f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x270f0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270f10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x270F10u;
    {
        const bool branch_taken_0x270f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F10u;
        // 0x270f14: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f10) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270F18u;
label_270f18:
    // 0x270f18: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x270f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x270f1c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x270f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x270f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_270f24:
    // 0x270f24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270f2c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x270f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x270f30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270f34: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x270f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_270f38:
    // 0x270f38: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x270f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x270f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270F3Cu;
    {
        const bool branch_taken_0x270f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F3Cu;
        // 0x270f40: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f3c) {
            ctx->pc = 0x270F60u;
            goto label_270f60;
        }
    }
    ctx->pc = 0x270F44u;
label_270f44:
    // 0x270f44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270f4c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x270f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x270f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270f54: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x270f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x270f58: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x270f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x270f5c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x270f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_270f60:
    // 0x270f60: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x270f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x270f64: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x270f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270f68: 0xc051e62  jal         func_147988
    ctx->pc = 0x270F68u;
    SET_GPR_U32(ctx, 31, 0x270F70u);
    ctx->pc = 0x270F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F68u;
    // 0x270f6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x270F68u, 0x270F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F70u;
label_270f70:
    // 0x270f70: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x270f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x270f74: 0xc051f10  jal         func_147C40
    ctx->pc = 0x270F74u;
    SET_GPR_U32(ctx, 31, 0x270F7Cu);
    ctx->pc = 0x270F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F74u;
    // 0x270f78: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x270F74u, 0x270F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F7Cu;
label_270f7c:
    // 0x270f7c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x270f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x270f80: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x270f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x270f84: 0xc051d5a  jal         func_147568
    ctx->pc = 0x270F84u;
    SET_GPR_U32(ctx, 31, 0x270F8Cu);
    ctx->pc = 0x270F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F84u;
    // 0x270f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x270F84u, 0x270F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F8Cu;
label_270f8c:
    // 0x270f8c: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x270f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x270f90: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x270f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x270f94: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x270f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270f98: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x270f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fa4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x270FA4u;
    SET_GPR_U32(ctx, 31, 0x270FACu);
    ctx->pc = 0x270FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FA4u;
    // 0x270fa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x270FA4u, 0x270FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FACu;
label_270fac:
    // 0x270fac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x270facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x270fb0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x270fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270fb4: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x270fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270fb8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x270fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270fbc: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x270fbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x270fc0: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x270fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270fc4: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x270fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270fc8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x270fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x270fcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270fd0: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x270fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x270fd4: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x270FD4u;
    {
        const bool branch_taken_0x270fd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FD4u;
        // 0x270fd8: 0xe7a300c8  swc1        $f3, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fd4) {
            ctx->pc = 0x271124u;
            goto label_271124;
        }
    }
    ctx->pc = 0x270FDCu;
    // 0x270fdc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x270fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270fe0: 0x0  nop
    ctx->pc = 0x270fe0u;
    // NOP
    // 0x270fe4: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x270FE4u;
    {
        const bool branch_taken_0x270fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FE4u;
        // 0x270fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fe4) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x270FECu;
    // 0x270fec: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x270fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ff0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x270ff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x270ff4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x270ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ff8: 0x0  nop
    ctx->pc = 0x270ff8u;
    // NOP
    // 0x270ffc: 0x4503004b  bc1tl       . + 4 + (0x4B << 2)
    ctx->pc = 0x270FFCu;
    {
        const bool branch_taken_0x270ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270ffc) {
            ctx->pc = 0x271000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270FFCu;
            // 0x271000: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27112Cu;
            goto label_27112c;
        }
    }
    ctx->pc = 0x271004u;
    // 0x271004: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x271004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271008: 0x0  nop
    ctx->pc = 0x271008u;
    // NOP
    // 0x27100c: 0x45030047  bc1tl       . + 4 + (0x47 << 2)
    ctx->pc = 0x27100Cu;
    {
        const bool branch_taken_0x27100c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27100c) {
            ctx->pc = 0x271010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27100Cu;
            // 0x271010: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27112Cu;
            goto label_27112c;
        }
    }
    ctx->pc = 0x271014u;
    // 0x271014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271018: 0x0  nop
    ctx->pc = 0x271018u;
    // NOP
    // 0x27101c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27101cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271020: 0x0  nop
    ctx->pc = 0x271020u;
    // NOP
    // 0x271024: 0x45030041  bc1tl       . + 4 + (0x41 << 2)
    ctx->pc = 0x271024u;
    {
        const bool branch_taken_0x271024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271024) {
            ctx->pc = 0x271028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271024u;
            // 0x271028: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27112Cu;
            goto label_27112c;
        }
    }
    ctx->pc = 0x27102Cu;
    // 0x27102c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x27102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271030: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x271030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271034: 0x0  nop
    ctx->pc = 0x271034u;
    // NOP
    // 0x271038: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
    ctx->pc = 0x271038u;
    {
        const bool branch_taken_0x271038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271038) {
            ctx->pc = 0x27103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271038u;
            // 0x27103c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27112Cu;
            goto label_27112c;
        }
    }
    ctx->pc = 0x271040u;
    // 0x271040: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x271040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271044: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x271044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271048: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x271048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x27104c: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x271050: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271050u;
    {
        const bool branch_taken_0x271050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x271050) {
            ctx->pc = 0x271070u;
            goto label_271070;
        }
    }
    ctx->pc = 0x271058u;
    // 0x271058: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27105c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x271060: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x271060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271064: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x271064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x271068: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x271068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27106c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x27106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_271070:
    // 0x271070: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271070u;
    SET_GPR_U32(ctx, 31, 0x271078u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271070u, 0x271078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271078u;
label_271078:
    // 0x271078: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x271078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27107c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27107Cu;
    {
        const bool branch_taken_0x27107c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x271080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27107Cu;
        // 0x271080: 0xc7a100d4  lwc1        $f1, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27107c) {
            ctx->pc = 0x2710A0u;
            goto label_2710a0;
        }
    }
    ctx->pc = 0x271084u;
    // 0x271084: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271088: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x271088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x27108c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271090: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x271090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x271094: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x271094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271098: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x271098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x27109c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x27109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2710a0:
    // 0x2710a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2710a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2710a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2710a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2710a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2710ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2710acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710b0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2710b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2710b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2710b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2710b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2710bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2710bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2710c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2710c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2710c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2710c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2710c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2710c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2710cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2710ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710d0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2710d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2710d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2710d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710d8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2710d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2710dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2710dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2710e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2710e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2710e4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2710e8: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2710e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2710ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2710ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710f0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2710F0u;
    SET_GPR_U32(ctx, 31, 0x2710F8u);
    ctx->pc = 0x2710F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710F0u;
    // 0x2710f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2710F0u, 0x2710F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710F8u;
label_2710f8:
    // 0x2710f8: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2710F8u;
    {
        const bool branch_taken_0x2710f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2710FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710F8u;
        // 0x2710fc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710f8) {
            ctx->pc = 0x271124u;
            goto label_271124;
        }
    }
    ctx->pc = 0x271100u;
    // 0x271100: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x271100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x271104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271108: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x271108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x27110c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271110: 0xe660054c  swc1        $f0, 0x54C($s3)
    ctx->pc = 0x271110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1356), bits); }
    // 0x271114: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x271114u;
    SET_GPR_U32(ctx, 31, 0x27111Cu);
    ctx->pc = 0x271118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271114u;
    // 0x271118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x271114u, 0x27111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27111Cu;
label_27111c:
    // 0x27111c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27111Cu;
    {
        const bool branch_taken_0x27111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27111Cu;
        // 0x271120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27111c) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x271124u;
label_271124:
    // 0x271124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271128:
    // 0x271128: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x271128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27112c:
    // 0x27112c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x27112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x271130: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x271130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x271134: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x271134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x271138: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x271138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27113c: 0x3e00008  jr          $ra
    ctx->pc = 0x27113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27113Cu;
        // 0x271140: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271144u;
    // 0x271144: 0x0  nop
    ctx->pc = 0x271144u;
    // NOP
    ctx->pc = 0x271148u;
}
