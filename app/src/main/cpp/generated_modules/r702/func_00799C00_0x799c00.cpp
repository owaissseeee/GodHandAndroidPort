#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_00799C00
// Address: 0x799c00 - 0x799dd8
void func_00799C00_0x799c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C00_0x799c00");
#endif

    switch (ctx->pc) {
        case 0x799c20u: goto label_799c20;
        case 0x799d58u: goto label_799d58;
        case 0x799d64u: goto label_799d64;
        case 0x799d80u: goto label_799d80;
        case 0x799d8cu: goto label_799d8c;
        case 0x799da8u: goto label_799da8;
        case 0x799db4u: goto label_799db4;
        default: break;
    }

    ctx->pc = 0x799c00u;

    // 0x799c00: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x799c04: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799c08: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x799c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x799c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c10: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x799c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x799c14: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x799c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x799c18: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x799C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C18u;
    // 0x799c1c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c24: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799c28: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x799C28u;
    {
        const bool branch_taken_0x799c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c28) {
            ctx->pc = 0x799DC0u;
            goto label_799dc0;
        }
    }
    ctx->pc = 0x799C30u;
    // 0x799c30: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799c34: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799c38: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799c44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799c48: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799c4c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799c50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c54: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c58: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799c5c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x799c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x799c60: 0x27ae0030  addiu       $t6, $sp, 0x30
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799c64: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x799c64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x799c68: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799c6c: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x799c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x799c70: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x799c74: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x799c74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x799c78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x799c7c: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x799c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x799c80: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799c84: 0xa3a70080  sb          $a3, 0x80($sp)
    ctx->pc = 0x799c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 7));
    // 0x799c88: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x799c8c: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x799c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
    // 0x799c90: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799c94: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x799c94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x799c98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799c9c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799ca0: 0xa3af0010  sb          $t7, 0x10($sp)
    ctx->pc = 0x799ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 15));
    // 0x799ca4: 0xa3b10020  sb          $s1, 0x20($sp)
    ctx->pc = 0x799ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x799ca8: 0xafab00c4  sw          $t3, 0xC4($sp)
    ctx->pc = 0x799ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 11));
    // 0x799cac: 0xafaa00c8  sw          $t2, 0xC8($sp)
    ctx->pc = 0x799cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 10));
    // 0x799cb0: 0xafbd00c0  sw          $sp, 0xC0($sp)
    ctx->pc = 0x799cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 29));
    // 0x799cb4: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x799cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799cb8: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x799cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799cbc: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x799cc0: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x799cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cc4: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x799cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cc8: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x799cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x799ccc: 0xafae00d0  sw          $t6, 0xD0($sp)
    ctx->pc = 0x799cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 14));
    // 0x799cd0: 0xafac00d4  sw          $t4, 0xD4($sp)
    ctx->pc = 0x799cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 12));
    // 0x799cd4: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x799cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x799cd8: 0x6ba500d7  ldl         $a1, 0xD7($sp)
    ctx->pc = 0x799cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799cdc: 0x6fa500d0  ldr         $a1, 0xD0($sp)
    ctx->pc = 0x799cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799ce0: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x799ce4: 0xb3a500c7  sdl         $a1, 0xC7($sp)
    ctx->pc = 0x799ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ce8: 0xb7a500c0  sdr         $a1, 0xC0($sp)
    ctx->pc = 0x799ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799cec: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x799cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x799cf0: 0xafad0100  sw          $t5, 0x100($sp)
    ctx->pc = 0x799cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 13));
    // 0x799cf4: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x799cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x799cf8: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x799cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x799cfc: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x799cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x799d00: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x799d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x799d04: 0x6baa0107  ldl         $t2, 0x107($sp)
    ctx->pc = 0x799d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799d08: 0x6faa0100  ldr         $t2, 0x100($sp)
    ctx->pc = 0x799d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799d0c: 0x6ba2010f  ldl         $v0, 0x10F($sp)
    ctx->pc = 0x799d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799d10: 0x6fa20108  ldr         $v0, 0x108($sp)
    ctx->pc = 0x799d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799d14: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799d18: 0xb3aa00e7  sdl         $t2, 0xE7($sp)
    ctx->pc = 0x799d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d1c: 0xb7aa00e0  sdr         $t2, 0xE0($sp)
    ctx->pc = 0x799d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d20: 0xb3a200ef  sdl         $v0, 0xEF($sp)
    ctx->pc = 0x799d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d24: 0xb7a200e8  sdr         $v0, 0xE8($sp)
    ctx->pc = 0x799d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d28: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x799d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x799d2c: 0x520f0012  beql        $s0, $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x799D2Cu;
    {
        const bool branch_taken_0x799d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x799d2c) {
            ctx->pc = 0x799D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D2Cu;
            // 0x799d30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D78u;
            goto label_799d78;
        }
    }
    ctx->pc = 0x799D34u;
    // 0x799d34: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799D34u;
    {
        const bool branch_taken_0x799d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d34) {
            ctx->pc = 0x799D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D34u;
            // 0x799d38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D4Cu;
            goto label_799d4c;
        }
    }
    ctx->pc = 0x799D3Cu;
    // 0x799d3c: 0x12110018  beq         $s0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799DA0u;
            goto label_799da0;
        }
    }
    ctx->pc = 0x799D44u;
    // 0x799d44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x799D44u;
    {
        const bool branch_taken_0x799d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D44u;
        // 0x799d48: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d44) {
            ctx->pc = 0x799DC4u;
            goto label_799dc4;
        }
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x799d50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799d54: 0x0  nop
    ctx->pc = 0x799d54u;
    // NOP
label_799d58:
    // 0x799d58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799d5c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799D5Cu;
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799D5Cu, 0x799D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799D68u;
    {
        const bool branch_taken_0x799d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d68) {
            ctx->pc = 0x799D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D68u;
            // 0x799d6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d58;
        }
    }
    ctx->pc = 0x799D70u;
    // 0x799d70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799D70u;
    {
        const bool branch_taken_0x799d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D70u;
        // 0x799d74: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d70) {
            ctx->pc = 0x799DC4u;
            goto label_799dc4;
        }
    }
    ctx->pc = 0x799D78u;
label_799d78:
    // 0x799d78: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x799d7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799d80:
    // 0x799d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799d84: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799D84u;
    SET_GPR_U32(ctx, 31, 0x799D8Cu);
    ctx->pc = 0x799D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D84u;
    // 0x799d88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799D84u, 0x799D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d90: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799D90u;
    {
        const bool branch_taken_0x799d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d90) {
            ctx->pc = 0x799D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D90u;
            // 0x799d94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d80;
        }
    }
    ctx->pc = 0x799D98u;
    // 0x799d98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799DC4u;
            goto label_799dc4;
        }
    }
    ctx->pc = 0x799DA0u;
label_799da0:
    // 0x799da0: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x799da4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799da8:
    // 0x799da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799dac: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799DACu;
    SET_GPR_U32(ctx, 31, 0x799DB4u);
    ctx->pc = 0x799DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DACu;
    // 0x799db0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799DACu, 0x799DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB4u;
label_799db4:
    // 0x799db4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x799db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799db8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799DB8u;
    {
        const bool branch_taken_0x799db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799db8) {
            ctx->pc = 0x799DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DB8u;
            // 0x799dbc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799da8;
        }
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x799dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_799dc4:
    // 0x799dc4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x799dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x799dc8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x799DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DCCu;
        // 0x799dd0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DD4u;
    // 0x799dd4: 0x0  nop
    ctx->pc = 0x799dd4u;
    // NOP
    ctx->pc = 0x799dd8u;
}
} // namespace gh_r702
