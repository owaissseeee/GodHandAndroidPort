#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: func_00799BE0
// Address: 0x799be0 - 0x79a168
void func_00799BE0_0x799be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799BE0_0x799be0");
#endif

    switch (ctx->pc) {
        case 0x799c54u: goto label_799c54;
        case 0x799cdcu: goto label_799cdc;
        case 0x799d44u: goto label_799d44;
        case 0x799d9cu: goto label_799d9c;
        case 0x799e04u: goto label_799e04;
        case 0x799e5cu: goto label_799e5c;
        case 0x799f20u: goto label_799f20;
        case 0x799f40u: goto label_799f40;
        case 0x799f70u: goto label_799f70;
        case 0x799f98u: goto label_799f98;
        case 0x799fc8u: goto label_799fc8;
        case 0x799ff0u: goto label_799ff0;
        case 0x79a020u: goto label_79a020;
        case 0x79a048u: goto label_79a048;
        case 0x79a078u: goto label_79a078;
        case 0x79a0acu: goto label_79a0ac;
        default: break;
    }

    ctx->pc = 0x799be0u;

    // 0x799be0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799be4: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x799be8: 0x2463a808  addiu       $v1, $v1, -0x57F8
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944776));
    // 0x799bec: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x799becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x799bf0: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x799bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x799bf4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799bf8: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x799bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x799bfc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x799c00: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x799c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x799c04: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x799c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x799c08: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x799c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x799c0c: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x799c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x799c10: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x799c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x799c14: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x799c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
    // 0x799c18: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x799C18u;
    {
        const bool branch_taken_0x799c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C18u;
        // 0x799c1c: 0xffbf0160  sd          $ra, 0x160($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c18) {
            ctx->pc = 0x799CA8u;
            goto label_799ca8;
        }
    }
    ctx->pc = 0x799C20u;
    // 0x799c20: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x799c24: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799c28: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799c2c: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799c30: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x799c34: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799c38: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x799c3c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799c40: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x799c44: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799c48: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799c4c: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799c50: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_799c54:
    // 0x799c54: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x799c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799c58: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x799c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799c5c: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x799c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799c60: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x799c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799c64: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x799c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799c68: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x799c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x799c6c: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x799c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799c70: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x799c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799c74: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x799c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c78: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x799c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c7c: 0xb0ca000f  sdl         $t2, 0xF($a2)
    ctx->pc = 0x799c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c80: 0xb4ca0008  sdr         $t2, 0x8($a2)
    ctx->pc = 0x799c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c84: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x799c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c88: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x799c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c8c: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x799c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c90: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x799c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c94: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x799c98: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799C98u;
    {
        const bool branch_taken_0x799c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c98) {
            ctx->pc = 0x799C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c54;
        }
    }
    ctx->pc = 0x799CA0u;
    // 0x799ca0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x2447a860  addiu       $a3, $v0, -0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799D0Cu;
            goto label_799d0c;
        }
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x799cac: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799cb0: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799cb4: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x799cb8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x799cbc: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799cc0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x799cc4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799cc8: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x799ccc: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799cd0: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799cd4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799cd8: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
label_799cdc:
    // 0x799cdc: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x799cdcu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799ce0: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x799ce0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799ce4: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x799ce4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x799ce8: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x799ce8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x799cec: 0xfccd0000  sd          $t5, 0x0($a2)
    ctx->pc = 0x799cecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 13));
    // 0x799cf0: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x799cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x799cf4: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x799cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x799cf8: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x799cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x799cfc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x799d00: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799D00u;
    {
        const bool branch_taken_0x799d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d00) {
            ctx->pc = 0x799CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cdc;
        }
    }
    ctx->pc = 0x799D08u;
    // 0x799d08: 0x2447a860  addiu       $a3, $v0, -0x57A0
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944864));
label_799d0c:
    // 0x799d0c: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x799d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799d10: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x799d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799d14: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x799d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799d18: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x799d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x799d1c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x799d20: 0xb0cc0007  sdl         $t4, 0x7($a2)
    ctx->pc = 0x799d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d24: 0xb4cc0000  sdr         $t4, 0x0($a2)
    ctx->pc = 0x799d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d28: 0xb0cd000f  sdl         $t5, 0xF($a2)
    ctx->pc = 0x799d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d2c: 0xb4cd0008  sdr         $t5, 0x8($a2)
    ctx->pc = 0x799d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d34: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x799d38: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799D38u;
    {
        const bool branch_taken_0x799d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0xacca0010  sw          $t2, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d38) {
            ctx->pc = 0x799D98u;
            goto label_799d98;
        }
    }
    ctx->pc = 0x799D40u;
    // 0x799d40: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_799d44:
    // 0x799d44: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x799d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799d48: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x799d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799d4c: 0x68ed000f  ldl         $t5, 0xF($a3)
    ctx->pc = 0x799d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799d50: 0x6ced0008  ldr         $t5, 0x8($a3)
    ctx->pc = 0x799d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x799d54: 0x68e30017  ldl         $v1, 0x17($a3)
    ctx->pc = 0x799d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x799d58: 0x6ce30010  ldr         $v1, 0x10($a3)
    ctx->pc = 0x799d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x799d5c: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x799d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799d60: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x799d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799d64: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x799d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d68: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x799d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d6c: 0xb08d000f  sdl         $t5, 0xF($a0)
    ctx->pc = 0x799d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d70: 0xb48d0008  sdr         $t5, 0x8($a0)
    ctx->pc = 0x799d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d74: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x799d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d78: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x799d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d7c: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x799d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d80: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x799d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799d84: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x799d88: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799D88u;
    {
        const bool branch_taken_0x799d88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x799D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D88u;
        // 0x799d8c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d88) {
            ctx->pc = 0x799D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d44;
        }
    }
    ctx->pc = 0x799D90u;
    // 0x799d90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799D90u;
    {
        const bool branch_taken_0x799d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D90u;
        // 0x799d94: 0x2506a8b8  addiu       $a2, $t0, -0x5748 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d90) {
            ctx->pc = 0x799DCCu;
            goto label_799dcc;
        }
    }
    ctx->pc = 0x799D98u;
