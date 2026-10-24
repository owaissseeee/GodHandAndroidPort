#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: dropNewData__17cSkillListManageri
// Address: 0x79a6d8 - 0x79a740
void dropNewData__17cSkillListManageri_0x79a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dropNewData__17cSkillListManageri_0x79a6d8");
#endif

    switch (ctx->pc) {
        case 0x79a70cu: goto label_79a70c;
        case 0x79a728u: goto label_79a728;
        default: break;
    }

    ctx->pc = 0x79a6d8u;

    // 0x79a6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a6dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a6ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A6ECu;
    {
        const bool branch_taken_0x79a6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6ec) {
            ctx->pc = 0x79A728u;
            goto label_79a728;
        }
    }
    ctx->pc = 0x79A6F4u;
    // 0x79a6f4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a6f8: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a6fc: 0x24719b70  addiu       $s1, $v1, -0x6490
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a700: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a704: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A704u;
    SET_GPR_U32(ctx, 31, 0x79A70Cu);
    ctx->pc = 0x79A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A704u;
    // 0x79a708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A704u, 0x79A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A70Cu;
label_79a70c:
    // 0x79a70c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a710: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A710u;
    {
        const bool branch_taken_0x79a710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79a710) {
            ctx->pc = 0x79A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A710u;
            // 0x79a714: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A72Cu;
            goto label_79a72c;
        }
    }
    ctx->pc = 0x79A718u;
    // 0x79a718: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a720: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79A720u;
    SET_GPR_U32(ctx, 31, 0x79A728u);
    ctx->pc = 0x79A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A720u;
    // 0x79a724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79A720u, 0x79A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A728u;
label_79a728:
    // 0x79a728: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a72c:
    // 0x79a72c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a734: 0x3e00008  jr          $ra
    ctx->pc = 0x79A734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A734u;
        // 0x79a738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A73Cu;
    // 0x79a73c: 0x0  nop
    ctx->pc = 0x79a73cu;
    // NOP
    ctx->pc = 0x79a740u;
}
} // namespace gh_r000
