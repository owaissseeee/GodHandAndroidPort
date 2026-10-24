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

// Function: func_0032EF68
// Address: 0x32ef68 - 0x32efe8
void func_0032EF68_0x32ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EF68_0x32ef68");
#endif

    switch (ctx->pc) {
        case 0x32efa0u: goto label_32efa0;
        case 0x32efb0u: goto label_32efb0;
        default: break;
    }

    ctx->pc = 0x32ef68u;

    // 0x32ef68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ef6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ef70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ef78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32ef78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32ef80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32ef80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ef88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32ef8c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ef8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ef90: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32EF90u;
    {
        const bool branch_taken_0x32ef90 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF90u;
        // 0x32ef94: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef90) {
            ctx->pc = 0x32EFCCu;
            goto label_32efcc;
        }
    }
    ctx->pc = 0x32EF98u;
    // 0x32ef98: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x32ef9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32efa0:
    // 0x32efa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EFA0u;
    {
        const bool branch_taken_0x32efa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EFA0u;
        // 0x32efa4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efa0) {
            ctx->pc = 0x32EFB4u;
            goto label_32efb4;
        }
    }
    ctx->pc = 0x32EFA8u;
    // 0x32efa8: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x32EFA8u;
    SET_GPR_U32(ctx, 31, 0x32EFB0u);
    ctx->pc = 0x32EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EFA8u;
    // 0x32efac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x32EFA8u, 0x32EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFB0u;
label_32efb0:
    // 0x32efb0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x32efb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32efb4:
    // 0x32efb4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x32efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32efb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32efb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32efbc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x32efbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x32efc0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32efc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32efc4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x32EFC4u;
    {
        const bool branch_taken_0x32efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32efc4) {
            ctx->pc = 0x32EFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EFC4u;
            // 0x32efc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32efa0;
        }
    }
    ctx->pc = 0x32EFCCu;
label_32efcc:
    // 0x32efcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32efccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32efd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32efd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32efd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32efd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32efd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32efd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32efdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32efdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x32EFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EFE0u;
        // 0x32efe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EFE8u;
}
