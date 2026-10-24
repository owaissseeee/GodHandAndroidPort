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

// Function: cRoomSave_findEm
// Address: 0x2bef60 - 0x2befe8
void cRoomSave_findEm_0x2bef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_findEm_0x2bef60");
#endif

    switch (ctx->pc) {
        case 0x2bef98u: goto label_2bef98;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befc0u: goto label_2befc0;
        default: break;
    }

    ctx->pc = 0x2bef60u;

    // 0x2bef60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bef64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2bef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bef68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bef6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bef70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bef70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bef78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef7c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEF7Cu;
    {
        const bool branch_taken_0x2bef7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF7Cu;
        // 0x2bef80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef7c) {
            ctx->pc = 0x2BEF8Cu;
            goto label_2bef8c;
        }
    }
    ctx->pc = 0x2BEF84u;
    // 0x2bef84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BEF84u;
    {
        const bool branch_taken_0x2bef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF84u;
        // 0x2bef88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef84) {
            ctx->pc = 0x2BEFD0u;
            goto label_2befd0;
        }
    }
    ctx->pc = 0x2BEF8Cu;
label_2bef8c:
    // 0x2bef8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BEF8Cu;
    {
        const bool branch_taken_0x2bef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF8Cu;
        // 0x2bef90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef8c) {
            ctx->pc = 0x2BEFB8u;
            goto label_2befb8;
        }
    }
    ctx->pc = 0x2BEF94u;
    // 0x2bef94: 0x0  nop
    ctx->pc = 0x2bef94u;
    // NOP
label_2bef98:
    // 0x2bef98: 0xc0afbc2  jal         func_2BEF08
    ctx->pc = 0x2BEF98u;
    SET_GPR_U32(ctx, 31, 0x2BEFA0u);
    ctx->pc = 0x2BEF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF98u;
    // 0x2bef9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF08u, 0x2BEF98u, 0x2BEFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFA0u;
label_2befa0:
    // 0x2befa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2befa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2befa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEFA4u;
    {
        const bool branch_taken_0x2befa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFA4u;
        // 0x2befa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befa4) {
            ctx->pc = 0x2BEFB8u;
            goto label_2befb8;
        }
    }
    ctx->pc = 0x2BEFACu;
    // 0x2befac: 0x90620013  lbu         $v0, 0x13($v1)
    ctx->pc = 0x2befacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x2befb0: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEFB0u;
    {
        const bool branch_taken_0x2befb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFB0u;
        // 0x2befb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befb0) {
            ctx->pc = 0x2BEFD0u;
            goto label_2befd0;
        }
    }
    ctx->pc = 0x2BEFB8u;
label_2befb8:
    // 0x2befb8: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x2BEFB8u;
    SET_GPR_U32(ctx, 31, 0x2BEFC0u);
    ctx->pc = 0x2BEFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEFB8u;
    // 0x2befbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x2BEFB8u, 0x2BEFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEFC0u;
label_2befc0:
    // 0x2befc0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2befc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2befc4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BEFC4u;
    {
        const bool branch_taken_0x2befc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2befc4) {
            ctx->pc = 0x2BEFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEFC4u;
            // 0x2befc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bef98;
        }
    }
    ctx->pc = 0x2BEFCCu;
    // 0x2befcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2befccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2befd0:
    // 0x2befd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2befd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2befd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2befd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2befd8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2befd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2befdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2befdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2befe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFE0u;
        // 0x2befe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEFE8u;
}
