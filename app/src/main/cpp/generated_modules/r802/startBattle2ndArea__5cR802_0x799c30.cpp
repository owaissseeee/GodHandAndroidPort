#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: startBattle2ndArea__5cR802
// Address: 0x799c30 - 0x799d48
void startBattle2ndArea__5cR802_0x799c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startBattle2ndArea__5cR802_0x799c30");
#endif

    switch (ctx->pc) {
        case 0x799c7cu: goto label_799c7c;
        case 0x799cd0u: goto label_799cd0;
        case 0x799ce8u: goto label_799ce8;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d20u: goto label_799d20;
        case 0x799d2cu: goto label_799d2c;
        default: break;
    }

    ctx->pc = 0x799c30u;

    // 0x799c30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799c34: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799c38: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799c3c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x799c40: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799c44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799c48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799c4c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799c50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c58: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799c64: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x799c68: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799c6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799c74: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799C74u;
    SET_GPR_U32(ctx, 31, 0x799C7Cu);
    ctx->pc = 0x799C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C74u;
    // 0x799c78: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799C74u, 0x799C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C7Cu;
label_799c7c:
    // 0x799c7c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799c80: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c84: 0x2466ae50  addiu       $a2, $v1, -0x51B0
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
    // 0x799c88: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x799c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799c8c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x799c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799c90: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x799c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799c94: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x799c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799c98: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x799c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799c9c: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x799c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799ca0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ca4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ca8: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x799ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cac: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x799cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cb0: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x799cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cb4: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x799cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cb8: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x799cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799cbc: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x799cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799cc0: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x799cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cc4: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x799cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cc8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ccc: 0x0  nop
    ctx->pc = 0x799cccu;
    // NOP
label_799cd0:
    // 0x799cd0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x799cd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799cd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x799cdc: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ce0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799CE0u;
    SET_GPR_U32(ctx, 31, 0x799CE8u);
    ctx->pc = 0x799CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE0u;
    // 0x799ce4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799CE0u, 0x799CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE8u;
label_799ce8:
    // 0x799ce8: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x799ce8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799cec: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799CECu;
    {
        const bool branch_taken_0x799cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799cec) {
            ctx->pc = 0x799CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CECu;
            // 0x799cf0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cd0;
        }
    }
    ctx->pc = 0x799CF4u;
    // 0x799cf4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cfc: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d04: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799D04u;
    SET_GPR_U32(ctx, 31, 0x799D0Cu);
    ctx->pc = 0x799D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D04u;
    // 0x799d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799D04u, 0x799D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D0Cu;
label_799d0c:
    // 0x799d0c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d10: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d14: 0x24a59d48  addiu       $a1, $a1, -0x62B8
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942024));
    // 0x799d18: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799d24: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799d30: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799d34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d40: 0x3e00008  jr          $ra
    ctx->pc = 0x799D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D40u;
        // 0x799d44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D48u;
}
} // namespace gh_r802
