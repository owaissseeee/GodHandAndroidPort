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

// Function: cGameObjSortEnt_makeHeap
// Address: 0x2a8b90 - 0x2a8c48
void cGameObjSortEnt_makeHeap_0x2a8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_makeHeap_0x2a8b90");
#endif

    switch (ctx->pc) {
        case 0x2a8be0u: goto label_2a8be0;
        case 0x2a8c14u: goto label_2a8c14;
        default: break;
    }

    ctx->pc = 0x2a8b90u;

    // 0x2a8b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a8b94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a8b98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a8b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a8b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a8ba0: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x2a8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2a8ba4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a8ba8: 0x590c3  sra         $s2, $a1, 3
    ctx->pc = 0x2a8ba8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 3));
    // 0x2a8bac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a8bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a8bb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a8bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a8bb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a8bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bb8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2a8bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a8bbc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A8BBCu;
    {
        const bool branch_taken_0x2a8bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BBCu;
        // 0x2a8bc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bbc) {
            ctx->pc = 0x2A8C24u;
            goto label_2a8c24;
        }
    }
    ctx->pc = 0x2A8BC4u;
    // 0x2a8bc4: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x2a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x2a8bc8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8bd0: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8bd4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2a8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2a8bd8: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x2a8bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a8bdc: 0x0  nop
    ctx->pc = 0x2a8bdcu;
    // NOP
label_2a8be0:
    // 0x2a8be0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2a8be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8be4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2a8be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8be8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a8be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8bec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a8becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bf0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a8bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8bf4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a8bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bf8: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x2a8bf8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8bfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c00: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2a8c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a8c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a8c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8c08: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a8c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a8c0c: 0xc0aa2aa  jal         func_2A8AA8
    ctx->pc = 0x2A8C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C14u);
    ctx->pc = 0x2A8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C0Cu;
    // 0x2a8c10: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8AA8u, 0x2A8C0Cu, 0x2A8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C14u;
label_2a8c14:
    // 0x2a8c14: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8C14u;
    {
        const bool branch_taken_0x2a8c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C14u;
        // 0x2a8c18: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c14) {
            ctx->pc = 0x2A8C24u;
            goto label_2a8c24;
        }
    }
    ctx->pc = 0x2A8C1Cu;
    // 0x2a8c1c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A8C1Cu;
    {
        const bool branch_taken_0x2a8c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C1Cu;
        // 0x2a8c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c1c) {
            ctx->pc = 0x2A8BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8be0;
        }
    }
    ctx->pc = 0x2A8C24u;
label_2a8c24:
    // 0x2a8c24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a8c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8c28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a8c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8c2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a8c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8c30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a8c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8c34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a8c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C3Cu;
        // 0x2a8c40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8C44u;
    // 0x2a8c44: 0x0  nop
    ctx->pc = 0x2a8c44u;
    // NOP
    ctx->pc = 0x2a8c48u;
}
