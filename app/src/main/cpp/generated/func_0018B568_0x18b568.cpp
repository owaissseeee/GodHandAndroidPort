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

// Function: func_0018B568
// Address: 0x18b568 - 0x18b6a0
void func_0018B568_0x18b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B568_0x18b568");
#endif

    switch (ctx->pc) {
        case 0x18b568u: goto label_18b568;
        case 0x18b56cu: goto label_18b56c;
        case 0x18b570u: goto label_18b570;
        case 0x18b574u: goto label_18b574;
        case 0x18b578u: goto label_18b578;
        case 0x18b57cu: goto label_18b57c;
        case 0x18b580u: goto label_18b580;
        case 0x18b584u: goto label_18b584;
        case 0x18b588u: goto label_18b588;
        case 0x18b58cu: goto label_18b58c;
        case 0x18b590u: goto label_18b590;
        case 0x18b594u: goto label_18b594;
        case 0x18b598u: goto label_18b598;
        case 0x18b59cu: goto label_18b59c;
        case 0x18b5a0u: goto label_18b5a0;
        case 0x18b5a4u: goto label_18b5a4;
        case 0x18b5a8u: goto label_18b5a8;
        case 0x18b5acu: goto label_18b5ac;
        case 0x18b5b0u: goto label_18b5b0;
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b5b8u: goto label_18b5b8;
        case 0x18b5bcu: goto label_18b5bc;
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5c4u: goto label_18b5c4;
        case 0x18b5c8u: goto label_18b5c8;
        case 0x18b5ccu: goto label_18b5cc;
        case 0x18b5d0u: goto label_18b5d0;
        case 0x18b5d4u: goto label_18b5d4;
        case 0x18b5d8u: goto label_18b5d8;
        case 0x18b5dcu: goto label_18b5dc;
        case 0x18b5e0u: goto label_18b5e0;
        case 0x18b5e4u: goto label_18b5e4;
        case 0x18b5e8u: goto label_18b5e8;
        case 0x18b5ecu: goto label_18b5ec;
        case 0x18b5f0u: goto label_18b5f0;
        case 0x18b5f4u: goto label_18b5f4;
        case 0x18b5f8u: goto label_18b5f8;
        case 0x18b5fcu: goto label_18b5fc;
        case 0x18b600u: goto label_18b600;
        case 0x18b604u: goto label_18b604;
        case 0x18b608u: goto label_18b608;
        case 0x18b60cu: goto label_18b60c;
        case 0x18b610u: goto label_18b610;
        case 0x18b614u: goto label_18b614;
        case 0x18b618u: goto label_18b618;
        case 0x18b61cu: goto label_18b61c;
        case 0x18b620u: goto label_18b620;
        case 0x18b624u: goto label_18b624;
        case 0x18b628u: goto label_18b628;
        case 0x18b62cu: goto label_18b62c;
        case 0x18b630u: goto label_18b630;
        case 0x18b634u: goto label_18b634;
        case 0x18b638u: goto label_18b638;
        case 0x18b63cu: goto label_18b63c;
        case 0x18b640u: goto label_18b640;
        case 0x18b644u: goto label_18b644;
        case 0x18b648u: goto label_18b648;
        case 0x18b64cu: goto label_18b64c;
        case 0x18b650u: goto label_18b650;
        case 0x18b654u: goto label_18b654;
        case 0x18b658u: goto label_18b658;
        case 0x18b65cu: goto label_18b65c;
        case 0x18b660u: goto label_18b660;
        case 0x18b664u: goto label_18b664;
        case 0x18b668u: goto label_18b668;
        case 0x18b66cu: goto label_18b66c;
        case 0x18b670u: goto label_18b670;
        case 0x18b674u: goto label_18b674;
        case 0x18b678u: goto label_18b678;
        case 0x18b67cu: goto label_18b67c;
        case 0x18b680u: goto label_18b680;
        case 0x18b684u: goto label_18b684;
        case 0x18b688u: goto label_18b688;
        case 0x18b68cu: goto label_18b68c;
        case 0x18b690u: goto label_18b690;
        case 0x18b694u: goto label_18b694;
        case 0x18b698u: goto label_18b698;
        case 0x18b69cu: goto label_18b69c;
        default: break;
    }

    ctx->pc = 0x18b568u;

label_18b568:
    // 0x18b568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18b56c:
    // 0x18b56c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18b570:
    // 0x18b570: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18b574:
    // 0x18b574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18b578:
    // 0x18b578: 0xc06ddac  jal         func_1B76B0
