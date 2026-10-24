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

// Function: func_00174A78
// Address: 0x174a78 - 0x174bb0
void func_00174A78_0x174a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174A78_0x174a78");
#endif

    switch (ctx->pc) {
        case 0x174a78u: goto label_174a78;
        case 0x174a7cu: goto label_174a7c;
        case 0x174a80u: goto label_174a80;
        case 0x174a84u: goto label_174a84;
        case 0x174a88u: goto label_174a88;
        case 0x174a8cu: goto label_174a8c;
        case 0x174a90u: goto label_174a90;
        case 0x174a94u: goto label_174a94;
        case 0x174a98u: goto label_174a98;
        case 0x174a9cu: goto label_174a9c;
        case 0x174aa0u: goto label_174aa0;
        case 0x174aa4u: goto label_174aa4;
        case 0x174aa8u: goto label_174aa8;
        case 0x174aacu: goto label_174aac;
        case 0x174ab0u: goto label_174ab0;
        case 0x174ab4u: goto label_174ab4;
        case 0x174ab8u: goto label_174ab8;
        case 0x174abcu: goto label_174abc;
        case 0x174ac0u: goto label_174ac0;
        case 0x174ac4u: goto label_174ac4;
        case 0x174ac8u: goto label_174ac8;
        case 0x174accu: goto label_174acc;
        case 0x174ad0u: goto label_174ad0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ad8u: goto label_174ad8;
        case 0x174adcu: goto label_174adc;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae4u: goto label_174ae4;
        case 0x174ae8u: goto label_174ae8;
        case 0x174aecu: goto label_174aec;
        case 0x174af0u: goto label_174af0;
        case 0x174af4u: goto label_174af4;
        case 0x174af8u: goto label_174af8;
        case 0x174afcu: goto label_174afc;
        case 0x174b00u: goto label_174b00;
        case 0x174b04u: goto label_174b04;
        case 0x174b08u: goto label_174b08;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b10u: goto label_174b10;
        case 0x174b14u: goto label_174b14;
        case 0x174b18u: goto label_174b18;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b20u: goto label_174b20;
        case 0x174b24u: goto label_174b24;
        case 0x174b28u: goto label_174b28;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b30u: goto label_174b30;
        case 0x174b34u: goto label_174b34;
        case 0x174b38u: goto label_174b38;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b40u: goto label_174b40;
        case 0x174b44u: goto label_174b44;
        case 0x174b48u: goto label_174b48;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b50u: goto label_174b50;
        case 0x174b54u: goto label_174b54;
        case 0x174b58u: goto label_174b58;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b60u: goto label_174b60;
        case 0x174b64u: goto label_174b64;
        case 0x174b68u: goto label_174b68;
        case 0x174b6cu: goto label_174b6c;
        case 0x174b70u: goto label_174b70;
        case 0x174b74u: goto label_174b74;
        case 0x174b78u: goto label_174b78;
        case 0x174b7cu: goto label_174b7c;
        case 0x174b80u: goto label_174b80;
        case 0x174b84u: goto label_174b84;
        case 0x174b88u: goto label_174b88;
        case 0x174b8cu: goto label_174b8c;
        case 0x174b90u: goto label_174b90;
        case 0x174b94u: goto label_174b94;
        case 0x174b98u: goto label_174b98;
        case 0x174b9cu: goto label_174b9c;
        case 0x174ba0u: goto label_174ba0;
        case 0x174ba4u: goto label_174ba4;
        case 0x174ba8u: goto label_174ba8;
        case 0x174bacu: goto label_174bac;
        default: break;
    }

    ctx->pc = 0x174a78u;

label_174a78:
    // 0x174a78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_174a7c:
    // 0x174a7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x174a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_174a80:
    // 0x174a80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x174a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_174a84:
    // 0x174a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174a88:
    // 0x174a88: 0xc06ddac  jal         func_1B76B0
label_174a8c:
    if (ctx->pc == 0x174A8Cu) {
        ctx->pc = 0x174A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A88u;
        // 0x174a8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A90u;
        goto label_174a90;
    }
    ctx->pc = 0x174A88u;
    SET_GPR_U32(ctx, 31, 0x174A90u);
    ctx->pc = 0x174A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A88u;
    // 0x174a8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x174A88u, 0x174A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A90u;
