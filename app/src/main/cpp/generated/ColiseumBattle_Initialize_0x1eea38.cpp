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

// Function: ColiseumBattle_Initialize
// Address: 0x1eea38 - 0x1eec68
void ColiseumBattle_Initialize_0x1eea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_Initialize_0x1eea38");
#endif

    switch (ctx->pc) {
        case 0x1eea60u: goto label_1eea60;
        case 0x1eeaf0u: goto label_1eeaf0;
        case 0x1eeb34u: goto label_1eeb34;
        case 0x1eeb64u: goto label_1eeb64;
        case 0x1eeb74u: goto label_1eeb74;
        case 0x1eeb8cu: goto label_1eeb8c;
        case 0x1eeb94u: goto label_1eeb94;
        case 0x1eeba4u: goto label_1eeba4;
        case 0x1eebb4u: goto label_1eebb4;
        case 0x1eebecu: goto label_1eebec;
        case 0x1eec00u: goto label_1eec00;
        case 0x1eec10u: goto label_1eec10;
        case 0x1eec24u: goto label_1eec24;
        case 0x1eec30u: goto label_1eec30;
        case 0x1eec48u: goto label_1eec48;
        default: break;
    }

    ctx->pc = 0x1eea38u;

    // 0x1eea38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1eea3c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1eea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1eea40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eea40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1eea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1eea48: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1eea48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1eea4c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1eea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1eea50: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1eea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1eea54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1eea58: 0xc07f14c  jal         func_1FC530
    ctx->pc = 0x1EEA58u;
    SET_GPR_U32(ctx, 31, 0x1EEA60u);
    ctx->pc = 0x1EEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEA58u;
    // 0x1eea5c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC530u, 0x1EEA58u, 0x1EEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA60u;
label_1eea60:
    // 0x1eea60: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1eea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1eea64: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1eea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1eea68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1eea68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eea6c: 0x2463e8b0  addiu       $v1, $v1, -0x1750
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961328));
    // 0x1eea70: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1eea70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1eea74: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1eea78: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x1eea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eea7c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eea80: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1eea80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1eea84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eea88: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1eea88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1eea8c: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1eea8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1eea90: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x1eea90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1eea94: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x1eea94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1eea98: 0x684a0017  ldl         $t2, 0x17($v0)
    ctx->pc = 0x1eea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1eea9c: 0x6c4a0010  ldr         $t2, 0x10($v0)
    ctx->pc = 0x1eea9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1eeaa0: 0x684b001f  ldl         $t3, 0x1F($v0)
    ctx->pc = 0x1eeaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1eeaa4: 0x6c4b0018  ldr         $t3, 0x18($v0)
    ctx->pc = 0x1eeaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1eeaa8: 0xb2280b67  sdl         $t0, 0xB67($s1)
    ctx->pc = 0x1eeaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeaac: 0xb6280b60  sdr         $t0, 0xB60($s1)
    ctx->pc = 0x1eeaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeab0: 0xb2290b6f  sdl         $t1, 0xB6F($s1)
    ctx->pc = 0x1eeab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeab4: 0xb6290b68  sdr         $t1, 0xB68($s1)
    ctx->pc = 0x1eeab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2920); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeab8: 0xb22a0b77  sdl         $t2, 0xB77($s1)
    ctx->pc = 0x1eeab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeabc: 0xb62a0b70  sdr         $t2, 0xB70($s1)
    ctx->pc = 0x1eeabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeac0: 0xb22b0b7f  sdl         $t3, 0xB7F($s1)
    ctx->pc = 0x1eeac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2943); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeac4: 0xb62b0b78  sdr         $t3, 0xB78($s1)
    ctx->pc = 0x1eeac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eeac8: 0x68480027  ldl         $t0, 0x27($v0)
    ctx->pc = 0x1eeac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1eeacc: 0x6c480020  ldr         $t0, 0x20($v0)
    ctx->pc = 0x1eeaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1eead0: 0xb2280b87  sdl         $t0, 0xB87($s1)
    ctx->pc = 0x1eead0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eead4: 0xb6280b80  sdr         $t0, 0xB80($s1)
    ctx->pc = 0x1eead4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eead8: 0x26230cd8  addiu       $v1, $s1, 0xCD8
    ctx->pc = 0x1eead8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3288));
    // 0x1eeadc: 0xae200b94  sw          $zero, 0xB94($s1)
    ctx->pc = 0x1eeadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2964), GPR_U32(ctx, 0));
    // 0x1eeae0: 0x8c828240  lw          $v0, -0x7DC0($a0)
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x568240u));
    // 0x1eeae4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1eeae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1eeae8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1eeae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1eeaec: 0xac828240  sw          $v0, -0x7DC0($a0)
    ctx->pc = 0x1eeaecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294935104), GPR_U32(ctx, 2));
