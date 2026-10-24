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

// Function: cEm00_tickPhaseTable
// Address: 0x27e4e8 - 0x27e5c0
void cEm00_tickPhaseTable_0x27e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_tickPhaseTable_0x27e4e8");
#endif

    switch (ctx->pc) {
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e4f8u: goto label_27e4f8;
        case 0x27e4fcu: goto label_27e4fc;
        case 0x27e500u: goto label_27e500;
        case 0x27e504u: goto label_27e504;
        case 0x27e508u: goto label_27e508;
        case 0x27e50cu: goto label_27e50c;
        case 0x27e510u: goto label_27e510;
        case 0x27e514u: goto label_27e514;
        case 0x27e518u: goto label_27e518;
        case 0x27e51cu: goto label_27e51c;
        case 0x27e520u: goto label_27e520;
        case 0x27e524u: goto label_27e524;
        case 0x27e528u: goto label_27e528;
        case 0x27e52cu: goto label_27e52c;
        case 0x27e530u: goto label_27e530;
        case 0x27e534u: goto label_27e534;
        case 0x27e538u: goto label_27e538;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e540u: goto label_27e540;
        case 0x27e544u: goto label_27e544;
        case 0x27e548u: goto label_27e548;
        case 0x27e54cu: goto label_27e54c;
        case 0x27e550u: goto label_27e550;
        case 0x27e554u: goto label_27e554;
        case 0x27e558u: goto label_27e558;
        case 0x27e55cu: goto label_27e55c;
        case 0x27e560u: goto label_27e560;
        case 0x27e564u: goto label_27e564;
        case 0x27e568u: goto label_27e568;
        case 0x27e56cu: goto label_27e56c;
        case 0x27e570u: goto label_27e570;
        case 0x27e574u: goto label_27e574;
        case 0x27e578u: goto label_27e578;
        case 0x27e57cu: goto label_27e57c;
        case 0x27e580u: goto label_27e580;
        case 0x27e584u: goto label_27e584;
        case 0x27e588u: goto label_27e588;
        case 0x27e58cu: goto label_27e58c;
        case 0x27e590u: goto label_27e590;
        case 0x27e594u: goto label_27e594;
        case 0x27e598u: goto label_27e598;
        case 0x27e59cu: goto label_27e59c;
        case 0x27e5a0u: goto label_27e5a0;
        case 0x27e5a4u: goto label_27e5a4;
        case 0x27e5a8u: goto label_27e5a8;
        case 0x27e5acu: goto label_27e5ac;
        case 0x27e5b0u: goto label_27e5b0;
        case 0x27e5b4u: goto label_27e5b4;
        case 0x27e5b8u: goto label_27e5b8;
        case 0x27e5bcu: goto label_27e5bc;
        default: break;
    }

    ctx->pc = 0x27e4e8u;

label_27e4e8:
    // 0x27e4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27e4ec:
    // 0x27e4ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e4f0:
    // 0x27e4f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27e4f4:
    // 0x27e4f4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_27e4f8:
    // 0x27e4f8: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27e4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27e4fc:
    // 0x27e4fc: 0x246982b8  addiu       $t1, $v1, -0x7D48
    ctx->pc = 0x27e4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935224));
label_27e500:
    // 0x27e500: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x27e500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27e504:
    // 0x27e504: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x27e504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27e508:
    // 0x27e508: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x27e508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27e50c:
    // 0x27e50c: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x27e50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27e510:
    // 0x27e510: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x27e510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27e514:
    // 0x27e514: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x27e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27e518:
    // 0x27e518: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x27e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27e51c:
    // 0x27e51c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x27e51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27e520:
    // 0x27e520: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27e520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27e524:
    // 0x27e524: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27e528:
    if (ctx->pc == 0x27E528u) {
        ctx->pc = 0x27E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E524u;
        // 0x27e528: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E52Cu;
        goto label_27e52c;
    }
    ctx->pc = 0x27E524u;
    {
        const bool branch_taken_0x27e524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e524) {
            ctx->pc = 0x27E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E524u;
            // 0x27e528: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E52Cu;
            goto label_27e52c;
        }
    }
    ctx->pc = 0x27E52Cu;
