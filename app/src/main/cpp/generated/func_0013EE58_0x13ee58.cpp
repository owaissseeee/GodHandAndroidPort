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

// Function: func_0013EE58
// Address: 0x13ee58 - 0x13f070
void func_0013EE58_0x13ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013EE58_0x13ee58");
#endif

    switch (ctx->pc) {
        case 0x13ee74u: goto label_13ee74;
        case 0x13ee84u: goto label_13ee84;
        case 0x13ee94u: goto label_13ee94;
        case 0x13eea4u: goto label_13eea4;
        case 0x13eee0u: goto label_13eee0;
        case 0x13f058u: goto label_13f058;
        default: break;
    }

    ctx->pc = 0x13ee58u;

    // 0x13ee58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ee5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13ee64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13ee64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13ee68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ee6c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13EE6Cu;
    SET_GPR_U32(ctx, 31, 0x13EE74u);
    ctx->pc = 0x13EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE6Cu;
    // 0x13ee70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13EE6Cu, 0x13EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE74u;
label_13ee74:
    // 0x13ee74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13ee78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee7c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13EE7Cu;
    SET_GPR_U32(ctx, 31, 0x13EE84u);
    ctx->pc = 0x13EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE7Cu;
    // 0x13ee80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13EE7Cu, 0x13EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE84u;
label_13ee84:
    // 0x13ee84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee88: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x13ee8c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13EE8Cu;
    SET_GPR_U32(ctx, 31, 0x13EE94u);
    ctx->pc = 0x13EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE8Cu;
    // 0x13ee90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13EE8Cu, 0x13EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE94u;
label_13ee94:
    // 0x13ee94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ee94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee9c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13EE9Cu;
    SET_GPR_U32(ctx, 31, 0x13EEA4u);
    ctx->pc = 0x13EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE9Cu;
    // 0x13eea0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13EE9Cu, 0x13EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEA4u;
label_13eea4:
    // 0x13eea4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x13eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x13eea8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x13eea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x13eeac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13eeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13eeb0: 0x260d0094  addiu       $t5, $s0, 0x94
    ctx->pc = 0x13eeb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x13eeb4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x13eeb8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x13eeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x13eebc: 0x260c0090  addiu       $t4, $s0, 0x90
    ctx->pc = 0x13eebcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13eec0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x13eec4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x13eec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13eec8: 0x260b0098  addiu       $t3, $s0, 0x98
    ctx->pc = 0x13eec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x13eecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13eeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13eed0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13eed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13eed4: 0x260a009c  addiu       $t2, $s0, 0x9C
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x13eed8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x13eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x13eedc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13eedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13eee0:
    // 0x13eee0: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13eee4: 0x1a64021  addu        $t0, $t5, $a2
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x13eee8: 0x1861821  addu        $v1, $t4, $a2
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13eeec: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x13eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eef0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13eef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13eef4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x13eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x13eef8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x13eef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13eefc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13eefcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13ef00: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x13ef00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13ef04: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x13ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ef08: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x13ef08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ef0c: 0x0  nop
    ctx->pc = 0x13ef0cu;
    // NOP
    // 0x13ef10: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x13EF10u;
    {
        const bool branch_taken_0x13ef10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ef10) {
            ctx->pc = 0x13EF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF10u;
            // 0x13ef14: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF28u;
            goto label_13ef28;
        }
    }
    ctx->pc = 0x13EF18u;
    // 0x13ef18: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x13ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x13ef1c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x13ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x13ef20: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x13ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x13ef24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ef28:
    // 0x13ef28: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x13ef28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ef2c: 0x0  nop
    ctx->pc = 0x13ef2cu;
    // NOP
    // 0x13ef30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13EF30u;
    {
        const bool branch_taken_0x13ef30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ef30) {
            ctx->pc = 0x13EF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF30u;
            // 0x13ef34: 0xe4630000  swc1        $f3, 0x0($v1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF38u;
            goto label_13ef38;
        }
    }
    ctx->pc = 0x13EF38u;
