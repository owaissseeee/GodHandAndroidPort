#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_00799CA0
// Address: 0x799ca0 - 0x79a0b0
void func_00799CA0_0x799ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CA0_0x799ca0");
#endif

    switch (ctx->pc) {
        case 0x799d10u: goto label_799d10;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d28u: goto label_799d28;
        case 0x799d60u: goto label_799d60;
        case 0x799d70u: goto label_799d70;
        case 0x799d7cu: goto label_799d7c;
        case 0x799db4u: goto label_799db4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dd4u: goto label_799dd4;
        case 0x799de8u: goto label_799de8;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e28u: goto label_799e28;
        case 0x799e48u: goto label_799e48;
        case 0x799e70u: goto label_799e70;
        case 0x799e88u: goto label_799e88;
        case 0x799e94u: goto label_799e94;
        case 0x799ea0u: goto label_799ea0;
        case 0x799eacu: goto label_799eac;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799ef8u: goto label_799ef8;
        case 0x799f00u: goto label_799f00;
        case 0x799f10u: goto label_799f10;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f40u: goto label_799f40;
        case 0x799f58u: goto label_799f58;
        case 0x799f64u: goto label_799f64;
        case 0x799f70u: goto label_799f70;
        case 0x799f7cu: goto label_799f7c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd4u: goto label_799fd4;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a000u: goto label_79a000;
        case 0x79a024u: goto label_79a024;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a050u: goto label_79a050;
        case 0x79a058u: goto label_79a058;
        case 0x79a070u: goto label_79a070;
        case 0x79a07cu: goto label_79a07c;
        default: break;
    }

    ctx->pc = 0x799ca0u;

    // 0x799ca0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799ca4: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x799ca8: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799cac: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799cb0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x799cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x799cb4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x799cb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799cbc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x799cc0: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799cc4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x799cc8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799ccc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x799cd0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x799cd4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x799cd8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799cdc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x799cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x799ce0: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x799ce4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x799ce8: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x799cec: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x799cf0: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799cf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x799cf8: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x799CF8u;
    {
        const bool branch_taken_0x799cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF8u;
        // 0x799cfc: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf8) {
            ctx->pc = 0x799DB4u;
            goto label_799db4;
        }
    }
    ctx->pc = 0x799D00u;
    // 0x799d00: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799d04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799D04u;
    {
        const bool branch_taken_0x799d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D04u;
        // 0x799d08: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d04) {
            ctx->pc = 0x799D1Cu;
            goto label_799d1c;
        }
    }
    ctx->pc = 0x799D0Cu;
    // 0x799d0c: 0x0  nop
    ctx->pc = 0x799d0cu;
    // NOP
label_799d10:
    // 0x799d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d14: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799D14u;
    SET_GPR_U32(ctx, 31, 0x799D1Cu);
    ctx->pc = 0x799D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D14u;
    // 0x799d18: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D14u, 0x799D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D1Cu;
label_799d1c:
    // 0x799d1c: 0x26048658  addiu       $a0, $s0, -0x79A8
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x799d20: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d2c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799d30: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d10;
        }
    }
    ctx->pc = 0x799D38u;
    // 0x799d38: 0x8e048658  lw          $a0, -0x79A8($s0)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x799d3c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799d44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799d48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799d4c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799d50: 0x2650ea60  addiu       $s0, $s2, -0x15A0
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799d54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799d58: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799D58u;
    SET_GPR_U32(ctx, 31, 0x799D60u);
    ctx->pc = 0x799D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D58u;
    // 0x799d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799D58u, 0x799D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D60u;
label_799d60:
    // 0x799d60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d68: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d74: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799D74u;
    SET_GPR_U32(ctx, 31, 0x799D7Cu);
    ctx->pc = 0x799D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D74u;
    // 0x799d78: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799D74u, 0x799D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D7Cu;
