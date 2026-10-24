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

// Function: func_00375180
// Address: 0x375180 - 0x3751b8
void func_00375180_0x375180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375180_0x375180");
#endif

    switch (ctx->pc) {
        case 0x375194u: goto label_375194;
        default: break;
    }

    ctx->pc = 0x375180u;

    // 0x375180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37518c: 0xc0df46a  jal         func_37D1A8
    ctx->pc = 0x37518Cu;
    SET_GPR_U32(ctx, 31, 0x375194u);
    ctx->pc = 0x375190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37518Cu;
    // 0x375190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1A8u, 0x37518Cu, 0x375194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375194u;
label_375194:
    // 0x375194: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x375194u;
    {
        const bool branch_taken_0x375194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375194) {
            ctx->pc = 0x375198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375194u;
            // 0x375198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3751A8u;
            goto label_3751a8;
        }
    }
    ctx->pc = 0x37519Cu;
    // 0x37519c: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37519cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x3751a0: 0x9062a7b4  lbu         $v0, -0x584C($v1)
    ctx->pc = 0x3751a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x76A7B4u));
    // 0x3751a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3751a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3751a8:
    // 0x3751a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3751a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3751ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3751ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751ACu;
        // 0x3751b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3751ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3751B4u;
    // 0x3751b4: 0x0  nop
    ctx->pc = 0x3751b4u;
    // NOP
    ctx->pc = 0x3751b8u;
}
