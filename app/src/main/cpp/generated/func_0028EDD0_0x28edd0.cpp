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

// Function: func_0028EDD0
// Address: 0x28edd0 - 0x28f108
void func_0028EDD0_0x28edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EDD0_0x28edd0");
#endif

    switch (ctx->pc) {
        case 0x28edecu: goto label_28edec;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ef60u: goto label_28ef60;
        case 0x28efb0u: goto label_28efb0;
        case 0x28f0d0u: goto label_28f0d0;
        case 0x28f0ecu: goto label_28f0ec;
        default: break;
    }

    ctx->pc = 0x28edd0u;

    // 0x28edd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28edd4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28edd8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28eddc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x28ede0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28ede4: 0xc053bea  jal         func_14EFA8
    ctx->pc = 0x28EDE4u;
    SET_GPR_U32(ctx, 31, 0x28EDECu);
    ctx->pc = 0x28EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EDE4u;
    // 0x28ede8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFA8u, 0x28EDE4u, 0x28EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDECu;
label_28edec:
    // 0x28edec: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x28edecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x28edf0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x28edf4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x28edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x28edf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28edfc: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x28EDFCu;
    {
        const bool branch_taken_0x28edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDFCu;
        // 0x28ee00: 0x24647a24  addiu       $a0, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edfc) {
            ctx->pc = 0x28F0ECu;
            goto label_28f0ec;
        }
    }
    ctx->pc = 0x28EE04u;
    // 0x28ee04: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x28ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x28ee08: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x28ee0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28ee10: 0x544000b7  bnel        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x28EE10u;
    {
        const bool branch_taken_0x28ee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee10) {
            ctx->pc = 0x28EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE10u;
            // 0x28ee14: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28EE18u;
    // 0x28ee18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28ee1c: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x28EE1Cu;
    SET_GPR_U32(ctx, 31, 0x28EE24u);
    ctx->pc = 0x28EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE1Cu;
    // 0x28ee20: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x28EE1Cu, 0x28EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE24u;
label_28ee24:
    // 0x28ee24: 0x544000b2  bnel        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x28EE24u;
    {
        const bool branch_taken_0x28ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee24) {
            ctx->pc = 0x28EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE24u;
            // 0x28ee28: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28EE2Cu;
    // 0x28ee2c: 0x92020615  lbu         $v0, 0x615($s0)
    ctx->pc = 0x28ee2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
    // 0x28ee30: 0x544000af  bnel        $v0, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x28EE30u;
    {
        const bool branch_taken_0x28ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee30) {
            ctx->pc = 0x28EE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE30u;
            // 0x28ee34: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28EE38u;
    // 0x28ee38: 0x92020616  lbu         $v0, 0x616($s0)
    ctx->pc = 0x28ee38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1558)));
    // 0x28ee3c: 0x544000ac  bnel        $v0, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x28EE3Cu;
    {
        const bool branch_taken_0x28ee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee3c) {
            ctx->pc = 0x28EE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE3Cu;
            // 0x28ee40: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28EE44u;
    // 0x28ee44: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x28ee44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x28ee48: 0x504000a9  beql        $v0, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x28EE48u;
    {
        const bool branch_taken_0x28ee48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee48) {
            ctx->pc = 0x28EE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE48u;
            // 0x28ee4c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28EE50u;
    // 0x28ee50: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ee54: 0xc60300b0  lwc1        $f3, 0xB0($s0)
    ctx->pc = 0x28ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ee58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28ee5c: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x28ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28ee64: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x28ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ee68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ee70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28ee70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ee74: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x28ee74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28ee78: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28ee78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28ee7c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x28ee7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28ee80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x28ee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28ee84: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x28ee84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x28ee88: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee8c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28ee8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ee90: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28ee94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EE94u;
    {
        const bool branch_taken_0x28ee94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE94u;
        // 0x28ee98: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee94) {
            ctx->pc = 0x28EEA8u;
            goto label_28eea8;
        }
    }
    ctx->pc = 0x28EE9Cu;
    // 0x28ee9c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x28ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x28eea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EEA0u;
    {
        const bool branch_taken_0x28eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEA0u;
        // 0x28eea4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eea0) {
            ctx->pc = 0x28EEACu;
            goto label_28eeac;
        }
    }
    ctx->pc = 0x28EEA8u;