label_799d7c:
    // 0x799d7c: 0x3c01bfbd  lui         $at, 0xBFBD
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49085 << 16));
    // 0x799d80: 0x3421e44e  ori         $at, $at, 0xE44E
    ctx->pc = 0x799d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58446);
    // 0x799d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d8c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799d90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d94: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x799d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x799d98: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x799d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799da4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x799da8: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x799da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x799dac: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799DACu;
    SET_GPR_U32(ctx, 31, 0x799DB4u);
    ctx->pc = 0x799DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DACu;
    // 0x799db0: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799DACu, 0x799DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB4u;
label_799db4:
    // 0x799db4: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799db8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799dbc: 0x26306ab0  addiu       $s0, $s1, 0x6AB0
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
    // 0x799dc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DC0u;
    SET_GPR_U32(ctx, 31, 0x799DC8u);
    ctx->pc = 0x799DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC0u;
    // 0x799dc4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DC0u, 0x799DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC8u;
label_799dc8:
    // 0x799dc8: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799dcc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799DCCu;
    SET_GPR_U32(ctx, 31, 0x799DD4u);
    ctx->pc = 0x799DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DCCu;
    // 0x799dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799DCCu, 0x799DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD4u;
label_799dd4:
    // 0x799dd4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x799dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ddc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799de0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799DE0u;
    SET_GPR_U32(ctx, 31, 0x799DE8u);
    ctx->pc = 0x799DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE0u;
    // 0x799de4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799DE0u, 0x799DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE8u;
label_799de8:
    // 0x799de8: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x799dec: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x799df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799df4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x799df8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799e04: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E04u;
    SET_GPR_U32(ctx, 31, 0x799E0Cu);
    ctx->pc = 0x799E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E04u;
    // 0x799e08: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E04u, 0x799E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E0Cu;
label_799e0c:
    // 0x799e0c: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x799e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e20: 0xc1e6888  jal         func_79A220
    ctx->pc = 0x799E20u;
    SET_GPR_U32(ctx, 31, 0x799E28u);
    ctx->pc = 0x799E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E20u;
    // 0x799e24: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A220u, 0x799E20u, 0x799E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E28u;
label_799e28:
    // 0x799e28: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799e2c: 0x2651ea60  addiu       $s1, $s2, -0x15A0
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799e30: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799e34: 0x245264f0  addiu       $s2, $v0, 0x64F0
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x799e38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x799e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e40: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799E40u;
    SET_GPR_U32(ctx, 31, 0x799E48u);
    ctx->pc = 0x799E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E40u;
    // 0x799e44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799E40u, 0x799E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E48u;
label_799e48:
    // 0x799e48: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x799e4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799e50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799e54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e58: 0x2453ee00  addiu       $s3, $v0, -0x1200
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x799e5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x799e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799e60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799e68: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799E68u;
    SET_GPR_U32(ctx, 31, 0x799E70u);
    ctx->pc = 0x799E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E68u;
    // 0x799e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799E68u, 0x799E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E70u;
label_799e70:
    // 0x799e70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799e74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e80: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e8c: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e98: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799E98u;
    SET_GPR_U32(ctx, 31, 0x799EA0u);
    ctx->pc = 0x799E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E98u;
    // 0x799e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799E98u, 0x799EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA0u;
label_799ea0:
    // 0x799ea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea4: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799EA4u;
    SET_GPR_U32(ctx, 31, 0x799EACu);
    ctx->pc = 0x799EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA4u;
    // 0x799ea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799EA4u, 0x799EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EACu;
label_799eac:
    // 0x799eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799eb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ebc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec8: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x799ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799edc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799EE0u;
    SET_GPR_U32(ctx, 31, 0x799EE8u);
    ctx->pc = 0x799EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE0u;
    // 0x799ee4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799EE0u, 0x799EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE8u;
