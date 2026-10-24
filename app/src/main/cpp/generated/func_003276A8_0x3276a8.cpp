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

// Function: func_003276A8
// Address: 0x3276a8 - 0x327708
void func_003276A8_0x3276a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003276A8_0x3276a8");
#endif

    switch (ctx->pc) {
        case 0x3276d0u: goto label_3276d0;
        case 0x3276e0u: goto label_3276e0;
        default: break;
    }

    ctx->pc = 0x3276a8u;

    // 0x3276a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3276a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3276ac: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3276b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3276b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3276b4: 0x2450f9f0  addiu       $s0, $v0, -0x610
    ctx->pc = 0x3276b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x3276b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3276b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3276bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3276bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3276c0: 0x26110ac0  addiu       $s1, $s0, 0xAC0
    ctx->pc = 0x3276c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2752));
    // 0x3276c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3276c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3276c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3276cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3276ccu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3CF9F0u));
label_3276d0:
    // 0x3276d0: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3276D0u;
    {
        const bool branch_taken_0x3276d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3276d0) {
            ctx->pc = 0x3276D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3276D0u;
            // 0x3276d4: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3276E4u;
            goto label_3276e4;
        }
    }
    ctx->pc = 0x3276D8u;
    // 0x3276d8: 0xc0c9cdc  jal         func_327370
    ctx->pc = 0x3276D8u;
    SET_GPR_U32(ctx, 31, 0x3276E0u);
    ctx->pc = 0x3276DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276D8u;
    // 0x3276dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327370u, 0x3276D8u, 0x3276E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276E0u;
label_3276e0:
    // 0x3276e0: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x3276e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_3276e4:
    // 0x3276e4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3276e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3276e8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3276E8u;
    {
        const bool branch_taken_0x3276e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3276e8) {
            ctx->pc = 0x3276ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3276E8u;
            // 0x3276ec: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3276D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3276d0;
        }
    }
    ctx->pc = 0x3276F0u;
    // 0x3276f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3276f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3276f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3276f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3276f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3276f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3276fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3276fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327700: 0x3e00008  jr          $ra
    ctx->pc = 0x327700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327700u;
        // 0x327704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327708u;
}
