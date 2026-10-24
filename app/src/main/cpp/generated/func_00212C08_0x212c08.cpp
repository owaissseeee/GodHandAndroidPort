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

// Function: func_00212C08
// Address: 0x212c08 - 0x2130c8
void func_00212C08_0x212c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00212C08_0x212c08");
#endif

    switch (ctx->pc) {
        case 0x212c28u: goto label_212c28;
        case 0x212cd4u: goto label_212cd4;
        case 0x212d50u: goto label_212d50;
        case 0x212d7cu: goto label_212d7c;
        case 0x212d90u: goto label_212d90;
        case 0x212da0u: goto label_212da0;
        case 0x212db0u: goto label_212db0;
        case 0x212ddcu: goto label_212ddc;
        case 0x212e04u: goto label_212e04;
        case 0x212e58u: goto label_212e58;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e80u: goto label_212e80;
        case 0x212e90u: goto label_212e90;
        case 0x212ebcu: goto label_212ebc;
        case 0x212edcu: goto label_212edc;
        case 0x212ef4u: goto label_212ef4;
        case 0x212f14u: goto label_212f14;
        case 0x212f38u: goto label_212f38;
        case 0x212f40u: goto label_212f40;
        case 0x212f58u: goto label_212f58;
        case 0x212f64u: goto label_212f64;
        case 0x212f74u: goto label_212f74;
        case 0x212fa0u: goto label_212fa0;
        case 0x212fdcu: goto label_212fdc;
        case 0x212fe8u: goto label_212fe8;
        case 0x212ff4u: goto label_212ff4;
        case 0x21302cu: goto label_21302c;
        case 0x213058u: goto label_213058;
        case 0x213078u: goto label_213078;
        case 0x213088u: goto label_213088;
        case 0x2130a0u: goto label_2130a0;
        case 0x2130acu: goto label_2130ac;
        default: break;
    }

    ctx->pc = 0x212c08u;

    // 0x212c08: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x212c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x212c0c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x212c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x212c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c14: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x212c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x212c18: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x212c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x212c1c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x212c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x212c20: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x212C20u;
    SET_GPR_U32(ctx, 31, 0x212C28u);
    ctx->pc = 0x212C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C20u;
    // 0x212c24: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x212C20u, 0x212C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C28u;
label_212c28:
    // 0x212c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x212c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x212c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x212c38: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x212c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x212c3c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x212c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x212c40: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x212c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x212c44: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x212c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212c48: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x212c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212c4c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x212c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212c50: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x212c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x212c54: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x212c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x212c58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x212c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212c5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x212c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212c60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x212c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x212c64: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212c68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x212c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x212c6c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x212c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x212c70: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x212c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x212c74: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x212c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x212c78: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x212c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x212c7c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x212c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x212c80: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x212c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x212c84: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x212c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x212c88: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x212c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212c8c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x212c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x212c90: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x212c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c94: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x212c94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x212c98: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x212c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x212c9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x212c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x212ca0: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x212ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x212ca4: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x212ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x212ca8: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x212CA8u;
    {
        const bool branch_taken_0x212ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CA8u;
        // 0x212cac: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ca8) {
            ctx->pc = 0x2130ACu;
            goto label_2130ac;
        }
    }
    ctx->pc = 0x212CB0u;
    // 0x212cb0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x212cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x212cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x212cb8: 0x244252b0  addiu       $v0, $v0, 0x52B0
    ctx->pc = 0x212cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x212cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212cc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212cc4: 0x800008  jr          $a0
    ctx->pc = 0x212CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212CCCu: goto label_212ccc;
            case 0x212D88u: goto label_212d88;
            case 0x212DA8u: goto label_212da8;
            case 0x212DF0u: goto label_212df0;
            case 0x212E88u: goto label_212e88;
            case 0x212F00u: goto label_212f00;
            case 0x212F6Cu: goto label_212f6c;
            case 0x212FC0u: goto label_212fc0;
            case 0x213024u: goto label_213024;
            case 0x213064u: goto label_213064;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x212CCCu;
label_212ccc:
    // 0x212ccc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x212CCCu;
    SET_GPR_U32(ctx, 31, 0x212CD4u);
    ctx->pc = 0x212CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CCCu;
    // 0x212cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x212CCCu, 0x212CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CD4u;