label_799d98:
    // 0x799d98: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_799d9c:
    // 0x799d9c: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799da0: 0xdceb0008  ld          $t3, 0x8($a3)
    ctx->pc = 0x799da0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x799da4: 0xdcec0010  ld          $t4, 0x10($a3)
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x799da8: 0xdced0018  ld          $t5, 0x18($a3)
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x799dac: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x799dacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x799db0: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x799db0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x799db4: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x799db4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x799db8: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x799db8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x799dbc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x799dc0: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799DC0u;
    {
        const bool branch_taken_0x799dc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x799DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC0u;
        // 0x799dc4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc0) {
            ctx->pc = 0x799D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d9c;
        }
    }
    ctx->pc = 0x799DC8u;
    // 0x799dc8: 0x2506a8b8  addiu       $a2, $t0, -0x5748
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
label_799dcc:
    // 0x799dcc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x799dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dd0: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x799dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799dd4: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x799dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799dd8: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x799dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799ddc: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x799ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799de0: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x799de4: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x799de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799de8: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x799de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799dec: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x799decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df0: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x799df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df4: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x799df8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x799DF8u;
    {
        const bool branch_taken_0x799df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0xac8b0010  sw          $t3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df8) {
            ctx->pc = 0x799E58u;
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E00u;
    // 0x799e00: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_799e04:
    // 0x799e04: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x799e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x799e08: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x799e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x799e0c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x799e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799e10: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x799e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799e14: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x799e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799e18: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x799e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799e1c: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x799e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799e20: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x799e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799e24: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x799e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e28: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x799e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e2c: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x799e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e30: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x799e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e34: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x799e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e38: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x799e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e3c: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x799e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e40: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x799e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e44: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x799e48: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799E48u;
    {
        const bool branch_taken_0x799e48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x799E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E48u;
        // 0x799e4c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e48) {
            ctx->pc = 0x799E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e04;
        }
    }
    ctx->pc = 0x799E50u;
    // 0x799e50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799E50u;
    {
        const bool branch_taken_0x799e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e50) {
            ctx->pc = 0x799E88u;
            goto label_799e88;
        }
    }
    ctx->pc = 0x799E58u;
