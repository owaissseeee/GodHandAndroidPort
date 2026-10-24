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

// Function: func_001895D8
// Address: 0x1895d8 - 0x1896e0
void func_001895D8_0x1895d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001895D8_0x1895d8");
#endif

    switch (ctx->pc) {
        case 0x1895d8u: goto label_1895d8;
        case 0x1895dcu: goto label_1895dc;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        case 0x189628u: goto label_189628;
        case 0x18962cu: goto label_18962c;
        case 0x189630u: goto label_189630;
        case 0x189634u: goto label_189634;
        case 0x189638u: goto label_189638;
        case 0x18963cu: goto label_18963c;
        case 0x189640u: goto label_189640;
        case 0x189644u: goto label_189644;
        case 0x189648u: goto label_189648;
        case 0x18964cu: goto label_18964c;
        case 0x189650u: goto label_189650;
        case 0x189654u: goto label_189654;
        case 0x189658u: goto label_189658;
        case 0x18965cu: goto label_18965c;
        case 0x189660u: goto label_189660;
        case 0x189664u: goto label_189664;
        case 0x189668u: goto label_189668;
        case 0x18966cu: goto label_18966c;
        case 0x189670u: goto label_189670;
        case 0x189674u: goto label_189674;
        case 0x189678u: goto label_189678;
        case 0x18967cu: goto label_18967c;
        case 0x189680u: goto label_189680;
        case 0x189684u: goto label_189684;
        case 0x189688u: goto label_189688;
        case 0x18968cu: goto label_18968c;
        case 0x189690u: goto label_189690;
        case 0x189694u: goto label_189694;
        case 0x189698u: goto label_189698;
        case 0x18969cu: goto label_18969c;
        case 0x1896a0u: goto label_1896a0;
        case 0x1896a4u: goto label_1896a4;
        case 0x1896a8u: goto label_1896a8;
        case 0x1896acu: goto label_1896ac;
        case 0x1896b0u: goto label_1896b0;
        case 0x1896b4u: goto label_1896b4;
        case 0x1896b8u: goto label_1896b8;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896c0u: goto label_1896c0;
        case 0x1896c4u: goto label_1896c4;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d0u: goto label_1896d0;
        case 0x1896d4u: goto label_1896d4;
        case 0x1896d8u: goto label_1896d8;
        case 0x1896dcu: goto label_1896dc;
        default: break;
    }

    ctx->pc = 0x1895d8u;

label_1895d8:
    // 0x1895d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1895dc:
    // 0x1895dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1895dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1895e0:
    // 0x1895e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1895e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1895e4:
    // 0x1895e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1895e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1895e8:
    // 0x1895e8: 0xc06ddac  jal         func_1B76B0
label_1895ec:
    if (ctx->pc == 0x1895ECu) {
        ctx->pc = 0x1895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895E8u;
        // 0x1895ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895F0u;
        goto label_1895f0;
    }
    ctx->pc = 0x1895E8u;
    SET_GPR_U32(ctx, 31, 0x1895F0u);
    ctx->pc = 0x1895ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E8u;
    // 0x1895ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1895E8u, 0x1895F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895F0u;
label_1895f0:
    // 0x1895f0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1895f4:
    if (ctx->pc == 0x1895F4u) {
        ctx->pc = 0x1895F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F0u;
        // 0x1895f4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895F8u;
        goto label_1895f8;
    }
    ctx->pc = 0x1895F0u;
    {
        const bool branch_taken_0x1895f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F0u;
        // 0x1895f4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895f0) {
            ctx->pc = 0x1896CCu;
            goto label_1896cc;
        }
    }
    ctx->pc = 0x1895F8u;
label_1895f8:
    // 0x1895f8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1895f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1895fc:
    // 0x1895fc: 0x244735d0  addiu       $a3, $v0, 0x35D0
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
label_189600:
    // 0x189600: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x189600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_189604:
    // 0x189604: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x189604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_189608:
    // 0x189608: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x189608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18960c:
    // 0x18960c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_189610:
    // 0x189610: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x189610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_189614:
    // 0x189614: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x189614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_189618:
    // 0x189618: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x189618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18961c:
    // 0x18961c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_189620:
    // 0x189620: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x189620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_189624:
    // 0x189624: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x189624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_189628:
    // 0x189628: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x189628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18962c:
    // 0x18962c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_189630:
    // 0x189630: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x189630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_189634:
    // 0x189634: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x189634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_189638:
    // 0x189638: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x189638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18963c:
    // 0x18963c: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_189640:
    // 0x189640: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_189644:
    // 0x189644: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x189644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_189648:
    // 0x189648: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x189648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18964c:
    // 0x18964c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_189650:
    // 0x189650: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_189654:
    // 0x189654: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_189658:
    if (ctx->pc == 0x189658u) {
        ctx->pc = 0x189658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189654u;
        // 0x189658: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18965Cu;
        goto label_18965c;
    }
    ctx->pc = 0x189654u;
    {
        const bool branch_taken_0x189654 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x189658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189654u;
        // 0x189658: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189654) {
            ctx->pc = 0x189688u;
            goto label_189688;
        }
    }
    ctx->pc = 0x18965Cu;