label_1eeaf0:
    // 0x1eeaf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1eeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eeaf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1eeaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1eeaf8: 0x0  nop
    ctx->pc = 0x1eeaf8u;
    // NOP
    // 0x1eeafc: 0x0  nop
    ctx->pc = 0x1eeafcu;
    // NOP
    // 0x1eeb00: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEB00u;
    {
        const bool branch_taken_0x1eeb00 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x1EEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB00u;
        // 0x1eeb04: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb00) {
            ctx->pc = 0x1EEAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeaf0;
        }
    }
    ctx->pc = 0x1EEB08u;
    // 0x1eeb08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1eeb0c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1eeb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1eeb10: 0x246364f0  addiu       $v1, $v1, 0x64F0
    ctx->pc = 0x1eeb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
    // 0x1eeb14: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1eeb14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1eeb18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eeb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeb1c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1eeb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1eeb20: 0xa06505b5  sb          $a1, 0x5B5($v1)
    ctx->pc = 0x1eeb20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1eeb24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1eeb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eeb28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eeb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb2c: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1EEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1EEB34u);
    ctx->pc = 0x1EEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB2Cu;
    // 0x1eeb30: 0x24c6be30  addiu       $a2, $a2, -0x41D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1EEB2Cu, 0x1EEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB34u;
label_1eeb34:
    // 0x1eeb34: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1eeb34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1eeb38: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x1eeb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x1eeb3c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1eeb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1eeb40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eeb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eeb44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eeb48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb4c: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1eeb50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eeb50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eeb54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eeb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb5c: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1EEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1EEB64u);
    ctx->pc = 0x1EEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB5Cu;
    // 0x1eeb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1EEB5Cu, 0x1EEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB64u;
label_1eeb64:
    // 0x1eeb64: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1eeb68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eeb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb6c: 0xc080458  jal         func_201160
    ctx->pc = 0x1EEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEB74u);
    ctx->pc = 0x1EEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB6Cu;
    // 0x1eeb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1EEB6Cu, 0x1EEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB74u;
label_1eeb74:
    // 0x1eeb74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1eeb78: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eeb7c: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1eeb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1eeb80: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1eeb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1eeb84: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1EEB84u;
    SET_GPR_U32(ctx, 31, 0x1EEB8Cu);
    ctx->pc = 0x1EEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB84u;
    // 0x1eeb88: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1EEB84u, 0x1EEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB8Cu;
label_1eeb8c:
    // 0x1eeb8c: 0xc07c9ec  jal         func_1F27B0
    ctx->pc = 0x1EEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EEB94u);
    ctx->pc = 0x1EEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB8Cu;
    // 0x1eeb90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F27B0u, 0x1EEB8Cu, 0x1EEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB94u;
label_1eeb94:
    // 0x1eeb94: 0x8e250b6c  lw          $a1, 0xB6C($s1)
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2924)));
    // 0x1eeb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eeb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb9c: 0xc07caa2  jal         func_1F2A88
    ctx->pc = 0x1EEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1EEBA4u);
    ctx->pc = 0x1EEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB9Cu;
    // 0x1eeba0: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2A88u, 0x1EEB9Cu, 0x1EEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBA4u;
label_1eeba4:
    // 0x1eeba4: 0x86250b6a  lh          $a1, 0xB6A($s1)
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2922)));
    // 0x1eeba8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eebac: 0xc07caca  jal         func_1F2B28
    ctx->pc = 0x1EEBACu;
    SET_GPR_U32(ctx, 31, 0x1EEBB4u);
    ctx->pc = 0x1EEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBACu;
    // 0x1eebb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B28u, 0x1EEBACu, 0x1EEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBB4u;
