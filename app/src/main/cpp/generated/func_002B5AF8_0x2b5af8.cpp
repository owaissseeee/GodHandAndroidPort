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

// Function: func_002B5AF8
// Address: 0x2b5af8 - 0x2b5bb8
void func_002B5AF8_0x2b5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5AF8_0x2b5af8");
#endif

    switch (ctx->pc) {
        case 0x2b5b38u: goto label_2b5b38;
        case 0x2b5b4cu: goto label_2b5b4c;
        case 0x2b5b68u: goto label_2b5b68;
        case 0x2b5b78u: goto label_2b5b78;
        default: break;
    }

    ctx->pc = 0x2b5af8u;

    // 0x2b5af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b5afc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b5b00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b5b04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b5b08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b5b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b5b10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b5b14: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b5b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5b1c: 0x2448b288  addiu       $t0, $v0, -0x4D78
    ctx->pc = 0x2b5b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947464));
    // 0x2b5b20: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2b5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5b24: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2b5b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5b28: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2b5b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b2c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2b5b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b30: 0xc0ad3fa  jal         func_2B4FE8
    ctx->pc = 0x2B5B30u;
    SET_GPR_U32(ctx, 31, 0x2B5B38u);
    ctx->pc = 0x2B5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B30u;
    // 0x2b5b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FE8u, 0x2B5B30u, 0x2B5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B38u;
label_2b5b38:
    // 0x2b5b38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b5b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b3c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5B3Cu;
    {
        const bool branch_taken_0x2b5b3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B3Cu;
        // 0x2b5b40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b3c) {
            ctx->pc = 0x2B5B5Cu;
            goto label_2b5b5c;
        }
    }
    ctx->pc = 0x2B5B44u;
    // 0x2b5b44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5B44u;
    {
        const bool branch_taken_0x2b5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B44u;
        // 0x2b5b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b44) {
            ctx->pc = 0x2B5B94u;
            goto label_2b5b94;
        }
    }
    ctx->pc = 0x2B5B4Cu;
label_2b5b4c:
    // 0x2b5b4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b5b50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5b54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5B54u;
    {
        const bool branch_taken_0x2b5b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B54u;
        // 0x2b5b58: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b54) {
            ctx->pc = 0x2B5B94u;
            goto label_2b5b94;
        }
    }
    ctx->pc = 0x2B5B5Cu;
label_2b5b5c:
    // 0x2b5b5c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2b5b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b60: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2b5b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b64: 0x0  nop
    ctx->pc = 0x2b5b64u;
    // NOP
label_2b5b68:
    // 0x2b5b68: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2b5b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b70: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2B5B70u;
    SET_GPR_U32(ctx, 31, 0x2B5B78u);
    ctx->pc = 0x2B5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B70u;
    // 0x2b5b74: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2B5B70u, 0x2B5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B78u;
label_2b5b78:
    // 0x2b5b78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B5B78u;
    {
        const bool branch_taken_0x2b5b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B78u;
        // 0x2b5b7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b78) {
            ctx->pc = 0x2B5B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5b4c;
        }
    }
    ctx->pc = 0x2B5B80u;
    // 0x2b5b80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b5b84: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2b5b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b5b88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B5B88u;
    {
        const bool branch_taken_0x2b5b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B88u;
        // 0x2b5b8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b88) {
            ctx->pc = 0x2B5B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5b68;
        }
    }
    ctx->pc = 0x2B5B90u;
    // 0x2b5b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b94:
    // 0x2b5b94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b5b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5b98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b5b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5b9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b5b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5ba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5ba4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b5ba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BACu;
        // 0x2b5bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5BB4u;
    // 0x2b5bb4: 0x0  nop
    ctx->pc = 0x2b5bb4u;
    // NOP
    ctx->pc = 0x2b5bb8u;
}
