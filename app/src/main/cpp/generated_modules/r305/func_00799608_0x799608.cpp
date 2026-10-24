#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: func_00799608
// Address: 0x799608 - 0x799670
void func_00799608_0x799608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799608_0x799608");
#endif

    switch (ctx->pc) {
        case 0x799628u: goto label_799628;
        case 0x799638u: goto label_799638;
        case 0x799640u: goto label_799640;
        case 0x799650u: goto label_799650;
        case 0x79965cu: goto label_79965c;
        default: break;
    }

    ctx->pc = 0x799608u;

    // 0x799608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79960c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799618: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79961c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79962c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799630: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799630u;
    SET_GPR_U32(ctx, 31, 0x799638u);
    ctx->pc = 0x799634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799630u;
    // 0x799634: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799630u, 0x799638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799640u;
    {
        const bool branch_taken_0x799640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x2624ea60  addiu       $a0, $s1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799640) {
            ctx->pc = 0x799628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799628;
        }
    }
    ctx->pc = 0x799648u;
    // 0x799648: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x799648u;
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799654: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79965cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799660: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799668: 0x3e00008  jr          $ra
    ctx->pc = 0x799668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799670u;
}
} // namespace gh_r305