label_28eea8:
    // 0x28eea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eeac:
    // 0x28eeac: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x28eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eeb0: 0x26110650  addiu       $s1, $s0, 0x650
    ctx->pc = 0x28eeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x28eeb4: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x28eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eeb8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28eeb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28eebc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28eebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28eec0: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x28eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eec4: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x28eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eec8: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x28eec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x28eecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28eeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28eed0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28eed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28eed4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x28eed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28eed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eedc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28eedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28eee0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28eee4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28eee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28eee8: 0xe644000c  swc1        $f4, 0xC($s2)
    ctx->pc = 0x28eee8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x28eeec: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28EEECu;
    {
        const bool branch_taken_0x28eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEECu;
        // 0x28eef0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eeec) {
            ctx->pc = 0x28EF88u;
            goto label_28ef88;
        }
    }
    ctx->pc = 0x28EEF4u;
    // 0x28eef4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28eef8: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x28eef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x28eefc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EEFCu;
    {
        const bool branch_taken_0x28eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEFCu;
        // 0x28ef00: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eefc) {
            ctx->pc = 0x28EF1Cu;
            goto label_28ef1c;
        }
    }
    ctx->pc = 0x28EF04u;
    // 0x28ef04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28EF04u;
    {
        const bool branch_taken_0x28ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF04u;
        // 0x28ef08: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef04) {
            ctx->pc = 0x28EF44u;
            goto label_28ef44;
        }
    }
    ctx->pc = 0x28EF0Cu;
    // 0x28ef0c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28EF0Cu;
    {
        const bool branch_taken_0x28ef0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF0Cu;
        // 0x28ef10: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef0c) {
            ctx->pc = 0x28EF38u;
            goto label_28ef38;
        }
    }
    ctx->pc = 0x28EF14u;
    // 0x28ef14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28EF14u;
    {
        const bool branch_taken_0x28ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF14u;
        // 0x28ef18: 0x8e040660  lw          $a0, 0x660($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef14) {
            ctx->pc = 0x28EF58u;
            goto label_28ef58;
        }
    }
    ctx->pc = 0x28EF1Cu;
label_28ef1c:
    // 0x28ef1c: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x28ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x28ef20: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28EF20u;
    {
        const bool branch_taken_0x28ef20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ef20) {
            ctx->pc = 0x28EF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF20u;
            // 0x28ef24: 0x8e040660  lw          $a0, 0x660($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF58u;
            goto label_28ef58;
        }
    }
    ctx->pc = 0x28EF28u;
    // 0x28ef28: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x28ef2c: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x28ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x28ef30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF30u;
    {
        const bool branch_taken_0x28ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF30u;
        // 0x28ef34: 0x24420d60  addiu       $v0, $v0, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef30) {
            ctx->pc = 0x28EF50u;
            goto label_28ef50;
        }
    }
    ctx->pc = 0x28EF38u;
label_28ef38:
    // 0x28ef38: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x28ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x28ef3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28EF3Cu;
    {
        const bool branch_taken_0x28ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF3Cu;
        // 0x28ef40: 0x24420db0  addiu       $v0, $v0, 0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef3c) {
            ctx->pc = 0x28EF50u;
            goto label_28ef50;
        }
    }
    ctx->pc = 0x28EF44u;
label_28ef44:
    // 0x28ef44: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x28ef48: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x28ef4c: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x28ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
label_28ef50:
    // 0x28ef50: 0xae020660  sw          $v0, 0x660($s0)
    ctx->pc = 0x28ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 2));
    // 0x28ef54: 0x8e040660  lw          $a0, 0x660($s0)
    ctx->pc = 0x28ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
label_28ef58:
    // 0x28ef58: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x28EF58u;
    SET_GPR_U32(ctx, 31, 0x28EF60u);
    ctx->pc = 0x28EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF58u;
    // 0x28ef5c: 0x26110650  addiu       $s1, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x28EF58u, 0x28EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF60u;
label_28ef60:
    // 0x28ef60: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EF60u;
    {
        const bool branch_taken_0x28ef60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x28EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF60u;
        // 0x28ef64: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef60) {
            ctx->pc = 0x28EF7Cu;
            goto label_28ef7c;
        }
    }
    ctx->pc = 0x28EF68u;
    // 0x28ef68: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x28ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ef6c: 0xe6000650  swc1        $f0, 0x650($s0)
    ctx->pc = 0x28ef6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x28ef70: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x28ef70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x28ef74: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef78: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x28ef78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_28ef7c:
    // 0x28ef7c: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x28ef7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x28ef80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28ef84: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x28ef84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
label_28ef88:
    // 0x28ef88: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x28ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ef8c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x28ef8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ef90: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x28ef90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ef94: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28ef94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28ef98: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x28ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28ef9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x28ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28efa0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28efa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28efa4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28efa8: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x28EFA8u;
    SET_GPR_U32(ctx, 31, 0x28EFB0u);
    ctx->pc = 0x28EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFA8u;
    // 0x28efac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x28EFA8u, 0x28EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFB0u;