label_799ee8:
    // 0x799ee8: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799eec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799ef0: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799EF0u;
    SET_GPR_U32(ctx, 31, 0x799EF8u);
    ctx->pc = 0x799EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF0u;
    // 0x799ef4: 0x2445abc0  addiu       $a1, $v0, -0x5440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799EF0u, 0x799EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f08: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x799f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799f20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799f24: 0xc1e6900  jal         func_79A400
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A400u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x799f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799F38u;
    SET_GPR_U32(ctx, 31, 0x799F40u);
    ctx->pc = 0x799F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F38u;
    // 0x799f3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799F38u, 0x799F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799f40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799f44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f50: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f5c: 0xc0a581c  jal         func_296070
    ctx->pc = 0x799F5Cu;
    SET_GPR_U32(ctx, 31, 0x799F64u);
    ctx->pc = 0x799F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F5Cu;
    // 0x799f60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x799F5Cu, 0x799F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f68: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799f70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799f74: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799F74u;
    SET_GPR_U32(ctx, 31, 0x799F7Cu);
    ctx->pc = 0x799F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F74u;
    // 0x799f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F74u, 0x799F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F7Cu;
label_799f7c:
    // 0x799f7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f80: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x799f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f98: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799F98u;
    SET_GPR_U32(ctx, 31, 0x799FA0u);
    ctx->pc = 0x799F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F98u;
    // 0x799f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799F98u, 0x799FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799fa4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799fa8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799FA8u;
    SET_GPR_U32(ctx, 31, 0x799FB0u);
    ctx->pc = 0x799FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA8u;
    // 0x799fac: 0x2445abc8  addiu       $a1, $v0, -0x5438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799FA8u, 0x799FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB0u;
label_799fb0:
    // 0x799fb0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799FB0u;
    SET_GPR_U32(ctx, 31, 0x799FB8u);
    ctx->pc = 0x799FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB0u;
    // 0x799fb4: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799FB0u, 0x799FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB8u;
label_799fb8:
    // 0x799fb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799fbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799fc0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799fc4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799FC4u;
    SET_GPR_U32(ctx, 31, 0x799FCCu);
    ctx->pc = 0x799FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC4u;
    // 0x799fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799FC4u, 0x799FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FCCu;
label_799fcc:
    // 0x799fcc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799FCCu;
    SET_GPR_U32(ctx, 31, 0x799FD4u);
    ctx->pc = 0x799FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FCCu;
    // 0x799fd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799FCCu, 0x799FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD4u;
label_799fd4:
    // 0x799fd4: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x799fd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799fec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799ff0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x799FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF8u;
    // 0x799ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x79a004: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a010: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a018: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a01c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A01Cu;
    SET_GPR_U32(ctx, 31, 0x79A024u);
    ctx->pc = 0x79A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A01Cu;
    // 0x79a020: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A01Cu, 0x79A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A024u;
    SET_GPR_U32(ctx, 31, 0x79A02Cu);
    ctx->pc = 0x79A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A024u;
    // 0x79a028: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A024u, 0x79A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A02Cu;
label_79a02c:
    // 0x79a02c: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x79a030: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a034: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a03c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a044: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a048: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0xa3a60030  sb          $a2, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A050u;
    SET_GPR_U32(ctx, 31, 0x79A058u);
    ctx->pc = 0x79A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A050u;
    // 0x79a054: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A050u, 0x79A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0x8fc3ad00  lw          $v1, -0x5300($fp)
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294946048)));
    // 0x79a05c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a064: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a068: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A068u;
    SET_GPR_U32(ctx, 31, 0x79A070u);
    ctx->pc = 0x79A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A068u;
    // 0x79a06c: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A068u, 0x79A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x79a074: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A074u;
    SET_GPR_U32(ctx, 31, 0x79A07Cu);
    ctx->pc = 0x79A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A074u;
    // 0x79a078: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A074u, 0x79A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A07Cu;
label_79a07c:
    // 0x79a07c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a080: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79a080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a084: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79a084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a088: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79a088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a08c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79a08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a090: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79a090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a094: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79a094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a098: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79a098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a09c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79a09cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a0a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a0a4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x79a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0B0u;
}
} // namespace gh_r304