label_799e58:
    // 0x799e58: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_799e5c:
    // 0x799e5c: 0xdcca0000  ld          $t2, 0x0($a2)
    ctx->pc = 0x799e5cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e60: 0xdccb0008  ld          $t3, 0x8($a2)
    ctx->pc = 0x799e60u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x799e64: 0xdccc0010  ld          $t4, 0x10($a2)
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x799e68: 0xdccd0018  ld          $t5, 0x18($a2)
    ctx->pc = 0x799e68u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x799e6c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x799e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x799e70: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x799e70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x799e74: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x799e74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x799e78: 0xfc6d0018  sd          $t5, 0x18($v1)
    ctx->pc = 0x799e78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 13));
    // 0x799e7c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x799e80: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799E80u;
    {
        const bool branch_taken_0x799e80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x799E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E80u;
        // 0x799e84: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e80) {
            ctx->pc = 0x799E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e5c;
        }
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x799e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799e8c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x799e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799e90: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x799e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x799e94: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x799e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x799e98: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x799e9c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x799e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ea0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x799ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ea4: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x799ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ea8: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x799ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799eac: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x799eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x799eb0: 0x252da910  addiu       $t5, $t1, -0x56F0
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945040));
    // 0x799eb4: 0x69aa0007  ldl         $t2, 0x7($t5)
    ctx->pc = 0x799eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799eb8: 0x6daa0000  ldr         $t2, 0x0($t5)
    ctx->pc = 0x799eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799ebc: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x799ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799ec0: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x799ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x799ec4: 0x69ac0017  ldl         $t4, 0x17($t5)
    ctx->pc = 0x799ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799ec8: 0x6dac0010  ldr         $t4, 0x10($t5)
    ctx->pc = 0x799ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799ecc: 0xb3aa0137  sdl         $t2, 0x137($sp)
    ctx->pc = 0x799eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ed0: 0xb7aa0130  sdr         $t2, 0x130($sp)
    ctx->pc = 0x799ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ed4: 0xb3ab013f  sdl         $t3, 0x13F($sp)
    ctx->pc = 0x799ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ed8: 0xb7ab0138  sdr         $t3, 0x138($sp)
    ctx->pc = 0x799ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799edc: 0xb3ac0147  sdl         $t4, 0x147($sp)
    ctx->pc = 0x799edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ee0: 0xb7ac0140  sdr         $t4, 0x140($sp)
    ctx->pc = 0x799ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ee4: 0x69aa001f  ldl         $t2, 0x1F($t5)
    ctx->pc = 0x799ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x799ee8: 0x6daa0018  ldr         $t2, 0x18($t5)
    ctx->pc = 0x799ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x799eec: 0x69ab0027  ldl         $t3, 0x27($t5)
    ctx->pc = 0x799eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x799ef0: 0x6dab0020  ldr         $t3, 0x20($t5)
    ctx->pc = 0x799ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x799ef4: 0x69ac002f  ldl         $t4, 0x2F($t5)
    ctx->pc = 0x799ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x799ef8: 0x6dac0028  ldr         $t4, 0x28($t5)
    ctx->pc = 0x799ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x799efc: 0xb3aa014f  sdl         $t2, 0x14F($sp)
    ctx->pc = 0x799efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f00: 0xb7aa0148  sdr         $t2, 0x148($sp)
    ctx->pc = 0x799f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f04: 0xb3ab0157  sdl         $t3, 0x157($sp)
    ctx->pc = 0x799f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f08: 0xb7ab0150  sdr         $t3, 0x150($sp)
    ctx->pc = 0x799f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f0c: 0xb3ac015f  sdl         $t4, 0x15F($sp)
    ctx->pc = 0x799f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f10: 0xb7ac0158  sdr         $t4, 0x158($sp)
    ctx->pc = 0x799f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799f14: 0x8e04ab00  lw          $a0, -0x5500($s0)
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x799f18: 0xc0799e0  jal         func_1E6780
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x24840b60  addiu       $a0, $a0, 0xB60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6780u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x8222a940  lb          $v0, -0x56C0($s1)
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294945088)));
    // 0x799f24: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799f28: 0x2623a940  addiu       $v1, $s1, -0x56C0
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945088));
    // 0x799f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799F30u;
    {
        const bool branch_taken_0x799f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F30u;
        // 0x799f34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f30) {
            ctx->pc = 0x799F68u;
            goto label_799f68;
        }
    }
    ctx->pc = 0x799F38u;
    // 0x799f38: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f3c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799f40:
    // 0x799f40: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799f48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799f4c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799f50: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F54u;
    {
        const bool branch_taken_0x799f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F54u;
        // 0x799f58: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f54) {
            ctx->pc = 0x799F68u;
            goto label_799f68;
        }
    }
    ctx->pc = 0x799F5Cu;
    // 0x799f5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F60u;
            // 0x799f64: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f74: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799f78: 0x8282a948  lb          $v0, -0x56B8($s4)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294945096)));
    // 0x799f7c: 0x2683a948  addiu       $v1, $s4, -0x56B8
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945096));
    // 0x799f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799FC0u;
            goto label_799fc0;
        }
    }
    ctx->pc = 0x799F8Cu;
    // 0x799f8c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f90: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f94: 0x0  nop
    ctx->pc = 0x799f94u;
    // NOP