label_1eebb4:
    // 0x1eebb4: 0x8e260b6c  lw          $a2, 0xB6C($s1)
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2924)));
    // 0x1eebb8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EEBB8u;
    {
        const bool branch_taken_0x1eebb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBB8u;
        // 0x1eebbc: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebb8) {
            ctx->pc = 0x1EEBECu;
            goto label_1eebec;
        }
    }
    ctx->pc = 0x1EEBC0u;
    // 0x1eebc0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eebc4: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1eebc4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1eebc8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EEBC8u;
    {
        const bool branch_taken_0x1eebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebc8) {
            ctx->pc = 0x1EEBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEBC8u;
            // 0x1eebcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEBD0u;
            goto label_1eebd0;
        }
    }
    ctx->pc = 0x1EEBD0u;
label_1eebd0:
    // 0x1eebd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eebd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eebd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebdc: 0x3012  mflo        $a2
    ctx->pc = 0x1eebdcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1eebe0: 0x3810  mfhi        $a3
    ctx->pc = 0x1eebe0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1eebe4: 0xc07cae0  jal         func_1F2B80
    ctx->pc = 0x1EEBE4u;
    SET_GPR_U32(ctx, 31, 0x1EEBECu);
    ctx->pc = 0x1EEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBE4u;
    // 0x1eebe8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B80u, 0x1EEBE4u, 0x1EEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBECu;
label_1eebec:
    // 0x1eebec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1eebecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1eebf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebf4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1eebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eebf8: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1EEBF8u;
    SET_GPR_U32(ctx, 31, 0x1EEC00u);
    ctx->pc = 0x1EEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBF8u;
    // 0x1eebfc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1EEBF8u, 0x1EEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC00u;
label_1eec00:
    // 0x1eec00: 0xae200b88  sw          $zero, 0xB88($s1)
    ctx->pc = 0x1eec00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2952), GPR_U32(ctx, 0));
    // 0x1eec04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec08: 0xc07be94  jal         func_1EFA50
    ctx->pc = 0x1EEC08u;
    SET_GPR_U32(ctx, 31, 0x1EEC10u);
    ctx->pc = 0x1EEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC08u;
    // 0x1eec0c: 0xae220b8c  sw          $v0, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA50u, 0x1EEC08u, 0x1EEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC10u;
label_1eec10:
    // 0x1eec10: 0x8e220b6c  lw          $v0, 0xB6C($s1)
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2924)));
    // 0x1eec14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEC14u;
    {
        const bool branch_taken_0x1eec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec14) {
            ctx->pc = 0x1EEC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEC14u;
            // 0x1eec18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEC28u;
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EEC1Cu;
    // 0x1eec1c: 0xc07bf54  jal         func_1EFD50
    ctx->pc = 0x1EEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC24u);
    ctx->pc = 0x1EEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC1Cu;
    // 0x1eec20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFD50u, 0x1EEC1Cu, 0x1EEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC24u;
label_1eec24:
    // 0x1eec24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eec28:
    // 0x1eec28: 0xc07bf9c  jal         func_1EFE70
    ctx->pc = 0x1EEC28u;
    SET_GPR_U32(ctx, 31, 0x1EEC30u);
    ctx->pc = 0x1EEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC28u;
    // 0x1eec2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE70u, 0x1EEC28u, 0x1EEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC30u;
label_1eec30:
    // 0x1eec30: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1eec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1eec34: 0x8e250b84  lw          $a1, 0xB84($s1)
    ctx->pc = 0x1eec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2948)));
    // 0x1eec38: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1eec3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec40: 0xc0b42b0  jal         func_2D0AC0
    ctx->pc = 0x1EEC40u;
    SET_GPR_U32(ctx, 31, 0x1EEC48u);
    ctx->pc = 0x1EEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC40u;
    // 0x1eec44: 0x944405b0  lhu         $a0, 0x5B0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AC0u, 0x1EEC40u, 0x1EEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC48u;
label_1eec48:
    // 0x1eec48: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1eec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eec4c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1eec4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec50: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1eec50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eec54: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1eec54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eec58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC5Cu;
        // 0x1eec60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEC64u;
    // 0x1eec64: 0x0  nop
    ctx->pc = 0x1eec64u;
    // NOP
    ctx->pc = 0x1eec68u;
}
