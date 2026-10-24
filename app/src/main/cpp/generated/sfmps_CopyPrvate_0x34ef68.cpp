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

// Function: sfmps_CopyPrvate
// Address: 0x34ef68 - 0x34f008
void sfmps_CopyPrvate_0x34ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_CopyPrvate_0x34ef68");
#endif

    switch (ctx->pc) {
        case 0x34ef98u: goto label_34ef98;
        case 0x34efb4u: goto label_34efb4;
        case 0x34efd4u: goto label_34efd4;
        case 0x34efe8u: goto label_34efe8;
        default: break;
    }

    ctx->pc = 0x34ef68u;

    // 0x34ef68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ef6c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x34ef6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34ef74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34ef78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34ef78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34ef80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34ef80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef84: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34ef88: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34ef88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34ef90: 0xc0d342a  jal         func_34D0A8
    ctx->pc = 0x34EF90u;
    SET_GPR_U32(ctx, 31, 0x34EF98u);
    ctx->pc = 0x34EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EF90u;
    // 0x34ef94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0A8u, 0x34EF90u, 0x34EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF98u;
label_34ef98:
    // 0x34ef98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34ef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34efa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x34efa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34efa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34EFA4u;
    {
        const bool branch_taken_0x34efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFA4u;
        // 0x34efa8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efa4) {
            ctx->pc = 0x34EFE0u;
            goto label_34efe0;
        }
    }
    ctx->pc = 0x34EFACu;
    // 0x34efac: 0xc0d4010  jal         func_350040
    ctx->pc = 0x34EFACu;
    SET_GPR_U32(ctx, 31, 0x34EFB4u);
    ctx->pc = 0x350040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350040u, 0x34EFACu, 0x34EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EFB4u;
label_34efb4:
    // 0x34efb4: 0x2646ffee  addiu       $a2, $s2, -0x12
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x34efb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34efbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34efc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34efc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EFC4u;
    {
        const bool branch_taken_0x34efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFC4u;
        // 0x34efc8: 0x26670012  addiu       $a3, $s3, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efc4) {
            ctx->pc = 0x34EFD4u;
            goto label_34efd4;
        }
    }
    ctx->pc = 0x34EFCCu;
    // 0x34efcc: 0xc0d3c02  jal         func_34F008
    ctx->pc = 0x34EFCCu;
    SET_GPR_U32(ctx, 31, 0x34EFD4u);
    ctx->pc = 0x34F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F008u, 0x34EFCCu, 0x34EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EFD4u;
label_34efd4:
    // 0x34efd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EFD4u;
    {
        const bool branch_taken_0x34efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFD4u;
        // 0x34efd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efd4) {
            ctx->pc = 0x34EFE8u;
            goto label_34efe8;
        }
    }
    ctx->pc = 0x34EFDCu;
    // 0x34efdc: 0x0  nop
    ctx->pc = 0x34efdcu;
    // NOP
label_34efe0:
    // 0x34efe0: 0xc0d3c02  jal         func_34F008
    ctx->pc = 0x34EFE0u;
    SET_GPR_U32(ctx, 31, 0x34EFE8u);
    ctx->pc = 0x34EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EFE0u;
    // 0x34efe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F008u, 0x34EFE0u, 0x34EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EFE8u;
label_34efe8:
    // 0x34efe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34efec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34eff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34eff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eff4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34eff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34effc: 0x3e00008  jr          $ra
    ctx->pc = 0x34EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFFCu;
        // 0x34f000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F004u;
    // 0x34f004: 0x0  nop
    ctx->pc = 0x34f004u;
    // NOP
    ctx->pc = 0x34f008u;
}
