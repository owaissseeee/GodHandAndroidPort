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

// Function: cGameObjSortEnt_sortHeap
// Address: 0x2a8c48 - 0x2a8d30
void cGameObjSortEnt_sortHeap_0x2a8c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_sortHeap_0x2a8c48");
#endif

    switch (ctx->pc) {
        case 0x2a8c98u: goto label_2a8c98;
        case 0x2a8cf4u: goto label_2a8cf4;
        default: break;
    }

    ctx->pc = 0x2a8c48u;

    // 0x2a8c48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a8c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a8c4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2a8c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2a8c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a8c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a8c54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a8c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c5c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2a8c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2a8c60: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x2a8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2a8c64: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a8c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2a8c68: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a8c6c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2a8c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2a8c70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a8c74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a8c74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c78: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2a8c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a8c7c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8C7Cu;
    {
        const bool branch_taken_0x2a8c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C7Cu;
        // 0x2a8c80: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c7c) {
            ctx->pc = 0x2A8D08u;
            goto label_2a8d08;
        }
    }
    ctx->pc = 0x2A8C84u;
    // 0x2a8c84: 0xb49023  subu        $s2, $a1, $s4
    ctx->pc = 0x2a8c84u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2a8c88: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2a8c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c8c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2a8c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c90: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x2a8c94: 0x0  nop
    ctx->pc = 0x2a8c94u;
    // NOP
label_2a8c98:
    // 0x2a8c98: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x2a8c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x2a8c9c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2a8c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8ca0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2a8ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8ca4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a8ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8ca8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a8ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cac: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a8cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8cb0: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x2a8cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x2a8cb4: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x2a8cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a8cb8: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x2a8cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a8cbc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2a8cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8cc0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2a8cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc8: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x2a8cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a8ccc: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x2a8cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a8cd0: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x2a8cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cd8: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x2a8cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8cdc: 0x9fa70014  lwu         $a3, 0x14($sp)
    ctx->pc = 0x2a8cdcu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a8ce0: 0x1230c3  sra         $a2, $s2, 3
    ctx->pc = 0x2a8ce0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 3));
    // 0x2a8ce4: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x2a8ce4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8ce8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a8ce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a8cec: 0xc0aa2aa  jal         func_2A8AA8
    ctx->pc = 0x2A8CECu;
    SET_GPR_U32(ctx, 31, 0x2A8CF4u);
    ctx->pc = 0x2A8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CECu;
    // 0x2a8cf0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8AA8u, 0x2A8CECu, 0x2A8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CF4u;
label_2a8cf4:
    // 0x2a8cf4: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x2a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2a8cf8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a8cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a8cfc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2a8cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a8d00: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2A8D00u;
    {
        const bool branch_taken_0x2a8d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D00u;
        // 0x2a8d04: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d00) {
            ctx->pc = 0x2A8C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8c98;
        }
    }
    ctx->pc = 0x2A8D08u;
label_2a8d08:
    // 0x2a8d08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a8d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8d0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2a8d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a8d10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2a8d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8d14: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a8d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8d18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a8d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8d1c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2a8d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D24u;
        // 0x2a8d28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D2Cu;
    // 0x2a8d2c: 0x0  nop
    ctx->pc = 0x2a8d2cu;
    // NOP
    ctx->pc = 0x2a8d30u;
}
