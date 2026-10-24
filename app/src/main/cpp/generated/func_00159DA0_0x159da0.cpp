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

// Function: func_00159DA0
// Address: 0x159da0 - 0x159fc8
void func_00159DA0_0x159da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00159DA0_0x159da0");
#endif

    switch (ctx->pc) {
        case 0x159df8u: goto label_159df8;
        case 0x159e08u: goto label_159e08;
        case 0x159e5cu: goto label_159e5c;
        default: break;
    }

    ctx->pc = 0x159da0u;

    // 0x159da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159da8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x159da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159dac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159db4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x159db4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x159db8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x159db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x159dbc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x159dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159dc0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159DC0u;
    {
        const bool branch_taken_0x159dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DC0u;
        // 0x159dc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dc0) {
            ctx->pc = 0x159DECu;
            goto label_159dec;
        }
    }
    ctx->pc = 0x159DC8u;
    // 0x159dc8: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x159DC8u;
    {
        const bool branch_taken_0x159dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159dc8) {
            ctx->pc = 0x159DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159DC8u;
            // 0x159dcc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159FB0u;
            goto label_159fb0;
        }
    }
    ctx->pc = 0x159DD0u;
    // 0x159dd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159dd4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x159DD4u;
    {
        const bool branch_taken_0x159dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DD4u;
        // 0x159dd8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dd4) {
            ctx->pc = 0x159EE8u;
            goto label_159ee8;
        }
    }
    ctx->pc = 0x159DDCu;
    // 0x159ddc: 0x5062006a  beql        $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x159DDCu;
    {
        const bool branch_taken_0x159ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159ddc) {
            ctx->pc = 0x159DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159DDCu;
            // 0x159de0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159F88u;
            goto label_159f88;
        }
    }
    ctx->pc = 0x159DE4u;
    // 0x159de4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x159DE4u;
    {
        const bool branch_taken_0x159de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DE4u;
        // 0x159de8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159de4) {
            ctx->pc = 0x159FB0u;
            goto label_159fb0;
        }
    }
    ctx->pc = 0x159DECu;
label_159dec:
    // 0x159dec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159df0: 0xc055942  jal         func_156508
    ctx->pc = 0x159DF0u;
    SET_GPR_U32(ctx, 31, 0x159DF8u);
    ctx->pc = 0x159DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DF0u;
    // 0x159df4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156508u, 0x159DF0u, 0x159DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DF8u;
label_159df8:
    // 0x159df8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x159df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159dfc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x159dfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x159e00: 0xc055942  jal         func_156508
    ctx->pc = 0x159E00u;
    SET_GPR_U32(ctx, 31, 0x159E08u);
    ctx->pc = 0x159E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E00u;
    // 0x159e04: 0x94440002  lhu         $a0, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156508u, 0x159E00u, 0x159E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E08u;
label_159e08:
    // 0x159e08: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x159e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159e0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x159e0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x159e10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159e14: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x159e14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x159e18: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x159e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x159e1c: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x159e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x159e20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x159e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x159e24: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x159e24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159e28: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x159e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x159e2c: 0x94c2000a  lhu         $v0, 0xA($a2)
    ctx->pc = 0x159e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x159e30: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x159e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x159e34: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x159e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159e38: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x159e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159e3c: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x159e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x159e40: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x159e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x159e44: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x159e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e48: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x159e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e4c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x159e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e50: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x159e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159e54: 0xc055954  jal         func_156550
    ctx->pc = 0x159E54u;
    SET_GPR_U32(ctx, 31, 0x159E5Cu);
    ctx->pc = 0x159E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E54u;
    // 0x159e58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156550u, 0x159E54u, 0x159E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E5Cu;
label_159e5c:
    // 0x159e5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x159e60: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x159e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159e64: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x159e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x159e68: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x159e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x159e6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x159e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e74: 0x0  nop
    ctx->pc = 0x159e74u;
    // NOP
    // 0x159e78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159e7c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x159e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159e80: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x159e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159e84: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x159e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x159e88: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x159e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x159e8c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x159e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x159e90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x159e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x159e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e98: 0x0  nop
    ctx->pc = 0x159e98u;
    // NOP
    // 0x159e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159ea0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159ea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159ea8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x159ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x159eac: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x159eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x159eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159eb4: 0x0  nop
    ctx->pc = 0x159eb4u;
    // NOP
    // 0x159eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159ebc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x159ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x159ec0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x159ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x159ec4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x159ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x159ec8: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x159ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x159ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ed0: 0x0  nop
    ctx->pc = 0x159ed0u;
    // NOP
    // 0x159ed4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159ed8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x159ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159edc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x159edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x159ee0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x159EE0u;
    {
        const bool branch_taken_0x159ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EE0u;
        // 0x159ee4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ee0) {
            ctx->pc = 0x159FACu;
            goto label_159fac;
        }
    }
    ctx->pc = 0x159EE8u;
label_159ee8:
    // 0x159ee8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x159eec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x159eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159ef0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x159ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x159ef4: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x159ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x159ef8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x159ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f00: 0x0  nop
    ctx->pc = 0x159f00u;
    // NOP
    // 0x159f04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x159f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f14: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x159f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x159f18: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x159f18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x159f1c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x159f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f24: 0x0  nop
    ctx->pc = 0x159f24u;
    // NOP
    // 0x159f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f2c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x159f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f38: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x159f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x159f3c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x159f3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x159f40: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x159f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f48: 0x0  nop
    ctx->pc = 0x159f48u;
    // NOP
    // 0x159f4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x159f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f5c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x159f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x159f60: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x159f60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x159f64: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x159f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f6c: 0x0  nop
    ctx->pc = 0x159f6cu;
    // NOP
    // 0x159f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f74: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x159f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x159F80u;
    {
        const bool branch_taken_0x159f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F80u;
        // 0x159f84: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f80) {
            ctx->pc = 0x159FACu;
            goto label_159fac;
        }
    }
    ctx->pc = 0x159F88u;
label_159f88:
    // 0x159f88: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x159f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x159f8c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x159f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f90: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x159f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x159f94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x159f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f98: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x159f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x159f9c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x159f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159fa0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x159fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x159fa4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x159fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159fa8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x159fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_159fac:
    // 0x159fac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x159facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159fb0:
    // 0x159fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159fb4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x159fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x159fb8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x159fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x159FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FBCu;
        // 0x159fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FC4u;
    // 0x159fc4: 0x0  nop
    ctx->pc = 0x159fc4u;
    // NOP
    ctx->pc = 0x159fc8u;
}
