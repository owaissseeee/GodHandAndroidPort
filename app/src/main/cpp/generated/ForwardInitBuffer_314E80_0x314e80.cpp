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

// Function: ForwardInitBuffer_314E80
// Address: 0x314e80 - 0x314ef0
void ForwardInitBuffer_314E80_0x314e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314E80_0x314e80");
#endif

    switch (ctx->pc) {
        case 0x314eb4u: goto label_314eb4;
        case 0x314eccu: goto label_314ecc;
        case 0x314ed4u: goto label_314ed4;
        default: break;
    }

    ctx->pc = 0x314e80u;

    // 0x314e80: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314e84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314e88: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314e8c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314e94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314e98: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314E98u;
    {
        const bool branch_taken_0x314e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E98u;
        // 0x314e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e98) {
            ctx->pc = 0x314EDCu;
            goto label_314edc;
        }
    }
    ctx->pc = 0x314EA0u;
    // 0x314ea0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314ea4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x314ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x314ea8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314eac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314EACu;
    SET_GPR_U32(ctx, 31, 0x314EB4u);
    ctx->pc = 0x314EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EACu;
    // 0x314eb0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314EACu, 0x314EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EB4u;
label_314eb4:
    // 0x314eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314eb8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314EB8u;
    {
        const bool branch_taken_0x314eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EB8u;
        // 0x314ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314eb8) {
            ctx->pc = 0x314EDCu;
            goto label_314edc;
        }
    }
    ctx->pc = 0x314EC0u;
    // 0x314ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ec4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314EC4u;
    SET_GPR_U32(ctx, 31, 0x314ECCu);
    ctx->pc = 0x314EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EC4u;
    // 0x314ec8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314EC4u, 0x314ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314ECCu;
label_314ecc:
    // 0x314ecc: 0xc067046  jal         func_19C118
    ctx->pc = 0x314ECCu;
    SET_GPR_U32(ctx, 31, 0x314ED4u);
    ctx->pc = 0x314ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314ECCu;
    // 0x314ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C118u, 0x314ECCu, 0x314ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314ED4u;
label_314ed4:
    // 0x314ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314ED4u;
    {
        const bool branch_taken_0x314ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ED4u;
        // 0x314ed8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ed4) {
            ctx->pc = 0x314EE4u;
            goto label_314ee4;
        }
    }
    ctx->pc = 0x314EDCu;
label_314edc:
    // 0x314edc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314ee4:
    // 0x314ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x314EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EE8u;
        // 0x314eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314EF0u;
}
