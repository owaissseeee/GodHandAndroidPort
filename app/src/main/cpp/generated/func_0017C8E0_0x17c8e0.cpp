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

// Function: func_0017C8E0
// Address: 0x17c8e0 - 0x17ca18
void func_0017C8E0_0x17c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C8E0_0x17c8e0");
#endif

    switch (ctx->pc) {
        case 0x17c8e0u: goto label_17c8e0;
        case 0x17c8e4u: goto label_17c8e4;
        case 0x17c8e8u: goto label_17c8e8;
        case 0x17c8ecu: goto label_17c8ec;
        case 0x17c8f0u: goto label_17c8f0;
        case 0x17c8f4u: goto label_17c8f4;
        case 0x17c8f8u: goto label_17c8f8;
        case 0x17c8fcu: goto label_17c8fc;
        case 0x17c900u: goto label_17c900;
        case 0x17c904u: goto label_17c904;
        case 0x17c908u: goto label_17c908;
        case 0x17c90cu: goto label_17c90c;
        case 0x17c910u: goto label_17c910;
        case 0x17c914u: goto label_17c914;
        case 0x17c918u: goto label_17c918;
        case 0x17c91cu: goto label_17c91c;
        case 0x17c920u: goto label_17c920;
        case 0x17c924u: goto label_17c924;
        case 0x17c928u: goto label_17c928;
        case 0x17c92cu: goto label_17c92c;
        case 0x17c930u: goto label_17c930;
        case 0x17c934u: goto label_17c934;
        case 0x17c938u: goto label_17c938;
        case 0x17c93cu: goto label_17c93c;
        case 0x17c940u: goto label_17c940;
        case 0x17c944u: goto label_17c944;
        case 0x17c948u: goto label_17c948;
        case 0x17c94cu: goto label_17c94c;
        case 0x17c950u: goto label_17c950;
        case 0x17c954u: goto label_17c954;
        case 0x17c958u: goto label_17c958;
        case 0x17c95cu: goto label_17c95c;
        case 0x17c960u: goto label_17c960;
        case 0x17c964u: goto label_17c964;
        case 0x17c968u: goto label_17c968;
        case 0x17c96cu: goto label_17c96c;
        case 0x17c970u: goto label_17c970;
        case 0x17c974u: goto label_17c974;
        case 0x17c978u: goto label_17c978;
        case 0x17c97cu: goto label_17c97c;
        case 0x17c980u: goto label_17c980;
        case 0x17c984u: goto label_17c984;
        case 0x17c988u: goto label_17c988;
        case 0x17c98cu: goto label_17c98c;
        case 0x17c990u: goto label_17c990;
        case 0x17c994u: goto label_17c994;
        case 0x17c998u: goto label_17c998;
        case 0x17c99cu: goto label_17c99c;
        case 0x17c9a0u: goto label_17c9a0;
        case 0x17c9a4u: goto label_17c9a4;
        case 0x17c9a8u: goto label_17c9a8;
        case 0x17c9acu: goto label_17c9ac;
        case 0x17c9b0u: goto label_17c9b0;
        case 0x17c9b4u: goto label_17c9b4;
        case 0x17c9b8u: goto label_17c9b8;
        case 0x17c9bcu: goto label_17c9bc;
        case 0x17c9c0u: goto label_17c9c0;
        case 0x17c9c4u: goto label_17c9c4;
        case 0x17c9c8u: goto label_17c9c8;
        case 0x17c9ccu: goto label_17c9cc;
        case 0x17c9d0u: goto label_17c9d0;
        case 0x17c9d4u: goto label_17c9d4;
        case 0x17c9d8u: goto label_17c9d8;
        case 0x17c9dcu: goto label_17c9dc;
        case 0x17c9e0u: goto label_17c9e0;
        case 0x17c9e4u: goto label_17c9e4;
        case 0x17c9e8u: goto label_17c9e8;
        case 0x17c9ecu: goto label_17c9ec;
        case 0x17c9f0u: goto label_17c9f0;
        case 0x17c9f4u: goto label_17c9f4;
        case 0x17c9f8u: goto label_17c9f8;
        case 0x17c9fcu: goto label_17c9fc;
        case 0x17ca00u: goto label_17ca00;
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca08u: goto label_17ca08;
        case 0x17ca0cu: goto label_17ca0c;
        case 0x17ca10u: goto label_17ca10;
        case 0x17ca14u: goto label_17ca14;
        default: break;
    }

    ctx->pc = 0x17c8e0u;

label_17c8e0:
    // 0x17c8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17c8e4:
    // 0x17c8e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17c8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17c8e8:
    // 0x17c8e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_17c8ec:
    // 0x17c8ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17c8f0:
    // 0x17c8f0: 0xc06ddac  jal         func_1B76B0