label_212cd4:
    // 0x212cd4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x212cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x212cd8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x212cd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x212cdc: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x212cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x212ce0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x212CE0u;
    {
        const bool branch_taken_0x212ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CE0u;
        // 0x212ce4: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ce0) {
            ctx->pc = 0x212D00u;
            goto label_212d00;
        }
    }
    ctx->pc = 0x212CE8u;
    // 0x212ce8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x212CE8u;
    {
        const bool branch_taken_0x212ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CE8u;
        // 0x212cec: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ce8) {
            ctx->pc = 0x212D0Cu;
            goto label_212d0c;
        }
    }
    ctx->pc = 0x212CF0u;
    // 0x212cf0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x212CF0u;
    {
        const bool branch_taken_0x212cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CF0u;
        // 0x212cf4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cf0) {
            ctx->pc = 0x212D58u;
            goto label_212d58;
        }
    }
    ctx->pc = 0x212CF8u;
    // 0x212cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x212CF8u;
    {
        const bool branch_taken_0x212cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CF8u;
        // 0x212cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cf8) {
            ctx->pc = 0x212D14u;
            goto label_212d14;
        }
    }
    ctx->pc = 0x212D00u;
label_212d00:
    // 0x212d00: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x212d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x212d04: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212D04u;
    {
        const bool branch_taken_0x212d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x212d04) {
            ctx->pc = 0x212D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D04u;
            // 0x212d08: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D2Cu;
            goto label_212d2c;
        }
    }
    ctx->pc = 0x212D0Cu;
label_212d0c:
    // 0x212d0c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x212d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212d14:
    // 0x212d14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212d18: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212d1c: 0x8c451d08  lw          $a1, 0x1D08($v0)
    ctx->pc = 0x212d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
    // 0x212d20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x212D24u;
    {
        const bool branch_taken_0x212d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D24u;
        // 0x212d28: 0x8c461d0c  lw          $a2, 0x1D0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d24) {
            ctx->pc = 0x212D44u;
            goto label_212d44;
        }
    }
    ctx->pc = 0x212D2Cu;
label_212d2c:
    // 0x212d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212d34: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x212d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212d38: 0x8c452e4c  lw          $a1, 0x2E4C($v0)
    ctx->pc = 0x212d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x212d3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d40: 0x8c462e50  lw          $a2, 0x2E50($v0)
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
label_212d44:
    // 0x212d44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x212d48: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x212D48u;
    SET_GPR_U32(ctx, 31, 0x212D50u);
    ctx->pc = 0x212D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D48u;
    // 0x212d4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212D48u, 0x212D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D50u;
label_212d50:
    // 0x212d50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x212D50u;
    {
        const bool branch_taken_0x212d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D50u;
        // 0x212d54: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d50) {
            ctx->pc = 0x212D80u;
            goto label_212d80;
        }
    }
    ctx->pc = 0x212D58u;
label_212d58:
    // 0x212d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212d60: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212d64: 0x8c4534f4  lw          $a1, 0x34F4($v0)
    ctx->pc = 0x212d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13556)));
    // 0x212d68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212d68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d6c: 0x8c4634f8  lw          $a2, 0x34F8($v0)
    ctx->pc = 0x212d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13560)));
    // 0x212d70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x212d74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x212D74u;
    SET_GPR_U32(ctx, 31, 0x212D7Cu);
    ctx->pc = 0x212D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D74u;
    // 0x212d78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212D74u, 0x212D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D7Cu;
label_212d7c:
    // 0x212d7c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x212d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_212d80:
    // 0x212d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x212d84: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x212d84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_212d88:
    // 0x212d88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x212D88u;
    SET_GPR_U32(ctx, 31, 0x212D90u);
    ctx->pc = 0x212D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D88u;
    // 0x212d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x212D88u, 0x212D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D90u;
label_212d90:
    // 0x212d90: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x212D90u;
    {
        const bool branch_taken_0x212d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d90) {
            ctx->pc = 0x212F44u;
            goto label_212f44;
        }
    }
    ctx->pc = 0x212D98u;
    // 0x212d98: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x212D98u;
    SET_GPR_U32(ctx, 31, 0x212DA0u);
    ctx->pc = 0x212D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D98u;
    // 0x212d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x212D98u, 0x212DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DA0u;
label_212da0:
    // 0x212da0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x212DA0u;
    {
        const bool branch_taken_0x212da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212da0) {
            ctx->pc = 0x212F44u;
            goto label_212f44;
        }
    }
    ctx->pc = 0x212DA8u;
label_212da8:
    // 0x212da8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x212DA8u;
    SET_GPR_U32(ctx, 31, 0x212DB0u);
    ctx->pc = 0x212DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DA8u;
    // 0x212dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x212DA8u, 0x212DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DB0u;