label_18965c:
    // 0x18965c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18965cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_189660:
    // 0x189660: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_189664:
    // 0x189664: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x189664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_189668:
    // 0x189668: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x189668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18966c:
    // 0x18966c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_189670:
    // 0x189670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189674:
    // 0x189674: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x189674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_189678:
    // 0x189678: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x189678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18967c:
    // 0x18967c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18967cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_189680:
    // 0x189680: 0x10000004  b           . + 4 + (0x4 << 2)
label_189684:
    if (ctx->pc == 0x189684u) {
        ctx->pc = 0x189684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189680u;
        // 0x189684: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189688u;
        goto label_189688;
    }
    ctx->pc = 0x189680u;
    {
        const bool branch_taken_0x189680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189680u;
        // 0x189684: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189680) {
            ctx->pc = 0x189694u;
            goto label_189694;
        }
    }
    ctx->pc = 0x189688u;
label_189688:
    // 0x189688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18968c:
    // 0x18968c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18968cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189690:
    // 0x189690: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x189690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_189694:
    // 0x189694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_189698:
    // 0x189698: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x189698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18969c:
    // 0x18969c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1896a0:
    if (ctx->pc == 0x1896A0u) {
        ctx->pc = 0x1896A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18969Cu;
        // 0x1896a0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896A4u;
        goto label_1896a4;
    }
    ctx->pc = 0x18969Cu;
    {
        const bool branch_taken_0x18969c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1896A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18969Cu;
        // 0x1896a0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18969c) {
            ctx->pc = 0x1896B8u;
            goto label_1896b8;
        }
    }
    ctx->pc = 0x1896A4u;
label_1896a4:
    // 0x1896a4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1896a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1896a8:
    // 0x1896a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1896ac:
    // 0x1896ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1896b0:
    // 0x1896b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1896b4:
    if (ctx->pc == 0x1896B4u) {
        ctx->pc = 0x1896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B0u;
        // 0x1896b4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896B8u;
        goto label_1896b8;
    }
    ctx->pc = 0x1896B0u;
    {
        const bool branch_taken_0x1896b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B0u;
        // 0x1896b4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896b0) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896B8u;
label_1896b8:
    // 0x1896b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1896b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1896bc:
    // 0x1896bc: 0xc0f809  jalr        $a2
label_1896c0:
    if (ctx->pc == 0x1896C0u) {
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896BCu;
        // 0x1896c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896C4u;
        goto label_1896c4;
    }
    ctx->pc = 0x1896BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1896C4u);
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896BCu;
        // 0x1896c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896BCu, 0x1896C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1896C4u;
label_1896c4:
    // 0x1896c4: 0xc06ddb6  jal         func_1B76D8
label_1896c8:
    if (ctx->pc == 0x1896C8u) {
        ctx->pc = 0x1896C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896C4u;
        // 0x1896c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896CCu;
        goto label_1896cc;
    }
    ctx->pc = 0x1896C4u;
    SET_GPR_U32(ctx, 31, 0x1896CCu);
    ctx->pc = 0x1896C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896C4u;
    // 0x1896c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1896C4u, 0x1896CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896CCu;
label_1896cc:
    // 0x1896cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1896ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1896d0:
    // 0x1896d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1896d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1896d4:
    // 0x1896d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1896d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1896d8:
    // 0x1896d8: 0x3e00008  jr          $ra
label_1896dc:
    if (ctx->pc == 0x1896DCu) {
        ctx->pc = 0x1896DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D8u;
        // 0x1896dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896E0u;
        goto label_fallthrough_0x1896d8;
    }
    ctx->pc = 0x1896D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D8u;
        // 0x1896dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1896d8:
    ctx->pc = 0x1896E0u;
}
