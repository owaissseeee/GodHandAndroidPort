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

// Function: ForwardInitBuffer_3147F0
// Address: 0x3147f0 - 0x314860
void ForwardInitBuffer_3147F0_0x3147f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3147F0_0x3147f0");
#endif

    switch (ctx->pc) {
        case 0x314824u: goto label_314824;
        case 0x31483cu: goto label_31483c;
        case 0x314844u: goto label_314844;
        default: break;
    }

    ctx->pc = 0x3147f0u;

    // 0x3147f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3147f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3147f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3147f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3147f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3147f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3147fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314804: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314808: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314808u;
    {
        const bool branch_taken_0x314808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314808u;
        // 0x31480c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314808) {
            ctx->pc = 0x31484Cu;
            goto label_31484c;
        }
    }
    ctx->pc = 0x314810u;
    // 0x314810: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314814: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x314814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x314818: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31481c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31481Cu;
    SET_GPR_U32(ctx, 31, 0x314824u);
    ctx->pc = 0x314820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31481Cu;
    // 0x314820: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31481Cu, 0x314824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314824u;
label_314824:
    // 0x314824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314828: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314828u;
    {
        const bool branch_taken_0x314828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314828u;
        // 0x31482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314828) {
            ctx->pc = 0x31484Cu;
            goto label_31484c;
        }
    }
    ctx->pc = 0x314830u;
    // 0x314830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314834: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314834u;
    SET_GPR_U32(ctx, 31, 0x31483Cu);
    ctx->pc = 0x314838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314834u;
    // 0x314838: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314834u, 0x31483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31483Cu;
label_31483c:
    // 0x31483c: 0xc065708  jal         func_195C20
    ctx->pc = 0x31483Cu;
    SET_GPR_U32(ctx, 31, 0x314844u);
    ctx->pc = 0x314840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31483Cu;
    // 0x314840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C20u, 0x31483Cu, 0x314844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314844u;
label_314844:
    // 0x314844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314844u;
    {
        const bool branch_taken_0x314844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314844u;
        // 0x314848: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314844) {
            ctx->pc = 0x314854u;
            goto label_314854;
        }
    }
    ctx->pc = 0x31484Cu;
label_31484c:
    // 0x31484c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31484cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314854:
    // 0x314854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314858: 0x3e00008  jr          $ra
    ctx->pc = 0x314858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314858u;
        // 0x31485c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314860u;
}
