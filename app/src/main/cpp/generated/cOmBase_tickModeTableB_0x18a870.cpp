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

// Function: cOmBase_tickModeTableB
// Address: 0x18a870 - 0x18a988
void cOmBase_tickModeTableB_0x18a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickModeTableB_0x18a870");
#endif

    switch (ctx->pc) {
        case 0x18a870u: goto label_18a870;
        case 0x18a874u: goto label_18a874;
        case 0x18a878u: goto label_18a878;
        case 0x18a87cu: goto label_18a87c;
        case 0x18a880u: goto label_18a880;
        case 0x18a884u: goto label_18a884;
        case 0x18a888u: goto label_18a888;
        case 0x18a88cu: goto label_18a88c;
        case 0x18a890u: goto label_18a890;
        case 0x18a894u: goto label_18a894;
        case 0x18a898u: goto label_18a898;
        case 0x18a89cu: goto label_18a89c;
        case 0x18a8a0u: goto label_18a8a0;
        case 0x18a8a4u: goto label_18a8a4;
        case 0x18a8a8u: goto label_18a8a8;
        case 0x18a8acu: goto label_18a8ac;
        case 0x18a8b0u: goto label_18a8b0;
        case 0x18a8b4u: goto label_18a8b4;
        case 0x18a8b8u: goto label_18a8b8;
        case 0x18a8bcu: goto label_18a8bc;
        case 0x18a8c0u: goto label_18a8c0;
        case 0x18a8c4u: goto label_18a8c4;
        case 0x18a8c8u: goto label_18a8c8;
        case 0x18a8ccu: goto label_18a8cc;
        case 0x18a8d0u: goto label_18a8d0;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8d8u: goto label_18a8d8;
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8e0u: goto label_18a8e0;
        case 0x18a8e4u: goto label_18a8e4;
        case 0x18a8e8u: goto label_18a8e8;
        case 0x18a8ecu: goto label_18a8ec;
        case 0x18a8f0u: goto label_18a8f0;
        case 0x18a8f4u: goto label_18a8f4;
        case 0x18a8f8u: goto label_18a8f8;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a900u: goto label_18a900;
        case 0x18a904u: goto label_18a904;
        case 0x18a908u: goto label_18a908;
        case 0x18a90cu: goto label_18a90c;
        case 0x18a910u: goto label_18a910;
        case 0x18a914u: goto label_18a914;
        case 0x18a918u: goto label_18a918;
        case 0x18a91cu: goto label_18a91c;
        case 0x18a920u: goto label_18a920;
        case 0x18a924u: goto label_18a924;
        case 0x18a928u: goto label_18a928;
        case 0x18a92cu: goto label_18a92c;
        case 0x18a930u: goto label_18a930;
        case 0x18a934u: goto label_18a934;
        case 0x18a938u: goto label_18a938;
        case 0x18a93cu: goto label_18a93c;
        case 0x18a940u: goto label_18a940;
        case 0x18a944u: goto label_18a944;
        case 0x18a948u: goto label_18a948;
        case 0x18a94cu: goto label_18a94c;
        case 0x18a950u: goto label_18a950;
        case 0x18a954u: goto label_18a954;
        case 0x18a958u: goto label_18a958;
        case 0x18a95cu: goto label_18a95c;
        case 0x18a960u: goto label_18a960;
        case 0x18a964u: goto label_18a964;
        case 0x18a968u: goto label_18a968;
        case 0x18a96cu: goto label_18a96c;
        case 0x18a970u: goto label_18a970;
        case 0x18a974u: goto label_18a974;
        case 0x18a978u: goto label_18a978;
        case 0x18a97cu: goto label_18a97c;
        case 0x18a980u: goto label_18a980;
        case 0x18a984u: goto label_18a984;
        default: break;
    }

    ctx->pc = 0x18a870u;

label_18a870:
    // 0x18a870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a874:
    // 0x18a874: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18a878:
    // 0x18a878: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18a87c:
    // 0x18a87c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18a880:
    // 0x18a880: 0xc06ddac  jal         func_1B76B0
label_18a884:
    if (ctx->pc == 0x18A884u) {
        ctx->pc = 0x18A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A880u;
        // 0x18a884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A888u;
        goto label_18a888;
    }
    ctx->pc = 0x18A880u;
    SET_GPR_U32(ctx, 31, 0x18A888u);
    ctx->pc = 0x18A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A880u;
    // 0x18a884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18A880u, 0x18A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A888u;
label_18a888:
    // 0x18a888: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_18a88c:
    if (ctx->pc == 0x18A88Cu) {
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A890u;
        goto label_18a890;
    }
    ctx->pc = 0x18A888u;
    {
        const bool branch_taken_0x18a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a888) {
            ctx->pc = 0x18A970u;
            goto label_18a970;
        }
    }
    ctx->pc = 0x18A890u;
