#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079AAC8
// Address: 0x79aac8 - 0x79ac08
void func_0079AAC8_0x79aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AAC8_0x79aac8");
#endif

    switch (ctx->pc) {
        case 0x79ab98u: goto label_79ab98;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abd0u: goto label_79abd0;
        default: break;
    }

    ctx->pc = 0x79aac8u;

    // 0x79aac8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79aacc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79aad0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79aad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aad4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79aad8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79aadc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79aae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aae4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79aae8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79aaec: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aaf0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79aaf4: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aaf8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x79aafc: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79ab00: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x79ab04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79ab04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab08: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79ab0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79ab0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab10: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x79ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x79ab14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79ab14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab18: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79ab18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ab1c: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79ab20: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79ab20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ab24: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x79ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79ab28: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x79ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x79ab2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79ab30: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79ab34: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79ab38: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79ab38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79ab3c: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x79ab3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x79ab40: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79ab40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ab44: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x79ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
    // 0x79ab48: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x79ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x79ab4c: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x79ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x79ab50: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x79ab50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79ab54: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x79ab54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79ab58: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x79ab5c: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x79ab5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79ab60: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x79ab60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79ab64: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x79ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x79ab68: 0xafaa00a0  sw          $t2, 0xA0($sp)
    ctx->pc = 0x79ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 10));
    // 0x79ab6c: 0xafa900a4  sw          $t1, 0xA4($sp)
    ctx->pc = 0x79ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 9));
    // 0x79ab70: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x79ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x79ab74: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x79ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x79ab78: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x79ab78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79ab7c: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x79ab7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79ab80: 0x6ba300af  ldl         $v1, 0xAF($sp)
    ctx->pc = 0x79ab80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79ab84: 0x6fa300a8  ldr         $v1, 0xA8($sp)
    ctx->pc = 0x79ab84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79ab88: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x79ab88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79ab8c: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x79ab8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79ab90: 0xb3a3009f  sdl         $v1, 0x9F($sp)
    ctx->pc = 0x79ab90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79ab94: 0xb7a30098  sdr         $v1, 0x98($sp)
    ctx->pc = 0x79ab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79ab98:
    // 0x79ab98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79ab9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79aba0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79ABA0u;
    SET_GPR_U32(ctx, 31, 0x79ABA8u);
    ctx->pc = 0x79ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABA0u;
    // 0x79aba4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79ABA0u, 0x79ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABA8u;
label_79aba8:
    // 0x79aba8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x79abac: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79abb0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79ABB0u;
    {
        const bool branch_taken_0x79abb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB0u;
        // 0x79abb4: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb0) {
            ctx->pc = 0x79AB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab98;
        }
    }
    ctx->pc = 0x79ABB8u;
    // 0x79abb8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x79abb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79abbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79abc0:
    // 0x79abc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79abc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79abc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79abc8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79ABC8u;
    SET_GPR_U32(ctx, 31, 0x79ABD0u);
    ctx->pc = 0x79ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC8u;
    // 0x79abcc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79ABC8u, 0x79ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABD0u;
label_79abd0:
    // 0x79abd0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79abd4: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x79abd4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79abd8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79ABD8u;
    {
        const bool branch_taken_0x79abd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD8u;
        // 0x79abdc: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd8) {
            ctx->pc = 0x79ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abc0;
        }
    }
    ctx->pc = 0x79ABE0u;
    // 0x79abe0: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x79abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x79abe4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79abe8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79abe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79abec: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79abecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79abf0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79abf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79abf4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79abf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79abf8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x79abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABFCu;
        // 0x79ac00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC04u;
    // 0x79ac04: 0x0  nop
    ctx->pc = 0x79ac04u;
    // NOP
    ctx->pc = 0x79ac08u;
}
} // namespace gh_r204