label_212db0:
    // 0x212db0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x212db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x212db4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x212db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x212db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dc0: 0x8c651d78  lw          $a1, 0x1D78($v1)
    ctx->pc = 0x212dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7544)));
    // 0x212dc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dc8: 0x8c661d7c  lw          $a2, 0x1D7C($v1)
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7548)));
    // 0x212dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dd0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x212dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x212dd4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x212DD4u;
    SET_GPR_U32(ctx, 31, 0x212DDCu);
    ctx->pc = 0x212DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DD4u;
    // 0x212dd8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212DD4u, 0x212DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DDCu;
label_212ddc:
    // 0x212ddc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x212ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x212de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212de4: 0xa2230616  sb          $v1, 0x616($s1)
    ctx->pc = 0x212de4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 3));
    // 0x212de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x212dec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x212decu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_212df0:
    // 0x212df0: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x212df0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x212df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212df8: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x212df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x212dfc: 0xc04e38e  jal         func_138E38
    ctx->pc = 0x212DFCu;
    SET_GPR_U32(ctx, 31, 0x212E04u);
    ctx->pc = 0x212E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DFCu;
    // 0x212e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E38u, 0x212DFCu, 0x212E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E04u;
label_212e04:
    // 0x212e04: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x212e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x212e08: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x212e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212e0c: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x212e10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x212e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x212e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212E14u;
    {
        const bool branch_taken_0x212e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E14u;
        // 0x212e18: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e14) {
            ctx->pc = 0x212E28u;
            goto label_212e28;
        }
    }
    ctx->pc = 0x212E1Cu;
    // 0x212e1c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x212e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x212e20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212E20u;
    {
        const bool branch_taken_0x212e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E20u;
        // 0x212e24: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e20) {
            ctx->pc = 0x212E2Cu;
            goto label_212e2c;
        }
    }
    ctx->pc = 0x212E28u;
label_212e28:
    // 0x212e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x212e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212e2c:
    // 0x212e2c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x212e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x212e30: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x212e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x212e34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x212e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x212e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212E38u;
    {
        const bool branch_taken_0x212e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E38u;
        // 0x212e3c: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e38) {
            ctx->pc = 0x212E4Cu;
            goto label_212e4c;
        }
    }
    ctx->pc = 0x212E40u;
    // 0x212e40: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x212e44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212E44u;
    {
        const bool branch_taken_0x212e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E44u;
        // 0x212e48: 0x8c470070  lw          $a3, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e44) {
            ctx->pc = 0x212E50u;
            goto label_212e50;
        }
    }
    ctx->pc = 0x212E4Cu;
label_212e4c:
    // 0x212e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212e50:
    // 0x212e50: 0xc04e6da  jal         func_139B68
    ctx->pc = 0x212E50u;
    SET_GPR_U32(ctx, 31, 0x212E58u);
    ctx->pc = 0x212E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E50u;
    // 0x212e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B68u, 0x212E50u, 0x212E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E58u;
label_212e58:
    // 0x212e58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x212e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x212e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x212E64u;
    SET_GPR_U32(ctx, 31, 0x212E6Cu);
    ctx->pc = 0x212E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E64u;
    // 0x212e68: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x212E64u, 0x212E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E6Cu;
label_212e6c:
    // 0x212e6c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x212E6Cu;
    {
        const bool branch_taken_0x212e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E6Cu;
        // 0x212e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e6c) {
            ctx->pc = 0x212F44u;
            goto label_212f44;
        }
    }
    ctx->pc = 0x212E74u;
    // 0x212e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e78: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x212E78u;
    SET_GPR_U32(ctx, 31, 0x212E80u);
    ctx->pc = 0x212E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E78u;
    // 0x212e7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x212E78u, 0x212E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E80u;
label_212e80:
    // 0x212e80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x212E80u;
    {
        const bool branch_taken_0x212e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212e80) {
            ctx->pc = 0x212F38u;
            goto label_212f38;
        }
    }
    ctx->pc = 0x212E88u;
label_212e88:
    // 0x212e88: 0xc09d91a  jal         func_276468
    ctx->pc = 0x212E88u;
    SET_GPR_U32(ctx, 31, 0x212E90u);
    ctx->pc = 0x212E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E88u;
    // 0x212e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x212E88u, 0x212E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E90u;