label_174a90:
    // 0x174a90: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_174a94:
    if (ctx->pc == 0x174A94u) {
        ctx->pc = 0x174A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A90u;
        // 0x174a94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A98u;
        goto label_174a98;
    }
    ctx->pc = 0x174A90u;
    {
        const bool branch_taken_0x174a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a90) {
            ctx->pc = 0x174A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174A90u;
            // 0x174a94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174BA0u;
            goto label_174ba0;
        }
    }
    ctx->pc = 0x174A98u;
label_174a98:
    // 0x174a98: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x174a98u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_174a9c:
    // 0x174a9c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x174a9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_174aa0:
    // 0x174aa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_174aa4:
    // 0x174aa4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_174aa8:
    if (ctx->pc == 0x174AA8u) {
        ctx->pc = 0x174AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA4u;
        // 0x174aa8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174AACu;
        goto label_174aac;
    }
    ctx->pc = 0x174AA4u;
    {
        const bool branch_taken_0x174aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA4u;
        // 0x174aa8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa4) {
            ctx->pc = 0x174B94u;
            goto label_174b94;
        }
    }
    ctx->pc = 0x174AACu;
label_174aac:
    // 0x174aac: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x174aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_174ab0:
    // 0x174ab0: 0x244710b0  addiu       $a3, $v0, 0x10B0
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_174ab4:
    // 0x174ab4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x174ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_174ab8:
    // 0x174ab8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x174ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_174abc:
    // 0x174abc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x174abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_174ac0:
    // 0x174ac0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x174ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_174ac4:
    // 0x174ac4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x174ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_174ac8:
    // 0x174ac8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x174ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_174acc:
    // 0x174acc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x174accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174ad0:
    // 0x174ad0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x174ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_174ad4:
    // 0x174ad4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x174ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174ad8:
    // 0x174ad8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x174ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_174adc:
    // 0x174adc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x174adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174ae0:
    // 0x174ae0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x174ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_174ae4:
    // 0x174ae4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x174ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_174ae8:
    // 0x174ae8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x174ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_174aec:
    // 0x174aec: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x174aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174af0:
    // 0x174af0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x174af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_174af4:
    // 0x174af4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_174af8:
    // 0x174af8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_174afc:
    // 0x174afc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x174afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_174b00:
    // 0x174b00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174b04:
    // 0x174b04: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_174b08:
    // 0x174b08: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_174b0c:
    if (ctx->pc == 0x174B0Cu) {
        ctx->pc = 0x174B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B08u;
        // 0x174b0c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B10u;
        goto label_174b10;
    }
    ctx->pc = 0x174B08u;
    {
        const bool branch_taken_0x174b08 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x174B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B08u;
        // 0x174b0c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b08) {
            ctx->pc = 0x174B3Cu;
            goto label_174b3c;
        }
    }
    ctx->pc = 0x174B10u;
label_174b10:
    // 0x174b10: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x174b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_174b14:
    // 0x174b14: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x174b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_174b18:
    // 0x174b18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x174b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174b1c:
    // 0x174b1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_174b20:
    // 0x174b20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_174b24:
    // 0x174b24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174b28:
    // 0x174b28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_174b2c:
    // 0x174b2c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x174b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_174b30:
    // 0x174b30: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x174b30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_174b34:
    // 0x174b34: 0x10000004  b           . + 4 + (0x4 << 2)
label_174b38:
    if (ctx->pc == 0x174B38u) {
        ctx->pc = 0x174B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B34u;
        // 0x174b38: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B3Cu;
        goto label_174b3c;
    }
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B34u;
        // 0x174b38: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174B48u;
            goto label_174b48;
        }
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_174b40:
    // 0x174b40: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174b44:
    // 0x174b44: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x174b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_174b48:
    // 0x174b48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_174b4c:
    // 0x174b4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_174b50:
    // 0x174b50: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_174b54:
    if (ctx->pc == 0x174B54u) {
        ctx->pc = 0x174B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B50u;
        // 0x174b54: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B58u;
        goto label_174b58;
    }
    ctx->pc = 0x174B50u;
    {
        const bool branch_taken_0x174b50 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x174B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B50u;
        // 0x174b54: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b50) {
            ctx->pc = 0x174B6Cu;
            goto label_174b6c;
        }
    }
    ctx->pc = 0x174B58u;
