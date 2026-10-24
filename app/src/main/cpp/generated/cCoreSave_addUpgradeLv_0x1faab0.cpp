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

// Function: cCoreSave_addUpgradeLv
// Address: 0x1faab0 - 0x1fab28
void cCoreSave_addUpgradeLv_0x1faab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addUpgradeLv_0x1faab0");
#endif

    ctx->pc = 0x1faab0u;

    // 0x1faab0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1faab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faab4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1faab8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FAAB8u;
    {
        const bool branch_taken_0x1faab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAB8u;
        // 0x1faabc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faab8) {
            ctx->pc = 0x1FAB20u;
            goto label_1fab20;
        }
    }
    ctx->pc = 0x1FAAC0u;
    // 0x1faac0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1faac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1faac4: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1faac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1faac8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1faac8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1faacc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1faaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faad0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1faad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faad4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1faad8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1faad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faadc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1faadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1faae0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1faae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1faae4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1faae8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1faae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1faaec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1faaf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1faaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faaf4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1faaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1faaf8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAF8u;
    {
        const bool branch_taken_0x1faaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faaf8) {
            ctx->pc = 0x1FAAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAAF8u;
            // 0x1faafc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB0Cu;
            goto label_1fab0c;
        }
    }
    ctx->pc = 0x1FAB00u;
    // 0x1fab00: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fab04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fab04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fab08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fab0c:
    // 0x1fab0c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1fab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1fab10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fab14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fab18: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FAB18u;
    {
        const bool branch_taken_0x1fab18 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x1fab18) {
            ctx->pc = 0x1FAB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAB18u;
            // 0x1fab1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB20u;
            goto label_1fab20;
        }
    }
    ctx->pc = 0x1FAB20u;
label_1fab20:
    // 0x1fab20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB28u;
}
