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

// Function: func_001ABBE8
// Address: 0x1abbe8 - 0x1abca8
void func_001ABBE8_0x1abbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABBE8_0x1abbe8");
#endif

    switch (ctx->pc) {
        case 0x1abc54u: goto label_1abc54;
        default: break;
    }

    ctx->pc = 0x1abbe8u;

    // 0x1abbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abbec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abbf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1abbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1abbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abbf8: 0x8c8209d0  lw          $v0, 0x9D0($a0)
    ctx->pc = 0x1abbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2512)));
    // 0x1abbfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1abbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1abc00: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ABC00u;
    {
        const bool branch_taken_0x1abc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC00u;
        // 0x1abc04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc00) {
            ctx->pc = 0x1ABC78u;
            goto label_1abc78;
        }
    }
    ctx->pc = 0x1ABC08u;
    // 0x1abc08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1abc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1abc0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abc10: 0x24477cd8  addiu       $a3, $v0, 0x7CD8
    ctx->pc = 0x1abc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31960));
    // 0x1abc14: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1abc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1abc18: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1abc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1abc1c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1abc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1abc20: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1abc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1abc24: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1abc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1abc28: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1abc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1abc2c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1abc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc30: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1abc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc34: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1abc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc38: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1abc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc3c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1abc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc40: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1abc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abc44: 0x5203000d  beql        $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1ABC44u;
    {
        const bool branch_taken_0x1abc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1abc44) {
            ctx->pc = 0x1ABC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABC44u;
            // 0x1abc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC7Cu;
            goto label_1abc7c;
        }
    }
    ctx->pc = 0x1ABC4Cu;
    // 0x1abc4c: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x1ABC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC54u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x1ABC4Cu, 0x1ABC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC54u;
label_1abc54:
    // 0x1abc54: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1abc54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1abc58: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x1abc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1abc5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1abc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1abc60: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1abc60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abc64: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABC64u;
    {
        const bool branch_taken_0x1abc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc64) {
            ctx->pc = 0x1ABC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABC64u;
            // 0x1abc68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC6Cu;
            goto label_1abc6c;
        }
    }
    ctx->pc = 0x1ABC6Cu;
label_1abc6c:
    // 0x1abc6c: 0x1010  mfhi        $v0
    ctx->pc = 0x1abc6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1abc70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABC70u;
    {
        const bool branch_taken_0x1abc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC70u;
        // 0x1abc74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc70) {
            ctx->pc = 0x1ABC7Cu;
            goto label_1abc7c;
        }
    }
    ctx->pc = 0x1ABC78u;
label_1abc78:
    // 0x1abc78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abc7c:
    // 0x1abc7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1abc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC84u;
        // 0x1abc88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABC8Cu;
    // 0x1abc8c: 0x0  nop
    ctx->pc = 0x1abc8cu;
    // NOP
    // 0x1abc90: 0x0  nop
    ctx->pc = 0x1abc90u;
    // NOP
    // 0x1abc94: 0x0  nop
    ctx->pc = 0x1abc94u;
    // NOP
    // 0x1abc98: 0x0  nop
    ctx->pc = 0x1abc98u;
    // NOP
    // 0x1abc9c: 0x0  nop
    ctx->pc = 0x1abc9cu;
    // NOP
    // 0x1abca0: 0x0  nop
    ctx->pc = 0x1abca0u;
    // NOP
    // 0x1abca4: 0x0  nop
    ctx->pc = 0x1abca4u;
    // NOP
    ctx->pc = 0x1abca8u;
}
