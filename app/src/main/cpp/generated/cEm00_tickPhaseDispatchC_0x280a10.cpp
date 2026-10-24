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

// Function: cEm00_tickPhaseDispatchC
// Address: 0x280a10 - 0x280ae8
void cEm00_tickPhaseDispatchC_0x280a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_tickPhaseDispatchC_0x280a10");
#endif

    switch (ctx->pc) {
        case 0x280a10u: goto label_280a10;
        case 0x280a14u: goto label_280a14;
        case 0x280a18u: goto label_280a18;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a20u: goto label_280a20;
        case 0x280a24u: goto label_280a24;
        case 0x280a28u: goto label_280a28;
        case 0x280a2cu: goto label_280a2c;
        case 0x280a30u: goto label_280a30;
        case 0x280a34u: goto label_280a34;
        case 0x280a38u: goto label_280a38;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a40u: goto label_280a40;
        case 0x280a44u: goto label_280a44;
        case 0x280a48u: goto label_280a48;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a50u: goto label_280a50;
        case 0x280a54u: goto label_280a54;
        case 0x280a58u: goto label_280a58;
        case 0x280a5cu: goto label_280a5c;
        case 0x280a60u: goto label_280a60;
        case 0x280a64u: goto label_280a64;
        case 0x280a68u: goto label_280a68;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a70u: goto label_280a70;
        case 0x280a74u: goto label_280a74;
        case 0x280a78u: goto label_280a78;
        case 0x280a7cu: goto label_280a7c;
        case 0x280a80u: goto label_280a80;
        case 0x280a84u: goto label_280a84;
        case 0x280a88u: goto label_280a88;
        case 0x280a8cu: goto label_280a8c;
        case 0x280a90u: goto label_280a90;
        case 0x280a94u: goto label_280a94;
        case 0x280a98u: goto label_280a98;
        case 0x280a9cu: goto label_280a9c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa4u: goto label_280aa4;
        case 0x280aa8u: goto label_280aa8;
        case 0x280aacu: goto label_280aac;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ab4u: goto label_280ab4;
        case 0x280ab8u: goto label_280ab8;
        case 0x280abcu: goto label_280abc;
        case 0x280ac0u: goto label_280ac0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ac8u: goto label_280ac8;
        case 0x280accu: goto label_280acc;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ad4u: goto label_280ad4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280adcu: goto label_280adc;
        case 0x280ae0u: goto label_280ae0;
        case 0x280ae4u: goto label_280ae4;
        default: break;
    }

    ctx->pc = 0x280a10u;

label_280a10:
    // 0x280a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_280a14:
    // 0x280a14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x280a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280a18:
    // 0x280a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_280a1c:
    // 0x280a1c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x280a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_280a20:
    // 0x280a20: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x280a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_280a24:
    // 0x280a24: 0x24698578  addiu       $t1, $v1, -0x7A88
    ctx->pc = 0x280a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935928));
label_280a28:
    // 0x280a28: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x280a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_280a2c:
    // 0x280a2c: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x280a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_280a30:
    // 0x280a30: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x280a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_280a34:
    // 0x280a34: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x280a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_280a38:
    // 0x280a38: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x280a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_280a3c:
    // 0x280a3c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x280a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_280a40:
    // 0x280a40: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x280a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_280a44:
    // 0x280a44: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x280a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_280a48:
    // 0x280a48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x280a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_280a4c:
    // 0x280a4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_280a50:
    if (ctx->pc == 0x280A50u) {
        ctx->pc = 0x280A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A4Cu;
        // 0x280a50: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280A54u;
        goto label_280a54;
    }
    ctx->pc = 0x280A4Cu;
    {
        const bool branch_taken_0x280a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280a4c) {
            ctx->pc = 0x280A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280A4Cu;
            // 0x280a50: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A54u;
            goto label_280a54;
        }
    }
    ctx->pc = 0x280A54u;
