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

// Function: GetObjClassDesc_19F058
// Address: 0x19f058 - 0x19f0a8
void GetObjClassDesc_19F058_0x19f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjClassDesc_19F058_0x19f058");
#endif

    switch (ctx->pc) {
        case 0x19f07cu: goto label_19f07c;
        case 0x19f094u: goto label_19f094;
        default: break;
    }

    ctx->pc = 0x19f058u;

    // 0x19f058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f05c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19f060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f064: 0x8c625ea8  lw          $v0, 0x5EA8($v1)
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785EA8u));
    // 0x19f068: 0x24705ea8  addiu       $s0, $v1, 0x5EA8
    ctx->pc = 0x19f068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24232));
    // 0x19f06c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F06Cu;
    {
        const bool branch_taken_0x19f06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F06Cu;
        // 0x19f070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f06c) {
            ctx->pc = 0x19F094u;
            goto label_19f094;
        }
    }
    ctx->pc = 0x19F074u;
    // 0x19f074: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19F074u;
    SET_GPR_U32(ctx, 31, 0x19F07Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19F074u, 0x19F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F07Cu;
label_19f07c:
    // 0x19f07c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19f080: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19f080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19f084: 0x24a567c0  addiu       $a1, $a1, 0x67C0
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
    // 0x19f088: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19f088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19f08c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19F08Cu;
    SET_GPR_U32(ctx, 31, 0x19F094u);
    ctx->pc = 0x19F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F08Cu;
    // 0x19f090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19F08Cu, 0x19F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F094u;
label_19f094:
    // 0x19f094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f09c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0A0u;
        // 0x19f0a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0A8u;
}
