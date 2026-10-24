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
// Function: func_00799DD8
// Address: 0x799dd8 - 0x799fd8
void func_00799DD8_0x799dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799DD8_0x799dd8");
#endif

    switch (ctx->pc) {
        case 0x799dfcu: goto label_799dfc;
        case 0x799f38u: goto label_799f38;
        case 0x799f48u: goto label_799f48;
        case 0x799f68u: goto label_799f68;
        case 0x799f78u: goto label_799f78;
        case 0x799f98u: goto label_799f98;
        case 0x799fa8u: goto label_799fa8;
        default: break;
    }

    ctx->pc = 0x799dd8u;

    // 0x799dd8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x799ddc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799de0: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x799de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x799de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x799de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x799dec: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x799decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x799df0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x799df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x799df4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799DF4u;
    SET_GPR_U32(ctx, 31, 0x799DFCu);
    ctx->pc = 0x799DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF4u;
    // 0x799df8: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799DF4u, 0x799DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799e00: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x799e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799E04u;
    {
        const bool branch_taken_0x799e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E04u;
        // 0x799e08: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e04) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799E0Cu;
    // 0x799e0c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x799E0Cu;
    {
        const bool branch_taken_0x799e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E0Cu;
        // 0x799e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e0c) {
            ctx->pc = 0x799FBCu;
            goto label_799fbc;
        }
    }
    ctx->pc = 0x799E14u;
label_799e14:
    // 0x799e14: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799e18: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799e1c: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799e28: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799e2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799e30: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799e34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e38: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e3c: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799e40: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x799e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e44: 0x27ae0030  addiu       $t6, $sp, 0x30
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799e48: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x799e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e4c: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799e50: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x799e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x799e54: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x799e58: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x799e58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x799e5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x799e60: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x799e60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x799e64: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799e68: 0xa3a70080  sb          $a3, 0x80($sp)
    ctx->pc = 0x799e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 7));
    // 0x799e6c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x799e70: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x799e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
    // 0x799e74: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799e78: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x799e78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x799e7c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799e80: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799e84: 0xa3af0010  sb          $t7, 0x10($sp)
    ctx->pc = 0x799e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 15));
    // 0x799e88: 0xa3b10020  sb          $s1, 0x20($sp)
    ctx->pc = 0x799e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x799e8c: 0xafab00c4  sw          $t3, 0xC4($sp)
    ctx->pc = 0x799e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 11));
    // 0x799e90: 0xafaa00c8  sw          $t2, 0xC8($sp)
    ctx->pc = 0x799e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 10));
    // 0x799e94: 0xafbd00c0  sw          $sp, 0xC0($sp)
    ctx->pc = 0x799e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 29));
    // 0x799e98: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x799e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799e9c: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x799e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799ea0: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x799ea4: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x799ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ea8: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x799ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799eac: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x799eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x799eb0: 0xafae00d0  sw          $t6, 0xD0($sp)
    ctx->pc = 0x799eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 14));
    // 0x799eb4: 0xafac00d4  sw          $t4, 0xD4($sp)
    ctx->pc = 0x799eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 12));
    // 0x799eb8: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x799eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x799ebc: 0x6ba500d7  ldl         $a1, 0xD7($sp)
    ctx->pc = 0x799ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799ec0: 0x6fa500d0  ldr         $a1, 0xD0($sp)
    ctx->pc = 0x799ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799ec4: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x799ec8: 0xb3a500c7  sdl         $a1, 0xC7($sp)
    ctx->pc = 0x799ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ecc: 0xb7a500c0  sdr         $a1, 0xC0($sp)
    ctx->pc = 0x799eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ed0: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x799ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x799ed4: 0xafad0100  sw          $t5, 0x100($sp)
    ctx->pc = 0x799ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 13));
    // 0x799ed8: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x799ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x799edc: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x799edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x799ee0: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x799ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x799ee4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x799ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x799ee8: 0x6baa0107  ldl         $t2, 0x107($sp)
    ctx->pc = 0x799ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799eec: 0x6faa0100  ldr         $t2, 0x100($sp)
    ctx->pc = 0x799eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799ef0: 0x6ba2010f  ldl         $v0, 0x10F($sp)
    ctx->pc = 0x799ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799ef4: 0x6fa20108  ldr         $v0, 0x108($sp)
    ctx->pc = 0x799ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799ef8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799efc: 0xb3aa00e7  sdl         $t2, 0xE7($sp)
    ctx->pc = 0x799efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f00: 0xb7aa00e0  sdr         $t2, 0xE0($sp)
    ctx->pc = 0x799f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f04: 0xb3a200ef  sdl         $v0, 0xEF($sp)
    ctx->pc = 0x799f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f08: 0xb7a200e8  sdr         $v0, 0xE8($sp)
    ctx->pc = 0x799f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f0c: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x799f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x799f10: 0x120f0013  beq         $s0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F18u;
    // 0x799f18: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799F18u;
    {
        const bool branch_taken_0x799f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f18) {
            ctx->pc = 0x799F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F18u;
            // 0x799f1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F30u;
            goto label_799f30;
        }
    }
    ctx->pc = 0x799F20u;
    // 0x799f20: 0x1211001b  beq         $s0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x799F20u;
    {
        const bool branch_taken_0x799f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x2e420001  sltiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f20) {
            ctx->pc = 0x799F90u;
            goto label_799f90;
        }
    }
    ctx->pc = 0x799F28u;
    // 0x799f28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x799F28u;
    {
        const bool branch_taken_0x799f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F28u;
        // 0x799f2c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f28) {
            ctx->pc = 0x799FC0u;
            goto label_799fc0;
        }
    }
    ctx->pc = 0x799F30u;