label_212e90:
    // 0x212e90: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x212e94: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x212e94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x212e98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ea0: 0x8c652ee4  lw          $a1, 0x2EE4($v1)
    ctx->pc = 0x212ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12004)));
    // 0x212ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ea8: 0x8c662ee8  lw          $a2, 0x2EE8($v1)
    ctx->pc = 0x212ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12008)));
    // 0x212eac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212eb0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x212eb4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x212EB4u;
    SET_GPR_U32(ctx, 31, 0x212EBCu);
    ctx->pc = 0x212EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EB4u;
    // 0x212eb8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212EB4u, 0x212EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EBCu;
label_212ebc:
    // 0x212ebc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x212ec0: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x212ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x212ec4: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x212ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x212ec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x212ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ed0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212ed4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x212ED4u;
    SET_GPR_U32(ctx, 31, 0x212EDCu);
    ctx->pc = 0x212ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212ED4u;
    // 0x212ed8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x212ED4u, 0x212EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EDCu;
label_212edc:
    // 0x212edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212ee0: 0x8e2406f4  lw          $a0, 0x6F4($s1)
    ctx->pc = 0x212ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x212ee4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212EE4u;
    {
        const bool branch_taken_0x212ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0xa2220616  sb          $v0, 0x616($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ee4) {
            ctx->pc = 0x212EF4u;
            goto label_212ef4;
        }
    }
    ctx->pc = 0x212EECu;
    // 0x212eec: 0xc0741ec  jal         func_1D07B0
    ctx->pc = 0x212EECu;
    SET_GPR_U32(ctx, 31, 0x212EF4u);
    ctx->pc = 0x1D07B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07B0u, 0x212EECu, 0x212EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EF4u;
label_212ef4:
    // 0x212ef4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x212ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x212ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x212efc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x212efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_212f00:
    // 0x212f00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x212f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x212F0Cu;
    SET_GPR_U32(ctx, 31, 0x212F14u);
    ctx->pc = 0x212F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F0Cu;
    // 0x212f10: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x212F0Cu, 0x212F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F14u;
label_212f14:
    // 0x212f14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212F14u;
    {
        const bool branch_taken_0x212f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F14u;
        // 0x212f18: 0x2404007b  addiu       $a0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f14) {
            ctx->pc = 0x212F44u;
            goto label_212f44;
        }
    }
    ctx->pc = 0x212F1Cu;
    // 0x212f1c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x212f20: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x212f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x212f24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x212f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f28: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x212f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212f30: 0xc0c194a  jal         func_306528
    ctx->pc = 0x212F30u;
    SET_GPR_U32(ctx, 31, 0x212F38u);
    ctx->pc = 0x212F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F30u;
    // 0x212f34: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x212F30u, 0x212F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F38u;
label_212f38:
    // 0x212f38: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x212F38u;
    SET_GPR_U32(ctx, 31, 0x212F40u);
    ctx->pc = 0x212F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F38u;
    // 0x212f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x212F38u, 0x212F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F40u;
label_212f40:
    // 0x212f40: 0xa2200616  sb          $zero, 0x616($s1)
    ctx->pc = 0x212f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 0));
label_212f44:
    // 0x212f44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212f48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x212f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f50: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x212F50u;
    SET_GPR_U32(ctx, 31, 0x212F58u);
    ctx->pc = 0x212F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F50u;
    // 0x212f54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x212F50u, 0x212F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F58u;
label_212f58:
    // 0x212f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f5c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x212F5Cu;
    SET_GPR_U32(ctx, 31, 0x212F64u);
    ctx->pc = 0x212F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F5Cu;
    // 0x212f60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x212F5Cu, 0x212F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F64u;
label_212f64:
    // 0x212f64: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x212F64u;
    {
        const bool branch_taken_0x212f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F64u;
        // 0x212f68: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f64) {
            ctx->pc = 0x2130B0u;
            goto label_2130b0;
        }
    }
    ctx->pc = 0x212F6Cu;
label_212f6c:
    // 0x212f6c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x212F6Cu;
    SET_GPR_U32(ctx, 31, 0x212F74u);
    ctx->pc = 0x212F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F6Cu;
    // 0x212f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x212F6Cu, 0x212F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F74u;
label_212f74:
    // 0x212f74: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x212f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x212f78: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x212f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f84: 0x8c653418  lw          $a1, 0x3418($v1)
    ctx->pc = 0x212f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13336)));
    // 0x212f88: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212f8c: 0x8c66341c  lw          $a2, 0x341C($v1)
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13340)));
    // 0x212f90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x212f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f94: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x212f98: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x212F98u;
    SET_GPR_U32(ctx, 31, 0x212FA0u);
    ctx->pc = 0x212F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F98u;
    // 0x212f9c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212F98u, 0x212FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FA0u;
