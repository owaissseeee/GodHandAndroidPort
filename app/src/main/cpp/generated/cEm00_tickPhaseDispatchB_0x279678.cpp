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

// Function: cEm00_tickPhaseDispatchB
// Address: 0x279678 - 0x279750
void cEm00_tickPhaseDispatchB_0x279678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_tickPhaseDispatchB_0x279678");
#endif

    switch (ctx->pc) {
        case 0x279678u: goto label_279678;
        case 0x27967cu: goto label_27967c;
        case 0x279680u: goto label_279680;
        case 0x279684u: goto label_279684;
        case 0x279688u: goto label_279688;
        case 0x27968cu: goto label_27968c;
        case 0x279690u: goto label_279690;
        case 0x279694u: goto label_279694;
        case 0x279698u: goto label_279698;
        case 0x27969cu: goto label_27969c;
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796d8u: goto label_2796d8;
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e0u: goto label_2796e0;
        case 0x2796e4u: goto label_2796e4;
        case 0x2796e8u: goto label_2796e8;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796f0u: goto label_2796f0;
        case 0x2796f4u: goto label_2796f4;
        case 0x2796f8u: goto label_2796f8;
        case 0x2796fcu: goto label_2796fc;
        case 0x279700u: goto label_279700;
        case 0x279704u: goto label_279704;
        case 0x279708u: goto label_279708;
        case 0x27970cu: goto label_27970c;
        case 0x279710u: goto label_279710;
        case 0x279714u: goto label_279714;
        case 0x279718u: goto label_279718;
        case 0x27971cu: goto label_27971c;
        case 0x279720u: goto label_279720;
        case 0x279724u: goto label_279724;
        case 0x279728u: goto label_279728;
        case 0x27972cu: goto label_27972c;
        case 0x279730u: goto label_279730;
        case 0x279734u: goto label_279734;
        case 0x279738u: goto label_279738;
        case 0x27973cu: goto label_27973c;
        case 0x279740u: goto label_279740;
        case 0x279744u: goto label_279744;
        case 0x279748u: goto label_279748;
        case 0x27974cu: goto label_27974c;
        default: break;
    }

    ctx->pc = 0x279678u;

label_279678:
    // 0x279678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27967c:
    // 0x27967c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279680:
    // 0x279680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_279684:
    // 0x279684: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x279684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_279688:
    // 0x279688: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x279688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27968c:
    // 0x27968c: 0x24697d28  addiu       $t1, $v1, 0x7D28
    ctx->pc = 0x27968cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 32040));
label_279690:
    // 0x279690: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x279690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_279694:
    // 0x279694: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x279694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_279698:
    // 0x279698: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x279698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27969c:
    // 0x27969c: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x27969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2796a0:
    // 0x2796a0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2796a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2796a4:
    // 0x2796a4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2796a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2796a8:
    // 0x2796a8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2796a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2796ac:
    // 0x2796ac: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2796acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2796b0:
    // 0x2796b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2796b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2796b4:
    // 0x2796b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2796b8:
    if (ctx->pc == 0x2796B8u) {
        ctx->pc = 0x2796B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B4u;
        // 0x2796b8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796BCu;
        goto label_2796bc;
    }
    ctx->pc = 0x2796B4u;
    {
        const bool branch_taken_0x2796b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2796b4) {
            ctx->pc = 0x2796B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2796B4u;
            // 0x2796b8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2796BCu;
            goto label_2796bc;
        }
    }
    ctx->pc = 0x2796BCu;
label_2796bc:
    // 0x2796bc: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x2796bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_2796c0:
    // 0x2796c0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2796c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2796c4:
    // 0x2796c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2796c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2796c8:
    // 0x2796c8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2796c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_2796cc:
    // 0x2796cc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2796ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2796d0:
    // 0x2796d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2796d4:
    // 0x2796d4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2796d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_2796d8:
    // 0x2796d8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_2796dc:
    if (ctx->pc == 0x2796DCu) {
        ctx->pc = 0x2796DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796D8u;
        // 0x2796dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796E0u;
        goto label_2796e0;
    }
    ctx->pc = 0x2796D8u;
    {
        const bool branch_taken_0x2796d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2796DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796D8u;
        // 0x2796dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796d8) {
            ctx->pc = 0x27970Cu;
            goto label_27970c;
        }
    }
    ctx->pc = 0x2796E0u;
label_2796e0:
    // 0x2796e0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2796e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2796e4:
    // 0x2796e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2796e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2796e8:
    // 0x2796e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2796e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2796ec:
    // 0x2796ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2796ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2796f0:
    // 0x2796f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2796f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2796f4:
    // 0x2796f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2796f8:
    // 0x2796f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2796fc:
    // 0x2796fc: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x2796fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_279700:
    // 0x279700: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x279700u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_279704:
    // 0x279704: 0x10000004  b           . + 4 + (0x4 << 2)
label_279708:
    if (ctx->pc == 0x279708u) {
        ctx->pc = 0x279708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279704u;
        // 0x279708: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27970Cu;
        goto label_27970c;
    }
    ctx->pc = 0x279704u;
    {
        const bool branch_taken_0x279704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279704u;
        // 0x279708: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279704) {
            ctx->pc = 0x279718u;
            goto label_279718;
        }
    }
    ctx->pc = 0x27970Cu;
label_27970c:
    // 0x27970c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_279710:
    // 0x279710: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x279710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_279714:
    // 0x279714: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x279714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_279718:
    // 0x279718: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_27971c:
    // 0x27971c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_279720:
    if (ctx->pc == 0x279720u) {
        ctx->pc = 0x279720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27971Cu;
        // 0x279720: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279724u;
        goto label_279724;
    }
    ctx->pc = 0x27971Cu;
    {
        const bool branch_taken_0x27971c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x279720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27971Cu;
        // 0x279720: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27971c) {
            ctx->pc = 0x279738u;
            goto label_279738;
        }
    }
    ctx->pc = 0x279724u;
label_279724:
    // 0x279724: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x279724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_279728:
    // 0x279728: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x279728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27972c:
    // 0x27972c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_279730:
    // 0x279730: 0x10000002  b           . + 4 + (0x2 << 2)
label_279734:
    if (ctx->pc == 0x279734u) {
        ctx->pc = 0x279734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279730u;
        // 0x279734: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279738u;
        goto label_279738;
    }
    ctx->pc = 0x279730u;
    {
        const bool branch_taken_0x279730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279730u;
        // 0x279734: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279730) {
            ctx->pc = 0x27973Cu;
            goto label_27973c;
        }
    }
    ctx->pc = 0x279738u;
label_279738:
    // 0x279738: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x279738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27973c:
    // 0x27973c: 0xe0f809  jalr        $a3
label_279740:
    if (ctx->pc == 0x279740u) {
        ctx->pc = 0x279740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27973Cu;
        // 0x279740: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279744u;
        goto label_279744;
    }
    ctx->pc = 0x27973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x279744u);
        ctx->pc = 0x279740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27973Cu;
        // 0x279740: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27973Cu, 0x279744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279744u;
label_279744:
    // 0x279744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_279748:
    // 0x279748: 0x3e00008  jr          $ra
label_27974c:
    if (ctx->pc == 0x27974Cu) {
        ctx->pc = 0x27974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279748u;
        // 0x27974c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279750u;
        goto label_fallthrough_0x279748;
    }
    ctx->pc = 0x279748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279748u;
        // 0x27974c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279748:
    ctx->pc = 0x279750u;
}
