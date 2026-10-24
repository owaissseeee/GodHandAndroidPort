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

// Function: InitObjectSetVtable_4F630_300020
// Address: 0x300020 - 0x300060
void InitObjectSetVtable_4F630_300020_0x300020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4F630_300020_0x300020");
#endif

    switch (ctx->pc) {
        case 0x30003cu: goto label_30003c;
        default: break;
    }

    ctx->pc = 0x300020u;

    // 0x300020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x300028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30002c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30002Cu;
    {
        const bool branch_taken_0x30002c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30002Cu;
        // 0x300030: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30002c) {
            ctx->pc = 0x300048u;
            goto label_300048;
        }
    }
    ctx->pc = 0x300034u;
    // 0x300034: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x300034u;
    SET_GPR_U32(ctx, 31, 0x30003Cu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x300034u, 0x30003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30003Cu;
label_30003c:
    // 0x30003c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x30003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x300040: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x300040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x300044: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x300044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_300048:
    // 0x300048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x300048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30004c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30004cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300054: 0x3e00008  jr          $ra
    ctx->pc = 0x300054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300054u;
        // 0x300058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30005Cu;
    // 0x30005c: 0x0  nop
    ctx->pc = 0x30005cu;
    // NOP
    ctx->pc = 0x300060u;
}
