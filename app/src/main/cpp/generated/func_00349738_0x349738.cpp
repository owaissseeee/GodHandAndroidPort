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

// Function: func_00349738
// Address: 0x349738 - 0x349778
void func_00349738_0x349738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349738_0x349738");
#endif

    switch (ctx->pc) {
        case 0x349754u: goto label_349754;
        default: break;
    }

    ctx->pc = 0x349738u;

    // 0x349738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34973c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34974c: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x34974Cu;
    SET_GPR_U32(ctx, 31, 0x349754u);
    ctx->pc = 0x349750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34974Cu;
    // 0x349750: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x34974Cu, 0x349754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349754u;
label_349754:
    // 0x349754: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x349754u;
    {
        const bool branch_taken_0x349754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x349754) {
            ctx->pc = 0x349758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349754u;
            // 0x349758: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34975Cu;
            goto label_34975c;
        }
    }
    ctx->pc = 0x34975Cu;
label_34975c:
    // 0x34975c: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x34975cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x349760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34976c: 0x3e00008  jr          $ra
    ctx->pc = 0x34976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34976Cu;
        // 0x349770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34976Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349774u;
    // 0x349774: 0x0  nop
    ctx->pc = 0x349774u;
    // NOP
    ctx->pc = 0x349778u;
}
