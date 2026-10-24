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

// Function: func_00325240
// Address: 0x325240 - 0x325290
void func_00325240_0x325240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325240_0x325240");
#endif

    switch (ctx->pc) {
        case 0x32525cu: goto label_32525c;
        case 0x325280u: goto label_325280;
        default: break;
    }

    ctx->pc = 0x325240u;

    // 0x325240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325244: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32524c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x32524Cu;
    {
        const bool branch_taken_0x32524c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32524Cu;
        // 0x325250: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32524c) {
            ctx->pc = 0x325280u;
            goto label_325280;
        }
    }
    ctx->pc = 0x325254u;
    // 0x325254: 0xc0ebeec  jal         func_3AFBB0
    ctx->pc = 0x325254u;
    SET_GPR_U32(ctx, 31, 0x32525Cu);
    ctx->pc = 0x325258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325254u;
    // 0x325258: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBB0u, 0x325254u, 0x32525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32525Cu;
label_32525c:
    // 0x32525c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x325260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325264: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x325264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325268: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325268u;
    {
        const bool branch_taken_0x325268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325268u;
        // 0x32526c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325268) {
            ctx->pc = 0x325278u;
            goto label_325278;
        }
    }
    ctx->pc = 0x325270u;
    // 0x325270: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x325270u;
    {
        const bool branch_taken_0x325270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x325274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325270u;
        // 0x325274: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325270) {
            ctx->pc = 0x325284u;
            goto label_325284;
        }
    }
    ctx->pc = 0x325278u;
label_325278:
    // 0x325278: 0xc0ec290  jal         func_3B0A40
    ctx->pc = 0x325278u;
    SET_GPR_U32(ctx, 31, 0x325280u);
    ctx->pc = 0x3B0A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0A40u, 0x325278u, 0x325280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325280u;
label_325280:
    // 0x325280: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_325284:
    // 0x325284: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x325284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325288: 0x3e00008  jr          $ra
    ctx->pc = 0x325288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325288u;
        // 0x32528c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325290u;
}