label_280a54:
    // 0x280a54: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x280a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_280a58:
    // 0x280a58: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_280a5c:
    // 0x280a5c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x280a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280a60:
    // 0x280a60: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x280a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_280a64:
    // 0x280a64: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x280a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_280a68:
    // 0x280a68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_280a6c:
    // 0x280a6c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_280a70:
    // 0x280a70: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_280a74:
    if (ctx->pc == 0x280A74u) {
        ctx->pc = 0x280A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A70u;
        // 0x280a74: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280A78u;
        goto label_280a78;
    }
    ctx->pc = 0x280A70u;
    {
        const bool branch_taken_0x280a70 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x280A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A70u;
        // 0x280a74: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a70) {
            ctx->pc = 0x280AA4u;
            goto label_280aa4;
        }
    }
    ctx->pc = 0x280A78u;
label_280a78:
    // 0x280a78: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x280a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_280a7c:
    // 0x280a7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x280a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_280a80:
    // 0x280a80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_280a84:
    // 0x280a84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x280a84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_280a88:
    // 0x280a88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x280a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_280a8c:
    // 0x280a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x280a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280a90:
    // 0x280a90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x280a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_280a94:
    // 0x280a94: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x280a94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_280a98:
    // 0x280a98: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x280a98u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_280a9c:
    // 0x280a9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_280aa0:
    if (ctx->pc == 0x280AA0u) {
        ctx->pc = 0x280AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A9Cu;
        // 0x280aa0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280AA4u;
        goto label_280aa4;
    }
    ctx->pc = 0x280A9Cu;
    {
        const bool branch_taken_0x280a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A9Cu;
        // 0x280aa0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a9c) {
            ctx->pc = 0x280AB0u;
            goto label_280ab0;
        }
    }
    ctx->pc = 0x280AA4u;
label_280aa4:
    // 0x280aa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x280aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_280aa8:
    // 0x280aa8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x280aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280aac:
    // 0x280aac: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x280aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_280ab0:
    // 0x280ab0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x280ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_280ab4:
    // 0x280ab4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_280ab8:
    if (ctx->pc == 0x280AB8u) {
        ctx->pc = 0x280AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AB4u;
        // 0x280ab8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280ABCu;
        goto label_280abc;
    }
    ctx->pc = 0x280AB4u;
    {
        const bool branch_taken_0x280ab4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x280AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AB4u;
        // 0x280ab8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ab4) {
            ctx->pc = 0x280AD0u;
            goto label_280ad0;
        }
    }
    ctx->pc = 0x280ABCu;
label_280abc:
    // 0x280abc: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x280abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_280ac0:
    // 0x280ac0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_280ac4:
    // 0x280ac4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_280ac8:
    // 0x280ac8: 0x10000002  b           . + 4 + (0x2 << 2)
label_280acc:
    if (ctx->pc == 0x280ACCu) {
        ctx->pc = 0x280ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AC8u;
        // 0x280acc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280AD0u;
        goto label_280ad0;
    }
    ctx->pc = 0x280AC8u;
    {
        const bool branch_taken_0x280ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AC8u;
        // 0x280acc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ac8) {
            ctx->pc = 0x280AD4u;
            goto label_280ad4;
        }
    }
    ctx->pc = 0x280AD0u;
label_280ad0:
    // 0x280ad0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x280ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_280ad4:
    // 0x280ad4: 0xe0f809  jalr        $a3
label_280ad8:
    if (ctx->pc == 0x280AD8u) {
        ctx->pc = 0x280AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AD4u;
        // 0x280ad8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280ADCu;
        goto label_280adc;
    }
    ctx->pc = 0x280AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x280ADCu);
        ctx->pc = 0x280AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AD4u;
        // 0x280ad8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280AD4u, 0x280ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280ADCu;
label_280adc:
    // 0x280adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_280ae0:
    // 0x280ae0: 0x3e00008  jr          $ra
label_280ae4:
    if (ctx->pc == 0x280AE4u) {
        ctx->pc = 0x280AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE0u;
        // 0x280ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280AE8u;
        goto label_fallthrough_0x280ae0;
    }
    ctx->pc = 0x280AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE0u;
        // 0x280ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x280ae0:
    ctx->pc = 0x280AE8u;
}
