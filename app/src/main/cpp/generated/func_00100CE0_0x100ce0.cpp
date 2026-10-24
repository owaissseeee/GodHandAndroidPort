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

// Function: func_00100CE0
// Address: 0x100ce0 - 0x100ed8
void func_00100CE0_0x100ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100CE0_0x100ce0");
#endif

    switch (ctx->pc) {
        case 0x100d3cu: goto label_100d3c;
        case 0x100d60u: goto label_100d60;
        case 0x100d94u: goto label_100d94;
        case 0x100da0u: goto label_100da0;
        case 0x100e28u: goto label_100e28;
        case 0x100e68u: goto label_100e68;
        case 0x100ec0u: goto label_100ec0;
        default: break;
    }

    ctx->pc = 0x100ce0u;

    // 0x100ce0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x100ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x100ce4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x100ce8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x100ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x100cec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x100cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x100cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x100cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x100cf8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x100cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x100cfc: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x100cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x100d00: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x100D00u;
    {
        const bool branch_taken_0x100d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D00u;
        // 0x100d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d00) {
            ctx->pc = 0x100EB4u;
            goto label_100eb4;
        }
    }
    ctx->pc = 0x100D08u;
    // 0x100d08: 0x8e2320ac  lw          $v1, 0x20AC($s1)
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8364)));
    // 0x100d0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x100d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100d10: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x100d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x100d14: 0x8e2420d0  lw          $a0, 0x20D0($s1)
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8400)));
    // 0x100d18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x100d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x100d1c: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x100D1Cu;
    {
        const bool branch_taken_0x100d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D1Cu;
        // 0x100d20: 0xae2320ac  sw          $v1, 0x20AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d1c) {
            ctx->pc = 0x100EB0u;
            goto label_100eb0;
        }
    }
    ctx->pc = 0x100D24u;
    // 0x100d24: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x100d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x100d28: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100d2c: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x100D2Cu;
    {
        const bool branch_taken_0x100d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D2Cu;
        // 0x100d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d2c) {
            ctx->pc = 0x100EB4u;
            goto label_100eb4;
        }
    }
    ctx->pc = 0x100D34u;
    // 0x100d34: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x100D34u;
    SET_GPR_U32(ctx, 31, 0x100D3Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x100D34u, 0x100D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D3Cu;
label_100d3c:
    // 0x100d3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x100d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d40: 0x946203ac  lhu         $v0, 0x3AC($v1)
    ctx->pc = 0x100d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x100d44: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x100d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x100d48: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x100D48u;
    {
        const bool branch_taken_0x100d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d48) {
            ctx->pc = 0x100D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100D48u;
            // 0x100d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100EB4u;
            goto label_100eb4;
        }
    }
    ctx->pc = 0x100D50u;
    // 0x100d50: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x100d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x100d54: 0xc46c0104  lwc1        $f12, 0x104($v1)
    ctx->pc = 0x100d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x100d58: 0xc051e62  jal         func_147988
    ctx->pc = 0x100D58u;
    SET_GPR_U32(ctx, 31, 0x100D60u);
    ctx->pc = 0x100D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D58u;
    // 0x100d5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x100D58u, 0x100D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D60u;