label_212fa0:
    // 0x212fa0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x212fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x212fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212fa8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x212fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x212fb4: 0xa2230616  sb          $v1, 0x616($s1)
    ctx->pc = 0x212fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 3));
    // 0x212fb8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x212fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x212fbc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x212fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_212fc0:
    // 0x212fc0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x212fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x212fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212fd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x212fd4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x212FD4u;
    SET_GPR_U32(ctx, 31, 0x212FDCu);
    ctx->pc = 0x212FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FD4u;
    // 0x212fd8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x212FD4u, 0x212FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FDCu;
label_212fdc:
    // 0x212fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fe0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x212FE0u;
    SET_GPR_U32(ctx, 31, 0x212FE8u);
    ctx->pc = 0x212FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FE0u;
    // 0x212fe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x212FE0u, 0x212FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FE8u;
label_212fe8:
    // 0x212fe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x212fe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x212fec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x212FECu;
    SET_GPR_U32(ctx, 31, 0x212FF4u);
    ctx->pc = 0x212FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FECu;
    // 0x212ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x212FECu, 0x212FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FF4u;
label_212ff4:
    // 0x212ff4: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x212ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ff8: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x212ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ffc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x212ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213000: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x213000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x213004: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x213004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213008: 0x0  nop
    ctx->pc = 0x213008u;
    // NOP
    // 0x21300c: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x21300Cu;
    {
        const bool branch_taken_0x21300c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21300Cu;
        // 0x213010: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21300c) {
            ctx->pc = 0x2130ACu;
            goto label_2130ac;
        }
    }
    ctx->pc = 0x213014u;
    // 0x213014: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x213014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x213018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21301c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x21301Cu;
    {
        const bool branch_taken_0x21301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21301Cu;
        // 0x213020: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21301c) {
            ctx->pc = 0x2130ACu;
            goto label_2130ac;
        }
    }
    ctx->pc = 0x213024u;
label_213024:
    // 0x213024: 0xc09d91a  jal         func_276468
    ctx->pc = 0x213024u;
    SET_GPR_U32(ctx, 31, 0x21302Cu);
    ctx->pc = 0x213028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213024u;
    // 0x213028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x213024u, 0x21302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21302Cu;
label_21302c:
    // 0x21302c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x21302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213030: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x213030u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x213034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21303c: 0x8c653420  lw          $a1, 0x3420($v1)
    ctx->pc = 0x21303cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13344)));
    // 0x213040: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x213040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x213044: 0x8c663424  lw          $a2, 0x3424($v1)
    ctx->pc = 0x213044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13348)));
    // 0x213048: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21304c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x213050: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x213050u;
    SET_GPR_U32(ctx, 31, 0x213058u);
    ctx->pc = 0x213054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213050u;
    // 0x213054: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x213050u, 0x213058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213058u;
label_213058:
    // 0x213058: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x213058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21305c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x213060: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x213060u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_213064:
    // 0x213064: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x213064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x213068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21306c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213070: 0xc055f06  jal         func_157C18
    ctx->pc = 0x213070u;
    SET_GPR_U32(ctx, 31, 0x213078u);
    ctx->pc = 0x213074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213070u;
    // 0x213074: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x213070u, 0x213078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213078u;
label_213078:
    // 0x213078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213078u;
    {
        const bool branch_taken_0x213078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213078) {
            ctx->pc = 0x21308Cu;
            goto label_21308c;
        }
    }
    ctx->pc = 0x213080u;
    // 0x213080: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x213080u;
    SET_GPR_U32(ctx, 31, 0x213088u);
    ctx->pc = 0x213084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213080u;
    // 0x213084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x213080u, 0x213088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213088u;
label_213088:
    // 0x213088: 0xa2200616  sb          $zero, 0x616($s1)
    ctx->pc = 0x213088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 0));
label_21308c:
    // 0x21308c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213090: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213098: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x213098u;
    SET_GPR_U32(ctx, 31, 0x2130A0u);
    ctx->pc = 0x21309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213098u;
    // 0x21309c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x213098u, 0x2130A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130A0u;
label_2130a0:
    // 0x2130a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2130a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2130A4u;
    SET_GPR_U32(ctx, 31, 0x2130ACu);
    ctx->pc = 0x2130A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130A4u;
    // 0x2130a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2130A4u, 0x2130ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130ACu;
label_2130ac:
    // 0x2130ac: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2130acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2130b0:
    // 0x2130b0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2130b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2130b4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2130b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2130b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2130b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2130bc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2130bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2130c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2130C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130C0u;
        // 0x2130c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2130C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2130C8u;
}
