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

// Function: GetOrInit_460D68_2BAFA0
// Address: 0x2bafa0 - 0x2bafe0
void GetOrInit_460D68_2BAFA0_0x2bafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D68_2BAFA0_0x2bafa0");
#endif

    switch (ctx->pc) {
        case 0x2bafccu: goto label_2bafcc;
        default: break;
    }

    ctx->pc = 0x2bafa0u;

    // 0x2bafa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bafa4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2bafa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bafac: 0x8c620d68  lw          $v0, 0xD68($v1)
    ctx->pc = 0x2bafacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D68u));
    // 0x2bafb0: 0x24700d68  addiu       $s0, $v1, 0xD68
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3432));
    // 0x2bafb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAFB4u;
    {
        const bool branch_taken_0x2bafb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFB4u;
        // 0x2bafb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafb4) {
            ctx->pc = 0x2BAFCCu;
            goto label_2bafcc;
        }
    }
    ctx->pc = 0x2BAFBCu;
    // 0x2bafbc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2bafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2bafc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bafc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafc4: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2BAFC4u;
    SET_GPR_U32(ctx, 31, 0x2BAFCCu);
    ctx->pc = 0x2BAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFC4u;
    // 0x2bafc8: 0x24a5bf60  addiu       $a1, $a1, -0x40A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2BAFC4u, 0x2BAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFCCu;
label_2bafcc:
    // 0x2bafcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bafccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bafd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bafd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bafd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bafd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFD8u;
        // 0x2bafdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFE0u;
}