label_100d60:
    // 0x100d60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x100d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x100d64: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x100d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x100d68: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x100d6c: 0xc440c730  lwc1        $f0, -0x38D0($v0)
    ctx->pc = 0x100d6cu;
    { uint32_t bits = FAST_READ32(0x3BC730u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100d70: 0xc4a1c738  lwc1        $f1, -0x38C8($a1)
    ctx->pc = 0x100d70u;
    { uint32_t bits = FAST_READ32(0x3BC738u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100d74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x100d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x100d78: 0xc462c734  lwc1        $f2, -0x38CC($v1)
    ctx->pc = 0x100d78u;
    { uint32_t bits = FAST_READ32(0x3BC734u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x100d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x100d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d80: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x100d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x100d84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x100d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d88: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x100d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x100d8c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x100D8Cu;
    SET_GPR_U32(ctx, 31, 0x100D94u);
    ctx->pc = 0x100D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D8Cu;
    // 0x100d90: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x100D8Cu, 0x100D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D94u;
label_100d94:
    // 0x100d94: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x100d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x100d98: 0xc04078a  jal         func_101E28
    ctx->pc = 0x100D98u;
    SET_GPR_U32(ctx, 31, 0x100DA0u);
    ctx->pc = 0x100D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D98u;
    // 0x100d9c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x100D98u, 0x100DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DA0u;
label_100da0:
    // 0x100da0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x100da0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x100da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x100da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100da8: 0x0  nop
    ctx->pc = 0x100da8u;
    // NOP
    // 0x100dac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x100dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100db0: 0x0  nop
    ctx->pc = 0x100db0u;
    // NOP
    // 0x100db4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x100DB4u;
    {
        const bool branch_taken_0x100db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x100DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DB4u;
        // 0x100db8: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x100db4) {
            ctx->pc = 0x100DF8u;
            goto label_100df8;
        }
    }
    ctx->pc = 0x100DBCu;
    // 0x100dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100dc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100dc4: 0x0  nop
    ctx->pc = 0x100dc4u;
    // NOP
    // 0x100dc8: 0x0  nop
    ctx->pc = 0x100dc8u;
    // NOP
    // 0x100dcc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x100dccu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x100dd0: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x100dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x100dd4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x100dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x100dd8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x100dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100ddc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x100ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x100de0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x100de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x100de4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x100de4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x100de8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x100de8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x100dec: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x100decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x100df0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x100df0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x100df4: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x100df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_100df8:
    // 0x100df8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x100dfc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x100dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e00: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x100e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x100e04: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x100e08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x100e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100e0c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x100e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x100e10: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x100e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100e14: 0xc60cc740  lwc1        $f12, -0x38C0($s0)
    ctx->pc = 0x100e14u;
    { uint32_t bits = FAST_READ32(0x3BC740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x100e18: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x100e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x100e1c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x100e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x100e20: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x100E20u;
    SET_GPR_U32(ctx, 31, 0x100E28u);
    ctx->pc = 0x100E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E20u;
    // 0x100e24: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x100E20u, 0x100E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E28u;
label_100e28:
    // 0x100e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100e2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100e30: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x100e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x100e34: 0xc443c744  lwc1        $f3, -0x38BC($v0)
    ctx->pc = 0x100e34u;
    { uint32_t bits = FAST_READ32(0x3BC744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x100e38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x100e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x100e3c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x100e3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x100e40: 0xc462c73c  lwc1        $f2, -0x38C4($v1)
    ctx->pc = 0x100e40u;
    { uint32_t bits = FAST_READ32(0x3BC73Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x100e44: 0xc600c740  lwc1        $f0, -0x38C0($s0)
    ctx->pc = 0x100e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100e48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x100e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x100e4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100e50: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x100e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x100e54: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x100e54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x100e58: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x100e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x100e5c: 0xe600c740  swc1        $f0, -0x38C0($s0)
    ctx->pc = 0x100e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294952768), bits); }
    // 0x100e60: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x100E60u;
    SET_GPR_U32(ctx, 31, 0x100E68u);
    ctx->pc = 0x100E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E60u;
    // 0x100e64: 0x4602a502  mul.s       $f20, $f20, $f2 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x100E60u, 0x100E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E68u;
label_100e68:
    // 0x100e68: 0xe600c740  swc1        $f0, -0x38C0($s0)
    ctx->pc = 0x100e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294952768), bits); }
    // 0x100e6c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x100e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100e70: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x100e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x100e74: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x100e74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x100e78: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x100e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x100e7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x100e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x100e80: 0x262320b0  addiu       $v1, $s1, 0x20B0
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8368));
    // 0x100e84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x100e88: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100E88u;
    {
        const bool branch_taken_0x100e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x100E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E88u;
        // 0x100e8c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e88) {
            ctx->pc = 0x100EA4u;
            goto label_100ea4;
        }
    }
    ctx->pc = 0x100E90u;
    // 0x100e90: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x100e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100e94: 0xe62020b0  swc1        $f0, 0x20B0($s1)
    ctx->pc = 0x100e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8368), bits); }
    // 0x100e98: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x100e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x100e9c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x100e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100ea0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x100ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_100ea4:
    // 0x100ea4: 0x8e2220ac  lw          $v0, 0x20AC($s1)
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8364)));
    // 0x100ea8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x100ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x100eac: 0xae2220ac  sw          $v0, 0x20AC($s1)
    ctx->pc = 0x100eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8364), GPR_U32(ctx, 2));
label_100eb0:
    // 0x100eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100eb4:
    // 0x100eb4: 0x24852050  addiu       $a1, $a0, 0x2050
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8272));
    // 0x100eb8: 0xc041004  jal         func_104010
    ctx->pc = 0x100EB8u;
    SET_GPR_U32(ctx, 31, 0x100EC0u);
    ctx->pc = 0x100EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EB8u;
    // 0x100ebc: 0x248604d0  addiu       $a2, $a0, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x100EB8u, 0x100EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EC0u;
label_100ec0:
    // 0x100ec0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x100ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x100ec4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x100ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100ec8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100ecc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x100eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x100ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ED0u;
        // 0x100ed4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100ED8u;
}