label_799f30:
    // 0x799f30: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x799f34: 0x0  nop
    ctx->pc = 0x799f34u;
    // NOP
label_799f38:
    // 0x799f38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799f40: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799f4c: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799f50: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799F50u;
    {
        const bool branch_taken_0x799f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f50) {
            ctx->pc = 0x799F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f38;
        }
    }
    ctx->pc = 0x799F58u;
    // 0x799f58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x2e420001  sltiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799FBCu;
            goto label_799fbc;
        }
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f64: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_799f68:
    // 0x799f68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799f70: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799F70u;
    SET_GPR_U32(ctx, 31, 0x799F78u);
    ctx->pc = 0x799F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F70u;
    // 0x799f74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799F70u, 0x799F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799f7c: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799f80: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799F80u;
    {
        const bool branch_taken_0x799f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F80u;
        // 0x799f84: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f80) {
            ctx->pc = 0x799F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f68;
        }
    }
    ctx->pc = 0x799F88u;
    // 0x799f88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799F88u;
    {
        const bool branch_taken_0x799f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0x2e420001  sltiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f88) {
            ctx->pc = 0x799FBCu;
            goto label_799fbc;
        }
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f94: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_799f98:
    // 0x799f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799fa0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x799FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799fac: 0x2e240005  sltiu       $a0, $s1, 0x5
    ctx->pc = 0x799facu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799fb0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799FB0u;
    {
        const bool branch_taken_0x799fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB0u;
        // 0x799fb4: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fb0) {
            ctx->pc = 0x799F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f98;
        }
    }
    ctx->pc = 0x799FB8u;
    // 0x799fb8: 0x2e420001  sltiu       $v0, $s2, 0x1
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_799fbc:
    // 0x799fbc: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x799fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_799fc0:
    // 0x799fc0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x799fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x799fc4: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x799fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x799fc8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x799fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x799FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FD4u;
    // 0x799fd4: 0x0  nop
    ctx->pc = 0x799fd4u;
    // NOP
    ctx->pc = 0x799fd8u;
}
} // namespace gh_r702