label_13ef38:
    // 0x13ef38: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x13ef3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ef40: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x13ef44: 0x1662821  addu        $a1, $t3, $a2
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x13ef48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ef4c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13ef50: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x13ef50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ef54: 0x1463821  addu        $a3, $t2, $a2
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x13ef58: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x13ef58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x13ef5c: 0x2d260002  sltiu       $a2, $t1, 0x2
    ctx->pc = 0x13ef5cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13ef60: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x13ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ef64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ef68: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x13ef68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x13ef6c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x13ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ef70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ef74: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x13ef74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x13ef78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ef7c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x13ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ef80: 0x14c0ffd7  bnez        $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x13EF80u;
    {
        const bool branch_taken_0x13ef80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF80u;
        // 0x13ef84: 0xe460007c  swc1        $f0, 0x7C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef80) {
            ctx->pc = 0x13EEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eee0;
        }
    }
    ctx->pc = 0x13EF88u;
    // 0x13ef88: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x13ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ef8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13ef90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ef90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ef94: 0x0  nop
    ctx->pc = 0x13ef94u;
    // NOP
    // 0x13ef98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ef98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ef9c: 0x0  nop
    ctx->pc = 0x13ef9cu;
    // NOP
    // 0x13efa0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13EFC0u;
            goto label_13efc0;
        }
    }
    ctx->pc = 0x13EFA8u;
    // 0x13efa8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13efac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13efacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13efb0: 0x0  nop
    ctx->pc = 0x13efb0u;
    // NOP
    // 0x13efb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13efb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13efb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13EFB8u;
    {
        const bool branch_taken_0x13efb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFB8u;
        // 0x13efbc: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efb8) {
            ctx->pc = 0x13EFE8u;
            goto label_13efe8;
        }
    }
    ctx->pc = 0x13EFC0u;
label_13efc0:
    // 0x13efc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13efc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13efc4: 0x0  nop
    ctx->pc = 0x13efc4u;
    // NOP
    // 0x13efc8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x13EFC8u;
    {
        const bool branch_taken_0x13efc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13efc8) {
            ctx->pc = 0x13EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EFC8u;
            // 0x13efcc: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EFECu;
            goto label_13efec;
        }
    }
    ctx->pc = 0x13EFD0u;
    // 0x13efd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13efd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13efd4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13efd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13efd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13efd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13efdc: 0x0  nop
    ctx->pc = 0x13efdcu;
    // NOP
    // 0x13efe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13efe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13efe4: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x13efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_13efe8:
    // 0x13efe8: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x13efe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13efec:
    // 0x13efec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13eff0: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x13eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13eff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13eff8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x13eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x13effc: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x13effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f000: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x13f000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x13f004: 0x860200be  lh          $v0, 0xBE($s0)
    ctx->pc = 0x13f004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 190)));
    // 0x13f008: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F008u;
    {
        const bool branch_taken_0x13f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F008u;
        // 0x13f00c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f008) {
            ctx->pc = 0x13F034u;
            goto label_13f034;
        }
    }
    ctx->pc = 0x13F010u;
    // 0x13f010: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13f014: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13f018: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13f01c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f020: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13f020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13f024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f028: 0x960200be  lhu         $v0, 0xBE($s0)
    ctx->pc = 0x13f028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 190)));
    // 0x13f02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F02Cu;
    {
        const bool branch_taken_0x13f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F02Cu;
        // 0x13f030: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f02c) {
            ctx->pc = 0x13F050u;
            goto label_13f050;
        }
    }
    ctx->pc = 0x13F034u;
label_13f034:
    // 0x13f034: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13f038: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x13f038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f03c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13f040: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13f044: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13f044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13f048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f04c: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x13f04cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
label_13f050:
    // 0x13f050: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13F050u;
    SET_GPR_U32(ctx, 31, 0x13F058u);
    ctx->pc = 0x13F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F050u;
    // 0x13f054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13F050u, 0x13F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F058u;
label_13f058:
    // 0x13f058: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13f058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f05c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13f05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f064: 0x3e00008  jr          $ra
    ctx->pc = 0x13F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F064u;
        // 0x13f068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F06Cu;
    // 0x13f06c: 0x0  nop
    ctx->pc = 0x13f06cu;
    // NOP
    ctx->pc = 0x13f070u;
}