label_18b57c:
    if (ctx->pc == 0x18B57Cu) {
        ctx->pc = 0x18B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B578u;
        // 0x18b57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B580u;
        goto label_18b580;
    }
    ctx->pc = 0x18B578u;
    SET_GPR_U32(ctx, 31, 0x18B580u);
    ctx->pc = 0x18B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B578u;
    // 0x18b57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18B578u, 0x18B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B580u;
label_18b580:
    // 0x18b580: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_18b584:
    if (ctx->pc == 0x18B584u) {
        ctx->pc = 0x18B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B580u;
        // 0x18b584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B588u;
        goto label_18b588;
    }
    ctx->pc = 0x18B580u;
    {
        const bool branch_taken_0x18b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b580) {
            ctx->pc = 0x18B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B580u;
            // 0x18b584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B690u;
            goto label_18b690;
        }
    }
    ctx->pc = 0x18B588u;
label_18b588:
    // 0x18b588: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18b588u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18b58c:
    // 0x18b58c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x18b58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_18b590:
    // 0x18b590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18b594:
    // 0x18b594: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_18b598:
    if (ctx->pc == 0x18B598u) {
        ctx->pc = 0x18B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B594u;
        // 0x18b598: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B59Cu;
        goto label_18b59c;
    }
    ctx->pc = 0x18B594u;
    {
        const bool branch_taken_0x18b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B594u;
        // 0x18b598: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b594) {
            ctx->pc = 0x18B684u;
            goto label_18b684;
        }
    }
    ctx->pc = 0x18B59Cu;
label_18b59c:
    // 0x18b59c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18b59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18b5a0:
    // 0x18b5a0: 0x244737c8  addiu       $a3, $v0, 0x37C8
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14280));
label_18b5a4:
    // 0x18b5a4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18b5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18b5a8:
    // 0x18b5a8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18b5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18b5ac:
    // 0x18b5ac: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18b5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18b5b0:
    // 0x18b5b0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18b5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18b5b4:
    // 0x18b5b4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18b5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18b5b8:
    // 0x18b5b8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18b5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18b5bc:
    // 0x18b5bc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18b5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5c0:
    // 0x18b5c0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18b5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5c4:
    // 0x18b5c4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18b5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5c8:
    // 0x18b5c8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18b5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5cc:
    // 0x18b5cc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18b5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5d0:
    // 0x18b5d0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18b5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5d4:
    // 0x18b5d4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18b5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18b5d8:
    // 0x18b5d8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18b5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18b5dc:
    // 0x18b5dc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18b5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5e0:
    // 0x18b5e0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18b5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18b5e4:
    // 0x18b5e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18b5e8:
    // 0x18b5e8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18b5ec:
    // 0x18b5ec: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18b5ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18b5f0:
    // 0x18b5f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18b5f4:
    // 0x18b5f4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18b5f8:
    // 0x18b5f8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18b5fc:
    if (ctx->pc == 0x18B5FCu) {
        ctx->pc = 0x18B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5F8u;
        // 0x18b5fc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B600u;
        goto label_18b600;
    }
    ctx->pc = 0x18B5F8u;
    {
        const bool branch_taken_0x18b5f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5F8u;
        // 0x18b5fc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5f8) {
            ctx->pc = 0x18B62Cu;
            goto label_18b62c;
        }
    }
    ctx->pc = 0x18B600u;
label_18b600:
    // 0x18b600: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18b600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18b604:
    // 0x18b604: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18b608:
    // 0x18b608: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18b60c:
    // 0x18b60c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18b60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18b610:
    // 0x18b610: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18b614:
    // 0x18b614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b618:
    // 0x18b618: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18b61c:
    // 0x18b61c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18b61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18b620:
    // 0x18b620: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18b620u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18b624:
    // 0x18b624: 0x10000004  b           . + 4 + (0x4 << 2)
label_18b628:
    if (ctx->pc == 0x18B628u) {
        ctx->pc = 0x18B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B624u;
        // 0x18b628: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B62Cu;
        goto label_18b62c;
    }
    ctx->pc = 0x18B624u;
    {
        const bool branch_taken_0x18b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B624u;
        // 0x18b628: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b624) {
            ctx->pc = 0x18B638u;
            goto label_18b638;
        }
    }
    ctx->pc = 0x18B62Cu;