label_28efb0:
    // 0x28efb0: 0x9603062c  lhu         $v1, 0x62C($s0)
    ctx->pc = 0x28efb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x28efb4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x28efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28efb8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28EFB8u;
    {
        const bool branch_taken_0x28efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFB8u;
        // 0x28efbc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efb8) {
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFC0u;
    // 0x28efc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28efc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28efc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28efc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28efc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28efcc: 0x0  nop
    ctx->pc = 0x28efccu;
    // NOP
    // 0x28efd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x28efd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28efd4: 0x0  nop
    ctx->pc = 0x28efd4u;
    // NOP
    // 0x28efd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EFD8u;
    {
        const bool branch_taken_0x28efd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFD8u;
        // 0x28efdc: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efd8) {
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFE0u;
    // 0x28efe0: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x28efe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
label_28efe4:
    // 0x28efe4: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x28efe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x28efe8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28efec: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28EFECu;
    {
        const bool branch_taken_0x28efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFECu;
        // 0x28eff0: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efec) {
            ctx->pc = 0x28F0B0u;
            goto label_28f0b0;
        }
    }
    ctx->pc = 0x28EFF4u;
    // 0x28eff4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x28eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28eff8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x28eff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28effc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x28effcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f000: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f004: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f008: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28f00c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28f00cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f010: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x28f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f014: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x28f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x28f018: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28f01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f020: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28f020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f024: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f028: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f02c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x28f02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x28f030: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x28f030u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x28f034: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x28f034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f038: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f03c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28f03cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f040: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f044: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f048: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28f048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f04c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f050: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f050u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f054: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x28f054u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f058: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f05c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x28f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f060: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28f060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f064: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f068: 0x12320006  beq         $s1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F068u;
    {
        const bool branch_taken_0x28f068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x28F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F068u;
        // 0x28f06c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f068) {
            ctx->pc = 0x28F084u;
            goto label_28f084;
        }
    }
    ctx->pc = 0x28F070u;
    // 0x28f070: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28f070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f074: 0xe6000650  swc1        $f0, 0x650($s0)
    ctx->pc = 0x28f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x28f078: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x28f078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x28f07c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f080: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x28f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_28f084:
    // 0x28f084: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x28f084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x28f088: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x28f088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x28f08c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f090: 0x0  nop
    ctx->pc = 0x28f090u;
    // NOP
    // 0x28f094: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28f094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f098: 0x0  nop
    ctx->pc = 0x28f098u;
    // NOP
    // 0x28f09c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x28F09Cu;
    {
        const bool branch_taken_0x28f09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f09c) {
            ctx->pc = 0x28F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F09Cu;
            // 0x28f0a0: 0x92020614  lbu         $v0, 0x614($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0B4u;
            goto label_28f0b4;
        }
    }
    ctx->pc = 0x28F0A4u;
    // 0x28f0a4: 0x9602062c  lhu         $v0, 0x62C($s0)
    ctx->pc = 0x28f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x28f0a8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x28f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x28f0ac: 0xa602062c  sh          $v0, 0x62C($s0)
    ctx->pc = 0x28f0acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 2));
label_28f0b0:
    // 0x28f0b0: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x28f0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
label_28f0b4:
    // 0x28f0b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F0B4u;
    {
        const bool branch_taken_0x28f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0b4) {
            ctx->pc = 0x28F0D8u;
            goto label_28f0d8;
        }
    }
    ctx->pc = 0x28F0BCu;
    // 0x28f0bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28f0bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f0c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0c8: 0xc0a3d6c  jal         func_28F5B0
    ctx->pc = 0x28F0C8u;
    SET_GPR_U32(ctx, 31, 0x28F0D0u);
    ctx->pc = 0x28F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0C8u;
    // 0x28f0cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F5B0u, 0x28F0C8u, 0x28F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0D0u;
label_28f0d0:
    // 0x28f0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F0D0u;
    {
        const bool branch_taken_0x28f0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D0u;
        // 0x28f0d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0d0) {
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28F0D8u;
label_28f0d8:
    // 0x28f0d8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28f0d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f0dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0e4: 0xc0a3c42  jal         func_28F108
    ctx->pc = 0x28F0E4u;
    SET_GPR_U32(ctx, 31, 0x28F0ECu);
    ctx->pc = 0x28F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0E4u;
    // 0x28f0e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F108u, 0x28F0E4u, 0x28F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0ECu;
label_28f0ec:
    // 0x28f0ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28f0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28f0f0:
    // 0x28f0f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28f0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f0f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28f0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f0f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28f0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0FCu;
        // 0x28f100: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F104u;
    // 0x28f104: 0x0  nop
    ctx->pc = 0x28f104u;
    // NOP
    ctx->pc = 0x28f108u;
}
