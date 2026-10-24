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

// Function: func_00198D40
// Address: 0x198d40 - 0x198f48
void func_00198D40_0x198d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00198D40_0x198d40");
#endif

    switch (ctx->pc) {
        case 0x198d64u: goto label_198d64;
        case 0x198e70u: goto label_198e70;
        case 0x198ea4u: goto label_198ea4;
        case 0x198f20u: goto label_198f20;
        default: break;
    }

    ctx->pc = 0x198d40u;

    // 0x198d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x198d44: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x198d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x198d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d4c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x198d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x198d50: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x198d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x198d54: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x198d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x198d58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x198d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x198d5c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x198D5Cu;
    SET_GPR_U32(ctx, 31, 0x198D64u);
    ctx->pc = 0x198D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D5Cu;
    // 0x198d60: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x198D5Cu, 0x198D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D64u;
label_198d64:
    // 0x198d64: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x198d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x198d68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x198d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x198d6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x198d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x198d70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x198d74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x198d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x198d78: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x198d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d80: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x198d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x198d84: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x198d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x198d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198d8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x198d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198d90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x198d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198d94: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x198d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x198d98: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x198d98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x198d9c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x198d9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198da0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x198da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x198da4: 0x8e0205e0  lw          $v0, 0x5E0($s0)
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x198da8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x198DA8u;
    {
        const bool branch_taken_0x198da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198da8) {
            ctx->pc = 0x198DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198DA8u;
            // 0x198dac: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198E14u;
            goto label_198e14;
        }
    }
    ctx->pc = 0x198DB0u;
    // 0x198db0: 0x9043002c  lbu         $v1, 0x2C($v0)
    ctx->pc = 0x198db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x198db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198db8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x198DB8u;
    {
        const bool branch_taken_0x198db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DB8u;
        // 0x198dbc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198db8) {
            ctx->pc = 0x198DDCu;
            goto label_198ddc;
        }
    }
    ctx->pc = 0x198DC0u;
    // 0x198dc0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x198DC0u;
    {
        const bool branch_taken_0x198dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DC0u;
        // 0x198dc4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198dc0) {
            ctx->pc = 0x198E14u;
            goto label_198e14;
        }
    }
    ctx->pc = 0x198DC8u;
    // 0x198dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198dcc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x198DCCu;
    {
        const bool branch_taken_0x198dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198dcc) {
            ctx->pc = 0x198DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198DCCu;
            // 0x198dd0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198DF8u;
            goto label_198df8;
        }
    }
    ctx->pc = 0x198DD4u;
    // 0x198dd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x198DD4u;
    {
        const bool branch_taken_0x198dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DD4u;
        // 0x198dd8: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198dd4) {
            ctx->pc = 0x198E18u;
            goto label_198e18;
        }
    }
    ctx->pc = 0x198DDCu;
label_198ddc:
    // 0x198ddc: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x198ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x198de0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x198de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x198de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198de8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x198de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198dec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x198decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198df0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198DF0u;
    {
        const bool branch_taken_0x198df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DF0u;
        // 0x198df4: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198df0) {
            ctx->pc = 0x198E10u;
            goto label_198e10;
        }
    }
    ctx->pc = 0x198DF8u;
label_198df8:
    // 0x198df8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x198dfc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x198dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x198e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e04: 0x0  nop
    ctx->pc = 0x198e04u;
    // NOP
    // 0x198e08: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x198e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198e0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x198e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_198e10:
    // 0x198e10: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x198e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198e14:
    // 0x198e14: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_198e18:
    // 0x198e18: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x198e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198e1c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198e20: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x198e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198e24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x198e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x198e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x198e2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x198e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198e30: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x198e34: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x198e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x198e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e3c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x198e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x198e40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198e44: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x198e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x198e48: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x198e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x198e4c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x198e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x198e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198e54: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x198e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198e58: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x198e5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198e60: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x198e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x198e64: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x198e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x198e68: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x198E68u;
    SET_GPR_U32(ctx, 31, 0x198E70u);
    ctx->pc = 0x198E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E68u;
    // 0x198e6c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x198E68u, 0x198E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E70u;
label_198e70:
    // 0x198e70: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x198e74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x198E74u;
    {
        const bool branch_taken_0x198e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E74u;
        // 0x198e78: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e74) {
            ctx->pc = 0x198EA4u;
            goto label_198ea4;
        }
    }
    ctx->pc = 0x198E7Cu;
    // 0x198e7c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x198e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x198e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x198e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x198e88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x198e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e8c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x198e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x198e90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e94: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x198e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x198e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e9c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x198E9Cu;
    SET_GPR_U32(ctx, 31, 0x198EA4u);
    ctx->pc = 0x198EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E9Cu;
    // 0x198ea0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x198E9Cu, 0x198EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EA4u;
label_198ea4:
    // 0x198ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ea8: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x198ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x198eac: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x198eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x198eb0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x198eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x198eb4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x198eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198eb8: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x198eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x198ebc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x198ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ec0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x198ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x198ec4: 0x0  nop
    ctx->pc = 0x198ec4u;
    // NOP
    // 0x198ec8: 0x0  nop
    ctx->pc = 0x198ec8u;
    // NOP
    // 0x198ecc: 0x46001103  div.s       $f4, $f2, $f0
    ctx->pc = 0x198eccu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x198ed0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x198ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198ed4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x198ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ed8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x198ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198edc: 0x0  nop
    ctx->pc = 0x198edcu;
    // NOP
    // 0x198ee0: 0x0  nop
    ctx->pc = 0x198ee0u;
    // NOP
    // 0x198ee4: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x198ee4u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[1]);
    // 0x198ee8: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x198ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x198eec: 0x0  nop
    ctx->pc = 0x198eecu;
    // NOP
    // 0x198ef0: 0x0  nop
    ctx->pc = 0x198ef0u;
    // NOP
    // 0x198ef4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x198ef4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x198ef8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x198ef8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x198efc: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x198efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x198f00: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198F00u;
    {
        const bool branch_taken_0x198f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x198F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F00u;
        // 0x198f04: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f00) {
            ctx->pc = 0x198F18u;
            goto label_198f18;
        }
    }
    ctx->pc = 0x198F08u;
    // 0x198f08: 0xe6040110  swc1        $f4, 0x110($s0)
    ctx->pc = 0x198f08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x198f0c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x198f0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x198f10: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x198f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198f14: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x198f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_198f18:
    // 0x198f18: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x198F18u;
    SET_GPR_U32(ctx, 31, 0x198F20u);
    ctx->pc = 0x198F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F18u;
    // 0x198f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x198F18u, 0x198F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F20u;
label_198f20:
    // 0x198f20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x198f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x198f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198f2c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x198f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198f30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x198f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198f34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x198f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198f38: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x198f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x198F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F3Cu;
        // 0x198f40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198F44u;
    // 0x198f44: 0x0  nop
    ctx->pc = 0x198f44u;
    // NOP
    ctx->pc = 0x198f48u;
}