label_17c8f4:
    if (ctx->pc == 0x17C8F4u) {
        ctx->pc = 0x17C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8F0u;
        // 0x17c8f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8F8u;
        goto label_17c8f8;
    }
    ctx->pc = 0x17C8F0u;
    SET_GPR_U32(ctx, 31, 0x17C8F8u);
    ctx->pc = 0x17C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8F0u;
    // 0x17c8f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17C8F0u, 0x17C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8F8u;
label_17c8f8:
    // 0x17c8f8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_17c8fc:
    if (ctx->pc == 0x17C8FCu) {
        ctx->pc = 0x17C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8F8u;
        // 0x17c8fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C900u;
        goto label_17c900;
    }
    ctx->pc = 0x17C8F8u;
    {
        const bool branch_taken_0x17c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8f8) {
            ctx->pc = 0x17C8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8F8u;
            // 0x17c8fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CA08u;
            goto label_17ca08;
        }
    }
    ctx->pc = 0x17C900u;
label_17c900:
    // 0x17c900: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x17c900u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_17c904:
    // 0x17c904: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x17c904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_17c908:
    // 0x17c908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17c908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17c90c:
    // 0x17c90c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_17c910:
    if (ctx->pc == 0x17C910u) {
        ctx->pc = 0x17C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C90Cu;
        // 0x17c910: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C914u;
        goto label_17c914;
    }
    ctx->pc = 0x17C90Cu;
    {
        const bool branch_taken_0x17c90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C90Cu;
        // 0x17c910: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c90c) {
            ctx->pc = 0x17C9FCu;
            goto label_17c9fc;
        }
    }
    ctx->pc = 0x17C914u;
label_17c914:
    // 0x17c914: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17c914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17c918:
    // 0x17c918: 0x24471d48  addiu       $a3, $v0, 0x1D48
    ctx->pc = 0x17c918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7496));
label_17c91c:
    // 0x17c91c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17c920:
    // 0x17c920: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x17c920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17c924:
    // 0x17c924: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x17c924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_17c928:
    // 0x17c928: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x17c928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17c92c:
    // 0x17c92c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x17c92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_17c930:
    // 0x17c930: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x17c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_17c934:
    // 0x17c934: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x17c934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c938:
    // 0x17c938: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x17c938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c93c:
    // 0x17c93c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x17c93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c940:
    // 0x17c940: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x17c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c944:
    // 0x17c944: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x17c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c948:
    // 0x17c948: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x17c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c94c:
    // 0x17c94c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x17c94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17c950:
    // 0x17c950: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x17c950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17c954:
    // 0x17c954: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x17c954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c958:
    // 0x17c958: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x17c958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c95c:
    // 0x17c95c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17c960:
    // 0x17c960: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x17c960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_17c964:
    // 0x17c964: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x17c964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17c968:
    // 0x17c968: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17c96c:
    // 0x17c96c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x17c96cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_17c970:
    // 0x17c970: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_17c974:
    if (ctx->pc == 0x17C974u) {
        ctx->pc = 0x17C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C970u;
        // 0x17c974: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C978u;
        goto label_17c978;
    }
    ctx->pc = 0x17C970u;
    {
        const bool branch_taken_0x17c970 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C970u;
        // 0x17c974: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c970) {
            ctx->pc = 0x17C9A4u;
            goto label_17c9a4;
        }
    }
    ctx->pc = 0x17C978u;
label_17c978:
    // 0x17c978: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x17c978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17c97c:
    // 0x17c97c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17c980:
    // 0x17c980: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17c980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17c984:
    // 0x17c984: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17c984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17c988:
    // 0x17c988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17c98c:
    // 0x17c98c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17c990:
    // 0x17c990: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17c994:
    // 0x17c994: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x17c994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_17c998:
    // 0x17c998: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17c998u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17c99c:
    // 0x17c99c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17c9a0:
    if (ctx->pc == 0x17C9A0u) {
        ctx->pc = 0x17C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C99Cu;
        // 0x17c9a0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9A4u;
        goto label_17c9a4;
    }
    ctx->pc = 0x17C99Cu;
    {
        const bool branch_taken_0x17c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C99Cu;
        // 0x17c9a0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c99c) {
            ctx->pc = 0x17C9B0u;
            goto label_17c9b0;
        }
    }
    ctx->pc = 0x17C9A4u;