label_799f98:
    // 0x799f98: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799fa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799fa4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799fa8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799fac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FACu;
    {
        const bool branch_taken_0x799fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FACu;
        // 0x799fb0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fac) {
            ctx->pc = 0x799FC0u;
            goto label_799fc0;
        }
    }
    ctx->pc = 0x799FB4u;
    // 0x799fb4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fb8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799FB8u;
    {
        const bool branch_taken_0x799fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799fb8) {
            ctx->pc = 0x799FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FB8u;
            // 0x799fbc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f98;
        }
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799FC0u;
    SET_GPR_U32(ctx, 31, 0x799FC8u);
    ctx->pc = 0x799FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC0u;
    // 0x799fc4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799FC0u, 0x799FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799fc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fcc: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x799fd0: 0x82e2a950  lb          $v0, -0x56B0($s7)
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294945104)));
    // 0x799fd4: 0x26e3a950  addiu       $v1, $s7, -0x56B0
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945104));
    // 0x799fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fdc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799FDCu;
    {
        const bool branch_taken_0x799fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FDCu;
        // 0x799fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fdc) {
            ctx->pc = 0x79A018u;
            goto label_79a018;
        }
    }
    ctx->pc = 0x799FE4u;
    // 0x799fe4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fec: 0x0  nop
    ctx->pc = 0x799fecu;
    // NOP
label_799ff0:
    // 0x799ff0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799ff8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799ffc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a000: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a004: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A004u;
    {
        const bool branch_taken_0x79a004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a004) {
            ctx->pc = 0x79A018u;
            goto label_79a018;
        }
    }
    ctx->pc = 0x79A00Cu;
    // 0x79a00c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a010: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A010u;
    {
        const bool branch_taken_0x79a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a010) {
            ctx->pc = 0x79A014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A010u;
            // 0x79a014: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ff0;
        }
    }
    ctx->pc = 0x79A018u;
label_79a018:
    // 0x79a018: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A018u;
    SET_GPR_U32(ctx, 31, 0x79A020u);
    ctx->pc = 0x79A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A018u;
    // 0x79a01c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A018u, 0x79A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a024: 0x26c84c38  addiu       $t0, $s6, 0x4C38
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 19512));
    // 0x79a028: 0x83c2a958  lb          $v0, -0x56A8($fp)
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945112)));
    // 0x79a02c: 0x27c3a958  addiu       $v1, $fp, -0x56A8
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945112));
    // 0x79a030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a034: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A034u;
    {
        const bool branch_taken_0x79a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a034) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x79A03Cu;
    // 0x79a03c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a040: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a044: 0x0  nop
    ctx->pc = 0x79a044u;
    // NOP
