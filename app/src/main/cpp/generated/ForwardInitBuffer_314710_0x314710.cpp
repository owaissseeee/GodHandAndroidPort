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

// Function: ForwardInitBuffer_314710
// Address: 0x314710 - 0x314780
void ForwardInitBuffer_314710_0x314710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314710_0x314710");
#endif

    switch (ctx->pc) {
        case 0x314744u: goto label_314744;
        case 0x31475cu: goto label_31475c;
        case 0x314764u: goto label_314764;
        default: break;
    }

    ctx->pc = 0x314710u;

    // 0x314710: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314718: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31471c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314724: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314728: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314728u;
    {
        const bool branch_taken_0x314728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314728u;
        // 0x31472c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314728) {
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x314730u;
    // 0x314730: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314734: 0x240407a0  addiu       $a0, $zero, 0x7A0
    ctx->pc = 0x314734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    // 0x314738: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31473c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31473Cu;
    SET_GPR_U32(ctx, 31, 0x314744u);
    ctx->pc = 0x314740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31473Cu;
    // 0x314740: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31473Cu, 0x314744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314744u;
label_314744:
    // 0x314744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314748: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314748u;
    {
        const bool branch_taken_0x314748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314748u;
        // 0x31474c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314748) {
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x314750u;
    // 0x314750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314754: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314754u;
    SET_GPR_U32(ctx, 31, 0x31475Cu);
    ctx->pc = 0x314758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314754u;
    // 0x314758: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314754u, 0x31475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31475Cu;
label_31475c:
    // 0x31475c: 0xc064f08  jal         func_193C20
    ctx->pc = 0x31475Cu;
    SET_GPR_U32(ctx, 31, 0x314764u);
    ctx->pc = 0x314760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31475Cu;
    // 0x314760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C20u, 0x31475Cu, 0x314764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314764u;
label_314764:
    // 0x314764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314764u;
    {
        const bool branch_taken_0x314764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314764u;
        // 0x314768: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314764) {
            ctx->pc = 0x314774u;
            goto label_314774;
        }
    }
    ctx->pc = 0x31476Cu;
label_31476c:
    // 0x31476c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31476cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314774:
    // 0x314774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314778: 0x3e00008  jr          $ra
    ctx->pc = 0x314778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314778u;
        // 0x31477c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314780u;
}
