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

// Function: cOmBase_tickPhaseTable288570
// Address: 0x288570 - 0x288660
void cOmBase_tickPhaseTable288570_0x288570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickPhaseTable288570_0x288570");
#endif

    switch (ctx->pc) {
        case 0x288570u: goto label_288570;
        case 0x288574u: goto label_288574;
        case 0x288578u: goto label_288578;
        case 0x28857cu: goto label_28857c;
        case 0x288580u: goto label_288580;
        case 0x288584u: goto label_288584;
        case 0x288588u: goto label_288588;
        case 0x28858cu: goto label_28858c;
        case 0x288590u: goto label_288590;
        case 0x288594u: goto label_288594;
        case 0x288598u: goto label_288598;
        case 0x28859cu: goto label_28859c;
        case 0x2885a0u: goto label_2885a0;
        case 0x2885a4u: goto label_2885a4;
        case 0x2885a8u: goto label_2885a8;
        case 0x2885acu: goto label_2885ac;
        case 0x2885b0u: goto label_2885b0;
        case 0x2885b4u: goto label_2885b4;
        case 0x2885b8u: goto label_2885b8;
        case 0x2885bcu: goto label_2885bc;
        case 0x2885c0u: goto label_2885c0;
        case 0x2885c4u: goto label_2885c4;
        case 0x2885c8u: goto label_2885c8;
        case 0x2885ccu: goto label_2885cc;
        case 0x2885d0u: goto label_2885d0;
        case 0x2885d4u: goto label_2885d4;
        case 0x2885d8u: goto label_2885d8;
        case 0x2885dcu: goto label_2885dc;
        case 0x2885e0u: goto label_2885e0;
        case 0x2885e4u: goto label_2885e4;
        case 0x2885e8u: goto label_2885e8;
        case 0x2885ecu: goto label_2885ec;
        case 0x2885f0u: goto label_2885f0;
        case 0x2885f4u: goto label_2885f4;
        case 0x2885f8u: goto label_2885f8;
        case 0x2885fcu: goto label_2885fc;
        case 0x288600u: goto label_288600;
        case 0x288604u: goto label_288604;
        case 0x288608u: goto label_288608;
        case 0x28860cu: goto label_28860c;
        case 0x288610u: goto label_288610;
        case 0x288614u: goto label_288614;
        case 0x288618u: goto label_288618;
        case 0x28861cu: goto label_28861c;
        case 0x288620u: goto label_288620;
        case 0x288624u: goto label_288624;
        case 0x288628u: goto label_288628;
        case 0x28862cu: goto label_28862c;
        case 0x288630u: goto label_288630;
        case 0x288634u: goto label_288634;
        case 0x288638u: goto label_288638;
        case 0x28863cu: goto label_28863c;
        case 0x288640u: goto label_288640;
        case 0x288644u: goto label_288644;
        case 0x288648u: goto label_288648;
        case 0x28864cu: goto label_28864c;
        case 0x288650u: goto label_288650;
        case 0x288654u: goto label_288654;
        case 0x288658u: goto label_288658;
        case 0x28865cu: goto label_28865c;
        default: break;
    }

    ctx->pc = 0x288570u;

label_288570:
    // 0x288570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_288574:
    // 0x288574: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x288574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_288578:
    // 0x288578: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28857c:
    // 0x28857c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_288580:
    // 0x288580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288584:
    // 0x288584: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x288584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_288588:
    // 0x288588: 0x24688c68  addiu       $t0, $v1, -0x7398
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937704));
label_28858c:
    // 0x28858c: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x28858cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_288590:
    // 0x288590: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x288590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_288594:
    // 0x288594: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x288594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_288598:
    // 0x288598: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x288598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28859c:
    // 0x28859c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x28859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2885a0:
    // 0x2885a0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2885a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2885a4:
    // 0x2885a4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2885a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2885a8:
    // 0x2885a8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2885a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2885ac:
    // 0x2885ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2885acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2885b0:
    // 0x2885b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2885b4:
    if (ctx->pc == 0x2885B4u) {
        ctx->pc = 0x2885B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885B0u;
        // 0x2885b4: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885B8u;
        goto label_2885b8;
    }
    ctx->pc = 0x2885B0u;
    {
        const bool branch_taken_0x2885b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2885b0) {
            ctx->pc = 0x2885B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2885B0u;
            // 0x2885b4: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2885B8u;
            goto label_2885b8;
        }
    }
    ctx->pc = 0x2885B8u;