label_18a890:
    // 0x18a890: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18a890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18a894:
    // 0x18a894: 0x244736e0  addiu       $a3, $v0, 0x36E0
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14048));
label_18a898:
    // 0x18a898: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18a898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18a89c:
    // 0x18a89c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18a89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18a8a0:
    // 0x18a8a0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18a8a4:
    // 0x18a8a4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18a8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18a8a8:
    // 0x18a8a8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18a8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18a8ac:
    // 0x18a8ac: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18a8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18a8b0:
    // 0x18a8b0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8b4:
    // 0x18a8b4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8b8:
    // 0x18a8b8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18a8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8bc:
    // 0x18a8bc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8c0:
    // 0x18a8c0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8c4:
    // 0x18a8c4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8c8:
    // 0x18a8c8: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18a8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18a8cc:
    // 0x18a8cc: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18a8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18a8d0:
    // 0x18a8d0: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18a8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8d4:
    // 0x18a8d4: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18a8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a8d8:
    // 0x18a8d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18a8dc:
    // 0x18a8dc: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18a8e0:
    // 0x18a8e0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18a8e4:
    // 0x18a8e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18a8e8:
    // 0x18a8e8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18a8ec:
    // 0x18a8ec: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18a8f0:
    if (ctx->pc == 0x18A8F0u) {
        ctx->pc = 0x18A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8ECu;
        // 0x18a8f0: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A8F4u;
        goto label_18a8f4;
    }
    ctx->pc = 0x18A8ECu;
    {
        const bool branch_taken_0x18a8ec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8ECu;
        // 0x18a8f0: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8ec) {
            ctx->pc = 0x18A920u;
            goto label_18a920;
        }
    }
    ctx->pc = 0x18A8F4u;
label_18a8f4:
    // 0x18a8f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18a8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18a8f8:
    // 0x18a8f8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18a8fc:
    // 0x18a8fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18a900:
    // 0x18a900: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18a904:
    // 0x18a904: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18a908:
    // 0x18a908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a90c:
    // 0x18a90c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18a910:
    // 0x18a910: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18a910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18a914:
    // 0x18a914: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18a914u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18a918:
    // 0x18a918: 0x10000004  b           . + 4 + (0x4 << 2)
label_18a91c:
    if (ctx->pc == 0x18A91Cu) {
        ctx->pc = 0x18A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A918u;
        // 0x18a91c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A920u;
        goto label_18a920;
    }
    ctx->pc = 0x18A918u;
    {
        const bool branch_taken_0x18a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A918u;
        // 0x18a91c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a918) {
            ctx->pc = 0x18A92Cu;
            goto label_18a92c;
        }
    }
    ctx->pc = 0x18A920u;
label_18a920:
    // 0x18a920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18a924:
    // 0x18a924: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a928:
    // 0x18a928: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18a928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18a92c:
    // 0x18a92c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18a930:
    // 0x18a930: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18a934:
    // 0x18a934: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18a938:
    if (ctx->pc == 0x18A938u) {
        ctx->pc = 0x18A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A934u;
        // 0x18a938: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A93Cu;
        goto label_18a93c;
    }
    ctx->pc = 0x18A934u;
    {
        const bool branch_taken_0x18a934 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A934u;
        // 0x18a938: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a934) {
            ctx->pc = 0x18A950u;
            goto label_18a950;
        }
    }
    ctx->pc = 0x18A93Cu;
label_18a93c:
    // 0x18a93c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18a940:
    // 0x18a940: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18a944:
    // 0x18a944: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18a944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18a948:
    // 0x18a948: 0x10000002  b           . + 4 + (0x2 << 2)
label_18a94c:
    if (ctx->pc == 0x18A94Cu) {
        ctx->pc = 0x18A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A948u;
        // 0x18a94c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A950u;
        goto label_18a950;
    }
    ctx->pc = 0x18A948u;
    {
        const bool branch_taken_0x18a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A948u;
        // 0x18a94c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a948) {
            ctx->pc = 0x18A954u;
            goto label_18a954;
        }
    }
    ctx->pc = 0x18A950u;
label_18a950:
    // 0x18a950: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18a950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18a954:
    // 0x18a954: 0xc0f809  jalr        $a2
label_18a958:
    if (ctx->pc == 0x18A958u) {
        ctx->pc = 0x18A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A954u;
        // 0x18a958: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A95Cu;
        goto label_18a95c;
    }
    ctx->pc = 0x18A954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18A95Cu);
        ctx->pc = 0x18A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A954u;
        // 0x18a958: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A954u, 0x18A95Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A95Cu;
label_18a95c:
    // 0x18a95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a960:
    // 0x18a960: 0xc0aa1fa  jal         func_2A87E8
label_18a964:
    if (ctx->pc == 0x18A964u) {
        ctx->pc = 0x18A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A960u;
        // 0x18a964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A968u;
        goto label_18a968;
    }
    ctx->pc = 0x18A960u;
    SET_GPR_U32(ctx, 31, 0x18A968u);
    ctx->pc = 0x18A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A960u;
    // 0x18a964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18A960u, 0x18A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A968u;
label_18a968:
    // 0x18a968: 0xc06ddb6  jal         func_1B76D8
label_18a96c:
    if (ctx->pc == 0x18A96Cu) {
        ctx->pc = 0x18A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A968u;
        // 0x18a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A970u;
        goto label_18a970;
    }
    ctx->pc = 0x18A968u;
    SET_GPR_U32(ctx, 31, 0x18A970u);
    ctx->pc = 0x18A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A968u;
    // 0x18a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18A968u, 0x18A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A970u;
label_18a970:
    // 0x18a970: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a974:
    // 0x18a974: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18a974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a978:
    // 0x18a978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18a97c:
    // 0x18a97c: 0x3e00008  jr          $ra
label_18a980:
    if (ctx->pc == 0x18A980u) {
        ctx->pc = 0x18A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A97Cu;
        // 0x18a980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A984u;
        goto label_18a984;
    }
    ctx->pc = 0x18A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A97Cu;
        // 0x18a980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A984u;
label_18a984:
    // 0x18a984: 0x0  nop
    ctx->pc = 0x18a984u;
    // NOP
    ctx->pc = 0x18a988u;
}