label_174b58:
    // 0x174b58: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x174b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_174b5c:
    // 0x174b5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174b60:
    // 0x174b60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_174b64:
    // 0x174b64: 0x10000002  b           . + 4 + (0x2 << 2)
label_174b68:
    if (ctx->pc == 0x174B68u) {
        ctx->pc = 0x174B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B64u;
        // 0x174b68: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B6Cu;
        goto label_174b6c;
    }
    ctx->pc = 0x174B64u;
    {
        const bool branch_taken_0x174b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B64u;
        // 0x174b68: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b64) {
            ctx->pc = 0x174B70u;
            goto label_174b70;
        }
    }
    ctx->pc = 0x174B6Cu;
label_174b6c:
    // 0x174b6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_174b70:
    // 0x174b70: 0xc0f809  jalr        $a2
label_174b74:
    if (ctx->pc == 0x174B74u) {
        ctx->pc = 0x174B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B70u;
        // 0x174b74: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B78u;
        goto label_174b78;
    }
    ctx->pc = 0x174B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x174B78u);
        ctx->pc = 0x174B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B70u;
        // 0x174b74: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174B70u, 0x174B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174B78u;
label_174b78:
    // 0x174b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174b7c:
    // 0x174b7c: 0xc0aa1fa  jal         func_2A87E8
label_174b80:
    if (ctx->pc == 0x174B80u) {
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B84u;
        goto label_174b84;
    }
    ctx->pc = 0x174B7Cu;
    SET_GPR_U32(ctx, 31, 0x174B84u);
    ctx->pc = 0x174B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B7Cu;
    // 0x174b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x174B7Cu, 0x174B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B84u;
label_174b84:
    // 0x174b84: 0xc06ddb6  jal         func_1B76D8
label_174b88:
    if (ctx->pc == 0x174B88u) {
        ctx->pc = 0x174B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B84u;
        // 0x174b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B8Cu;
        goto label_174b8c;
    }
    ctx->pc = 0x174B84u;
    SET_GPR_U32(ctx, 31, 0x174B8Cu);
    ctx->pc = 0x174B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B84u;
    // 0x174b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x174B84u, 0x174B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B8Cu;
label_174b8c:
    // 0x174b8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_174b90:
    if (ctx->pc == 0x174B90u) {
        ctx->pc = 0x174B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B8Cu;
        // 0x174b90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B94u;
        goto label_174b94;
    }
    ctx->pc = 0x174B8Cu;
    {
        const bool branch_taken_0x174b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B8Cu;
        // 0x174b90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b8c) {
            ctx->pc = 0x174BA0u;
            goto label_174ba0;
        }
    }
    ctx->pc = 0x174B94u;
label_174b94:
    // 0x174b94: 0xc071f8c  jal         func_1C7E30
label_174b98:
    if (ctx->pc == 0x174B98u) {
        ctx->pc = 0x174B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B94u;
        // 0x174b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B9Cu;
        goto label_174b9c;
    }
    ctx->pc = 0x174B94u;
    SET_GPR_U32(ctx, 31, 0x174B9Cu);
    ctx->pc = 0x174B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B94u;
    // 0x174b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x174B94u, 0x174B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x174b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_174ba0:
    // 0x174ba0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174ba4:
    // 0x174ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174ba8:
    // 0x174ba8: 0x3e00008  jr          $ra
label_174bac:
    if (ctx->pc == 0x174BACu) {
        ctx->pc = 0x174BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA8u;
        // 0x174bac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BB0u;
        goto label_fallthrough_0x174ba8;
    }
    ctx->pc = 0x174BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA8u;
        // 0x174bac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x174ba8:
    ctx->pc = 0x174BB0u;
}