label_17c9a4:
    // 0x17c9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c9a8:
    // 0x17c9a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17c9ac:
    // 0x17c9ac: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x17c9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17c9b0:
    // 0x17c9b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17c9b4:
    // 0x17c9b4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x17c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_17c9b8:
    // 0x17c9b8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17c9bc:
    if (ctx->pc == 0x17C9BCu) {
        ctx->pc = 0x17C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9B8u;
        // 0x17c9bc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9C0u;
        goto label_17c9c0;
    }
    ctx->pc = 0x17C9B8u;
    {
        const bool branch_taken_0x17c9b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9B8u;
        // 0x17c9bc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9b8) {
            ctx->pc = 0x17C9D4u;
            goto label_17c9d4;
        }
    }
    ctx->pc = 0x17C9C0u;
label_17c9c0:
    // 0x17c9c0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17c9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17c9c4:
    // 0x17c9c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17c9c8:
    // 0x17c9c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17c9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17c9cc:
    // 0x17c9cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_17c9d0:
    if (ctx->pc == 0x17C9D0u) {
        ctx->pc = 0x17C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9CCu;
        // 0x17c9d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9D4u;
        goto label_17c9d4;
    }
    ctx->pc = 0x17C9CCu;
    {
        const bool branch_taken_0x17c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9CCu;
        // 0x17c9d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9cc) {
            ctx->pc = 0x17C9D8u;
            goto label_17c9d8;
        }
    }
    ctx->pc = 0x17C9D4u;
label_17c9d4:
    // 0x17c9d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17c9d8:
    // 0x17c9d8: 0xc0f809  jalr        $a2
label_17c9dc:
    if (ctx->pc == 0x17C9DCu) {
        ctx->pc = 0x17C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9D8u;
        // 0x17c9dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9E0u;
        goto label_17c9e0;
    }
    ctx->pc = 0x17C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17C9E0u);
        ctx->pc = 0x17C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9D8u;
        // 0x17c9dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C9D8u, 0x17C9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C9E0u;
label_17c9e0:
    // 0x17c9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c9e4:
    // 0x17c9e4: 0xc0aa1fa  jal         func_2A87E8
label_17c9e8:
    if (ctx->pc == 0x17C9E8u) {
        ctx->pc = 0x17C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E4u;
        // 0x17c9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9ECu;
        goto label_17c9ec;
    }
    ctx->pc = 0x17C9E4u;
    SET_GPR_U32(ctx, 31, 0x17C9ECu);
    ctx->pc = 0x17C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9E4u;
    // 0x17c9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x17C9E4u, 0x17C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9ECu;
label_17c9ec:
    // 0x17c9ec: 0xc06ddb6  jal         func_1B76D8
label_17c9f0:
    if (ctx->pc == 0x17C9F0u) {
        ctx->pc = 0x17C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9ECu;
        // 0x17c9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9F4u;
        goto label_17c9f4;
    }
    ctx->pc = 0x17C9ECu;
    SET_GPR_U32(ctx, 31, 0x17C9F4u);
    ctx->pc = 0x17C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9ECu;
    // 0x17c9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17C9ECu, 0x17C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9F4u;
label_17c9f4:
    // 0x17c9f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_17c9f8:
    if (ctx->pc == 0x17C9F8u) {
        ctx->pc = 0x17C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9F4u;
        // 0x17c9f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9FCu;
        goto label_17c9fc;
    }
    ctx->pc = 0x17C9F4u;
    {
        const bool branch_taken_0x17c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9F4u;
        // 0x17c9f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9f4) {
            ctx->pc = 0x17CA08u;
            goto label_17ca08;
        }
    }
    ctx->pc = 0x17C9FCu;
label_17c9fc:
    // 0x17c9fc: 0xc071f8c  jal         func_1C7E30
label_17ca00:
    if (ctx->pc == 0x17CA00u) {
        ctx->pc = 0x17CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9FCu;
        // 0x17ca00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA04u;
        goto label_17ca04;
    }
    ctx->pc = 0x17C9FCu;
    SET_GPR_U32(ctx, 31, 0x17CA04u);
    ctx->pc = 0x17CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9FCu;
    // 0x17ca00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x17C9FCu, 0x17CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA04u;
label_17ca04:
    // 0x17ca04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17ca04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17ca08:
    // 0x17ca08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17ca08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17ca0c:
    // 0x17ca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ca10:
    // 0x17ca10: 0x3e00008  jr          $ra
label_17ca14:
    if (ctx->pc == 0x17CA14u) {
        ctx->pc = 0x17CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA10u;
        // 0x17ca14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA18u;
        goto label_fallthrough_0x17ca10;
    }
    ctx->pc = 0x17CA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA10u;
        // 0x17ca14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17ca10:
    ctx->pc = 0x17CA18u;
}
