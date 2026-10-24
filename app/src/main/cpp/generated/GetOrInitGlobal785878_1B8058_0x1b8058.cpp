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

// Function: GetOrInitGlobal785878_1B8058
// Address: 0x1b8058 - 0x1b80a8
void GetOrInitGlobal785878_1B8058_0x1b8058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitGlobal785878_1B8058_0x1b8058");
#endif

    switch (ctx->pc) {
        case 0x1b807cu: goto label_1b807c;
        case 0x1b8094u: goto label_1b8094;
        default: break;
    }

    ctx->pc = 0x1b8058u;

    // 0x1b8058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b805c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b8060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8064: 0x8c625878  lw          $v0, 0x5878($v1)
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785878u));
    // 0x1b8068: 0x24705878  addiu       $s0, $v1, 0x5878
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22648));
    // 0x1b806c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B806Cu;
    {
        const bool branch_taken_0x1b806c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B806Cu;
        // 0x1b8070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b806c) {
            ctx->pc = 0x1B8094u;
            goto label_1b8094;
        }
    }
    ctx->pc = 0x1B8074u;
    // 0x1b8074: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x1B8074u;
    SET_GPR_U32(ctx, 31, 0x1B807Cu);
    ctx->pc = 0x2A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9300u, 0x1B8074u, 0x1B807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B807Cu;
label_1b807c:
    // 0x1b807c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b807cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b8080: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b8084: 0x24a58ad0  addiu       $a1, $a1, -0x7530
    ctx->pc = 0x1b8084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937296));
    // 0x1b8088: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x1b8088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x1b808c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B808Cu;
    SET_GPR_U32(ctx, 31, 0x1B8094u);
    ctx->pc = 0x1B8090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B808Cu;
    // 0x1b8090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B808Cu, 0x1B8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8094u;
label_1b8094:
    // 0x1b8094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b809c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b809cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b80a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80A0u;
        // 0x1b80a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80A8u;
}