label_79a048:
    // 0x79a048: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a04c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a050: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a054: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a058: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a05c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A05Cu;
    {
        const bool branch_taken_0x79a05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A05Cu;
        // 0x79a060: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a05c) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x79A064u;
    // 0x79a064: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a068: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A068u;
    {
        const bool branch_taken_0x79a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a068) {
            ctx->pc = 0x79A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A068u;
            // 0x79a06c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a048;
        }
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A070u;
    SET_GPR_U32(ctx, 31, 0x79A078u);
    ctx->pc = 0x79A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A070u;
    // 0x79a074: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A070u, 0x79A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A078u;
label_79a078:
    // 0x79a078: 0x8e04ab00  lw          $a0, -0x5500($s0)
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a07c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a080: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79a084: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a088: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x79a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x79a08c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x79a08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a090: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x79a090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a094: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x79a094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a098: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a09c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a0a0: 0x24840b60  addiu       $a0, $a0, 0xB60
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    // 0x79a0a4: 0xc0791f0  jal         func_1E47C0
    ctx->pc = 0x79A0A4u;
    SET_GPR_U32(ctx, 31, 0x79A0ACu);
    ctx->pc = 0x79A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A4u;
    // 0x79a0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47C0u, 0x79A0A4u, 0x79A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ACu;
label_79a0ac:
    // 0x79a0ac: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a0b0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x79a0b4: 0x24067530  addiu       $a2, $zero, 0x7530
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x79a0b8: 0x24073a98  addiu       $a3, $zero, 0x3A98
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    // 0x79a0bc: 0xac620ec8  sw          $v0, 0xEC8($v1)
    ctx->pc = 0x79a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3784), GPR_U32(ctx, 2));
    // 0x79a0c0: 0x24040834  addiu       $a0, $zero, 0x834
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
    // 0x79a0c4: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79a0c8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x79a0cc: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a0d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a0d4: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x79a0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x79a0d8: 0xac660ecc  sw          $a2, 0xECC($v1)
    ctx->pc = 0x79a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3788), GPR_U32(ctx, 6));
    // 0x79a0dc: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x79a0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x79a0e0: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a0e4: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x79a0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x79a0e8: 0xac470ed0  sw          $a3, 0xED0($v0)
    ctx->pc = 0x79a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3792), GPR_U32(ctx, 7));
    // 0x79a0ec: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x79a0ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x79a0f0: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a0f4: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x79a0f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x79a0f8: 0xac640ed4  sw          $a0, 0xED4($v1)
    ctx->pc = 0x79a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3796), GPR_U32(ctx, 4));
    // 0x79a0fc: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x79a0fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x79a100: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a104: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x79a104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x79a108: 0xac440ed8  sw          $a0, 0xED8($v0)
    ctx->pc = 0x79a108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3800), GPR_U32(ctx, 4));
    // 0x79a10c: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x79a10cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x79a110: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a114: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x79a118: 0xac640edc  sw          $a0, 0xEDC($v1)
    ctx->pc = 0x79a118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3804), GPR_U32(ctx, 4));
    // 0x79a11c: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a120: 0xac440ee0  sw          $a0, 0xEE0($v0)
    ctx->pc = 0x79a120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3808), GPR_U32(ctx, 4));
    // 0x79a124: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a128: 0xac690ee4  sw          $t1, 0xEE4($v1)
    ctx->pc = 0x79a128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3812), GPR_U32(ctx, 9));
    // 0x79a12c: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a130: 0xac480ee8  sw          $t0, 0xEE8($v0)
    ctx->pc = 0x79a130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3816), GPR_U32(ctx, 8));
    // 0x79a134: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a138: 0xac680eec  sw          $t0, 0xEEC($v1)
    ctx->pc = 0x79a138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3820), GPR_U32(ctx, 8));
    // 0x79a13c: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a140: 0xac450ef0  sw          $a1, 0xEF0($v0)
    ctx->pc = 0x79a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3824), GPR_U32(ctx, 5));
    // 0x79a144: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a148: 0xac650ef4  sw          $a1, 0xEF4($v1)
    ctx->pc = 0x79a148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3828), GPR_U32(ctx, 5));
    // 0x79a14c: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a150: 0xac450ef8  sw          $a1, 0xEF8($v0)
    ctx->pc = 0x79a150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3832), GPR_U32(ctx, 5));
    // 0x79a154: 0x8e03ab00  lw          $v1, -0x5500($s0)
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x79a158: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x79a158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x79a15c: 0xac650efc  sw          $a1, 0xEFC($v1)
    ctx->pc = 0x79a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3836), GPR_U32(ctx, 5));
    // 0x79a160: 0x3e00008  jr          $ra
    ctx->pc = 0x79A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A160u;
        // 0x79a164: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A168u;
}
} // namespace gh_r006