label_2885b8:
    // 0x2885b8: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x2885b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_2885bc:
    // 0x2885bc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2885c0:
    // 0x2885c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2885c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2885c4:
    // 0x2885c4: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2885c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_2885c8:
    // 0x2885c8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2885c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2885cc:
    // 0x2885cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2885d0:
    // 0x2885d0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_2885d4:
    // 0x2885d4: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_2885d8:
    if (ctx->pc == 0x2885D8u) {
        ctx->pc = 0x2885D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D4u;
        // 0x2885d8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2885DCu;
        goto label_2885dc;
    }
    ctx->pc = 0x2885D4u;
    {
        const bool branch_taken_0x2885d4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2885D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D4u;
        // 0x2885d8: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885d4) {
            ctx->pc = 0x288608u;
            goto label_288608;
        }
    }
    ctx->pc = 0x2885DCu;
label_2885dc:
    // 0x2885dc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2885dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2885e0:
    // 0x2885e0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2885e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2885e4:
    // 0x2885e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2885e8:
    // 0x2885e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2885ec:
    // 0x2885ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2885ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2885f0:
    // 0x2885f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2885f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2885f4:
    // 0x2885f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2885f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2885f8:
    // 0x2885f8: 0xdc87fff8  ld          $a3, -0x8($a0)
    ctx->pc = 0x2885f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_2885fc:
    // 0x2885fc: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x2885fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_288600:
    // 0x288600: 0x10000004  b           . + 4 + (0x4 << 2)
label_288604:
    if (ctx->pc == 0x288604u) {
        ctx->pc = 0x288604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288600u;
        // 0x288604: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288608u;
        goto label_288608;
    }
    ctx->pc = 0x288600u;
    {
        const bool branch_taken_0x288600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288600u;
        // 0x288604: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288600) {
            ctx->pc = 0x288614u;
            goto label_288614;
        }
    }
    ctx->pc = 0x288608u;
label_288608:
    // 0x288608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x288608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28860c:
    // 0x28860c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_288610:
    // 0x288610: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x288610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_288614:
    // 0x288614: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_288618:
    // 0x288618: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28861c:
    if (ctx->pc == 0x28861Cu) {
        ctx->pc = 0x28861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288618u;
        // 0x28861c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288620u;
        goto label_288620;
    }
    ctx->pc = 0x288618u;
    {
        const bool branch_taken_0x288618 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288618u;
        // 0x28861c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288618) {
            ctx->pc = 0x288634u;
            goto label_288634;
        }
    }
    ctx->pc = 0x288620u;
label_288620:
    // 0x288620: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x288620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_288624:
    // 0x288624: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x288624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_288628:
    // 0x288628: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x288628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28862c:
    // 0x28862c: 0x10000002  b           . + 4 + (0x2 << 2)
label_288630:
    if (ctx->pc == 0x288630u) {
        ctx->pc = 0x288630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28862Cu;
        // 0x288630: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288634u;
        goto label_288634;
    }
    ctx->pc = 0x28862Cu;
    {
        const bool branch_taken_0x28862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28862Cu;
        // 0x288630: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28862c) {
            ctx->pc = 0x288638u;
            goto label_288638;
        }
    }
    ctx->pc = 0x288634u;
label_288634:
    // 0x288634: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x288634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_288638:
    // 0x288638: 0xc0f809  jalr        $a2
label_28863c:
    if (ctx->pc == 0x28863Cu) {
        ctx->pc = 0x28863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288638u;
        // 0x28863c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288640u;
        goto label_288640;
    }
    ctx->pc = 0x288638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x288640u);
        ctx->pc = 0x28863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288638u;
        // 0x28863c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288638u, 0x288640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288640u;
label_288640:
    // 0x288640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288644:
    // 0x288644: 0xc0aa1fa  jal         func_2A87E8
label_288648:
    if (ctx->pc == 0x288648u) {
        ctx->pc = 0x288648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288644u;
        // 0x288648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28864Cu;
        goto label_28864c;
    }
    ctx->pc = 0x288644u;
    SET_GPR_U32(ctx, 31, 0x28864Cu);
    ctx->pc = 0x288648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288644u;
    // 0x288648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x288644u, 0x28864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28864Cu;
label_28864c:
    // 0x28864c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28864cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288650:
    // 0x288650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_288654:
    // 0x288654: 0x3e00008  jr          $ra
label_288658:
    if (ctx->pc == 0x288658u) {
        ctx->pc = 0x288658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288654u;
        // 0x288658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28865Cu;
        goto label_28865c;
    }
    ctx->pc = 0x288654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288654u;
        // 0x288658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28865Cu;
label_28865c:
    // 0x28865c: 0x0  nop
    ctx->pc = 0x28865cu;
    // NOP
    ctx->pc = 0x288660u;
}