label_18b62c:
    // 0x18b62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b630:
    // 0x18b630: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b634:
    // 0x18b634: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18b634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18b638:
    // 0x18b638: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18b63c:
    // 0x18b63c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18b640:
    // 0x18b640: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18b644:
    if (ctx->pc == 0x18B644u) {
        ctx->pc = 0x18B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B640u;
        // 0x18b644: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B648u;
        goto label_18b648;
    }
    ctx->pc = 0x18B640u;
    {
        const bool branch_taken_0x18b640 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B640u;
        // 0x18b644: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b640) {
            ctx->pc = 0x18B65Cu;
            goto label_18b65c;
        }
    }
    ctx->pc = 0x18B648u;
label_18b648:
    // 0x18b648: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18b64c:
    // 0x18b64c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18b650:
    // 0x18b650: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18b654:
    // 0x18b654: 0x10000002  b           . + 4 + (0x2 << 2)
label_18b658:
    if (ctx->pc == 0x18B658u) {
        ctx->pc = 0x18B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B654u;
        // 0x18b658: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B65Cu;
        goto label_18b65c;
    }
    ctx->pc = 0x18B654u;
    {
        const bool branch_taken_0x18b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B654u;
        // 0x18b658: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b654) {
            ctx->pc = 0x18B660u;
            goto label_18b660;
        }
    }
    ctx->pc = 0x18B65Cu;
label_18b65c:
    // 0x18b65c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b660:
    // 0x18b660: 0xc0f809  jalr        $a2
label_18b664:
    if (ctx->pc == 0x18B664u) {
        ctx->pc = 0x18B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B660u;
        // 0x18b664: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B668u;
        goto label_18b668;
    }
    ctx->pc = 0x18B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18B668u);
        ctx->pc = 0x18B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B660u;
        // 0x18b664: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B660u, 0x18B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B668u;
label_18b668:
    // 0x18b668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b66c:
    // 0x18b66c: 0xc0aa1fa  jal         func_2A87E8
label_18b670:
    if (ctx->pc == 0x18B670u) {
        ctx->pc = 0x18B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B66Cu;
        // 0x18b670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B674u;
        goto label_18b674;
    }
    ctx->pc = 0x18B66Cu;
    SET_GPR_U32(ctx, 31, 0x18B674u);
    ctx->pc = 0x18B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B66Cu;
    // 0x18b670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18B66Cu, 0x18B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B674u;
label_18b674:
    // 0x18b674: 0xc06ddb6  jal         func_1B76D8
label_18b678:
    if (ctx->pc == 0x18B678u) {
        ctx->pc = 0x18B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B674u;
        // 0x18b678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B67Cu;
        goto label_18b67c;
    }
    ctx->pc = 0x18B674u;
    SET_GPR_U32(ctx, 31, 0x18B67Cu);
    ctx->pc = 0x18B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B674u;
    // 0x18b678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18B674u, 0x18B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B67Cu;
label_18b67c:
    // 0x18b67c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18b680:
    if (ctx->pc == 0x18B680u) {
        ctx->pc = 0x18B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B67Cu;
        // 0x18b680: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B684u;
        goto label_18b684;
    }
    ctx->pc = 0x18B67Cu;
    {
        const bool branch_taken_0x18b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B67Cu;
        // 0x18b680: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b67c) {
            ctx->pc = 0x18B690u;
            goto label_18b690;
        }
    }
    ctx->pc = 0x18B684u;
label_18b684:
    // 0x18b684: 0xc071f8c  jal         func_1C7E30
label_18b688:
    if (ctx->pc == 0x18B688u) {
        ctx->pc = 0x18B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B684u;
        // 0x18b688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B68Cu;
        goto label_18b68c;
    }
    ctx->pc = 0x18B684u;
    SET_GPR_U32(ctx, 31, 0x18B68Cu);
    ctx->pc = 0x18B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B684u;
    // 0x18b688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x18B684u, 0x18B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B68Cu;
label_18b68c:
    // 0x18b68c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18b690:
    // 0x18b690: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b694:
    // 0x18b694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18b698:
    // 0x18b698: 0x3e00008  jr          $ra
label_18b69c:
    if (ctx->pc == 0x18B69Cu) {
        ctx->pc = 0x18B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B698u;
        // 0x18b69c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6A0u;
        goto label_fallthrough_0x18b698;
    }
    ctx->pc = 0x18B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B698u;
        // 0x18b69c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18b698:
    ctx->pc = 0x18B6A0u;
}