label_27e52c:
    // 0x27e52c: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27e52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27e530:
    // 0x27e530: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e534:
    // 0x27e534: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27e534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e538:
    // 0x27e538: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x27e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_27e53c:
    // 0x27e53c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x27e53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_27e540:
    // 0x27e540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e544:
    // 0x27e544: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_27e548:
    // 0x27e548: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_27e54c:
    if (ctx->pc == 0x27E54Cu) {
        ctx->pc = 0x27E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E548u;
        // 0x27e54c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E550u;
        goto label_27e550;
    }
    ctx->pc = 0x27E548u;
    {
        const bool branch_taken_0x27e548 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E548u;
        // 0x27e54c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e548) {
            ctx->pc = 0x27E57Cu;
            goto label_27e57c;
        }
    }
    ctx->pc = 0x27E550u;
label_27e550:
    // 0x27e550: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x27e550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_27e554:
    // 0x27e554: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x27e554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27e558:
    // 0x27e558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e55c:
    // 0x27e55c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e55cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27e560:
    // 0x27e560: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27e564:
    // 0x27e564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e568:
    // 0x27e568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27e568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27e56c:
    // 0x27e56c: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x27e56cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_27e570:
    // 0x27e570: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x27e570u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27e574:
    // 0x27e574: 0x10000004  b           . + 4 + (0x4 << 2)
label_27e578:
    if (ctx->pc == 0x27E578u) {
        ctx->pc = 0x27E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E574u;
        // 0x27e578: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E57Cu;
        goto label_27e57c;
    }
    ctx->pc = 0x27E574u;
    {
        const bool branch_taken_0x27e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E574u;
        // 0x27e578: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e574) {
            ctx->pc = 0x27E588u;
            goto label_27e588;
        }
    }
    ctx->pc = 0x27E57Cu;
label_27e57c:
    // 0x27e57c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27e580:
    // 0x27e580: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x27e580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e584:
    // 0x27e584: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27e588:
    // 0x27e588: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_27e58c:
    // 0x27e58c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27e590:
    if (ctx->pc == 0x27E590u) {
        ctx->pc = 0x27E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E58Cu;
        // 0x27e590: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E594u;
        goto label_27e594;
    }
    ctx->pc = 0x27E58Cu;
    {
        const bool branch_taken_0x27e58c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E58Cu;
        // 0x27e590: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e58c) {
            ctx->pc = 0x27E5A8u;
            goto label_27e5a8;
        }
    }
    ctx->pc = 0x27E594u;
label_27e594:
    // 0x27e594: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x27e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27e598:
    // 0x27e598: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e59c:
    // 0x27e59c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27e5a0:
    // 0x27e5a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27e5a4:
    if (ctx->pc == 0x27E5A4u) {
        ctx->pc = 0x27E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A0u;
        // 0x27e5a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E5A8u;
        goto label_27e5a8;
    }
    ctx->pc = 0x27E5A0u;
    {
        const bool branch_taken_0x27e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A0u;
        // 0x27e5a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5a0) {
            ctx->pc = 0x27E5ACu;
            goto label_27e5ac;
        }
    }
    ctx->pc = 0x27E5A8u;
label_27e5a8:
    // 0x27e5a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27e5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27e5ac:
    // 0x27e5ac: 0xe0f809  jalr        $a3
label_27e5b0:
    if (ctx->pc == 0x27E5B0u) {
        ctx->pc = 0x27E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5ACu;
        // 0x27e5b0: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E5B4u;
        goto label_27e5b4;
    }
    ctx->pc = 0x27E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27E5B4u);
        ctx->pc = 0x27E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5ACu;
        // 0x27e5b0: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E5ACu, 0x27E5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E5B4u;
label_27e5b4:
    // 0x27e5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27e5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27e5b8:
    // 0x27e5b8: 0x3e00008  jr          $ra
label_27e5bc:
    if (ctx->pc == 0x27E5BCu) {
        ctx->pc = 0x27E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5B8u;
        // 0x27e5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E5C0u;
        goto label_fallthrough_0x27e5b8;
    }
    ctx->pc = 0x27E5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5B8u;
        // 0x27e5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27e5b8:
    ctx->pc = 0x27E5C0u;
}
