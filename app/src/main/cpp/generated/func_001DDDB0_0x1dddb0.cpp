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

// Function: func_001DDDB0
// Address: 0x1dddb0 - 0x1ddf08
void func_001DDDB0_0x1dddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DDDB0_0x1dddb0");
#endif

    switch (ctx->pc) {
        case 0x1dde78u: goto label_1dde78;
        case 0x1ddea4u: goto label_1ddea4;
        case 0x1ddebcu: goto label_1ddebc;
        case 0x1ddedcu: goto label_1ddedc;
        case 0x1ddef4u: goto label_1ddef4;
        default: break;
    }

    ctx->pc = 0x1dddb0u;

    // 0x1dddb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dddb4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1dddb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dddb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1dddbc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1dddbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1dddc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1dddc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dddc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddc8: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1dddc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dddcc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1DDDCCu;
    {
        const bool branch_taken_0x1dddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDCCu;
        // 0x1dddd0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddcc) {
            ctx->pc = 0x1DDEF4u;
            goto label_1ddef4;
        }
    }
    ctx->pc = 0x1DDDD4u;
    // 0x1dddd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1dddd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddddc: 0x2449b600  addiu       $t1, $v0, -0x4A00
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948352));
    // 0x1ddde0: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1ddde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ddde4: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1ddde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ddde8: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1ddde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dddec: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1dddecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dddf0: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x1dddf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dddf4: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x1dddf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dddf8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1dddf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dddfc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1dddfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde00: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x1dde00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde04: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x1dde04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde08: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1dde08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde0c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1dde0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde10: 0x6924001f  ldl         $a0, 0x1F($t1)
    ctx->pc = 0x1dde10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dde14: 0x6d240018  ldr         $a0, 0x18($t1)
    ctx->pc = 0x1dde14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dde18: 0x69270027  ldl         $a3, 0x27($t1)
    ctx->pc = 0x1dde18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dde1c: 0x6d270020  ldr         $a3, 0x20($t1)
    ctx->pc = 0x1dde1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dde20: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1dde20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde24: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1dde24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde28: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1dde28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde2c: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1dde2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde30: 0x10c30016  beq         $a2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDE30u;
    {
        const bool branch_taken_0x1dde30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE30u;
        // 0x1dde34: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde30) {
            ctx->pc = 0x1DDE8Cu;
            goto label_1dde8c;
        }
    }
    ctx->pc = 0x1DDE38u;
    // 0x1dde38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDE38u;
    {
        const bool branch_taken_0x1dde38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde38) {
            ctx->pc = 0x1DDE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE38u;
            // 0x1dde3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE50u;
            goto label_1dde50;
        }
    }
    ctx->pc = 0x1DDE40u;
    // 0x1dde40: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDE40u;
    {
        const bool branch_taken_0x1dde40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE40u;
        // 0x1dde44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde40) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDE48u;
    // 0x1dde48: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1DDE48u;
    {
        const bool branch_taken_0x1dde48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE48u;
        // 0x1dde4c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde48) {
            ctx->pc = 0x1DDEFCu;
            goto label_1ddefc;
        }
    }
    ctx->pc = 0x1DDE50u;
label_1dde50:
    // 0x1dde50: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DDE50u;
    {
        const bool branch_taken_0x1dde50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE50u;
        // 0x1dde54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde50) {
            ctx->pc = 0x1DDEC4u;
            goto label_1ddec4;
        }
    }
    ctx->pc = 0x1DDE58u;
    // 0x1dde58: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DDE58u;
    {
        const bool branch_taken_0x1dde58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE58u;
        // 0x1dde5c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde58) {
            ctx->pc = 0x1DDEFCu;
            goto label_1ddefc;
        }
    }
    ctx->pc = 0x1DDE60u;
label_1dde60:
    // 0x1dde60: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x1dde60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dde64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde68: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1dde6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dde6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde70: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDE70u;
    SET_GPR_U32(ctx, 31, 0x1DDE78u);
    ctx->pc = 0x1DDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE70u;
    // 0x1dde74: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDE70u, 0x1DDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE78u;
label_1dde78:
    // 0x1dde78: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1dde7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dde7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dde84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DDE84u;
    {
        const bool branch_taken_0x1dde84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE84u;
        // 0x1dde88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde84) {
            ctx->pc = 0x1DDEB4u;
            goto label_1ddeb4;
        }
    }
    ctx->pc = 0x1DDE8Cu;
label_1dde8c:
    // 0x1dde8c: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x1dde8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dde90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dde90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde94: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1dde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1dde98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dde98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde9c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DDEA4u);
    ctx->pc = 0x1DDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE9Cu;
    // 0x1ddea0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDE9Cu, 0x1DDEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEA4u;
label_1ddea4:
    // 0x1ddea4: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1ddea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ddea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddeac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ddeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ddeb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ddeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddeb4:
    // 0x1ddeb4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDEB4u;
    SET_GPR_U32(ctx, 31, 0x1DDEBCu);
    ctx->pc = 0x1DDEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEB4u;
    // 0x1ddeb8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDEB4u, 0x1DDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEBCu;
label_1ddebc:
    // 0x1ddebc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DDEBCu;
    {
        const bool branch_taken_0x1ddebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEBCu;
        // 0x1ddec0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddebc) {
            ctx->pc = 0x1DDEF8u;
            goto label_1ddef8;
        }
    }
    ctx->pc = 0x1DDEC4u;
label_1ddec4:
    // 0x1ddec4: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x1ddec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ddec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddecc: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1ddeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1dded0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dded4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDED4u;
    SET_GPR_U32(ctx, 31, 0x1DDEDCu);
    ctx->pc = 0x1DDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDED4u;
    // 0x1dded8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDED4u, 0x1DDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEDCu;
label_1ddedc:
    // 0x1ddedc: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ddee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ddee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ddee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddeec: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDEECu;
    SET_GPR_U32(ctx, 31, 0x1DDEF4u);
    ctx->pc = 0x1DDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEECu;
    // 0x1ddef0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDEECu, 0x1DDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEF4u;
label_1ddef4:
    // 0x1ddef4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ddef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ddef8:
    // 0x1ddef8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ddef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ddefc:
    // 0x1ddefc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddf00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF00u;
        // 0x1ddf04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF08u;
}
