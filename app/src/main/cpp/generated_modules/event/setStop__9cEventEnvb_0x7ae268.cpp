#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setStop__9cEventEnvb
// Address: 0x7ae268 - 0x7ae2d8
void setStop__9cEventEnvb_0x7ae268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setStop__9cEventEnvb_0x7ae268");
#endif

    switch (ctx->pc) {
        case 0x7ae2a8u: goto label_7ae2a8;
        case 0x7ae2c8u: goto label_7ae2c8;
        default: break;
    }

    ctx->pc = 0x7ae268u;

    // 0x7ae268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ae268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ae26c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE26Cu;
    {
        const bool branch_taken_0x7ae26c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE26Cu;
        // 0x7ae270: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae26c) {
            ctx->pc = 0x7AE280u;
            goto label_7ae280;
        }
    }
    ctx->pc = 0x7AE274u;
    // 0x7ae274: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x7ae274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x7ae278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE278u;
    {
        const bool branch_taken_0x7ae278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE278u;
        // 0x7ae27c: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae278) {
            ctx->pc = 0x7AE28Cu;
            goto label_7ae28c;
        }
    }
    ctx->pc = 0x7AE280u;
label_7ae280:
    // 0x7ae280: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x7ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x7ae284: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x7ae284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x7ae288: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_7ae28c:
    // 0x7ae28c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AE28Cu;
    {
        const bool branch_taken_0x7ae28c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE28Cu;
        // 0x7ae290: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae28c) {
            ctx->pc = 0x7AE2B0u;
            goto label_7ae2b0;
        }
    }
    ctx->pc = 0x7AE294u;
    // 0x7ae294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7ae294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7ae298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ae298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ae29c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ae29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ae2a0: 0xc0b4792  jal         func_2D1E48
    ctx->pc = 0x7AE2A0u;
    SET_GPR_U32(ctx, 31, 0x7AE2A8u);
    ctx->pc = 0x7AE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE2A0u;
    // 0x7ae2a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E48u, 0x7AE2A0u, 0x7AE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE2A8u;
label_7ae2a8:
    // 0x7ae2a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7AE2A8u;
    {
        const bool branch_taken_0x7ae2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE2A8u;
        // 0x7ae2ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae2a8) {
            ctx->pc = 0x7AE2CCu;
            goto label_7ae2cc;
        }
    }
    ctx->pc = 0x7AE2B0u;
label_7ae2b0:
    // 0x7ae2b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7ae2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7ae2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ae2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ae2b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7ae2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7ae2bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7ae2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ae2c0: 0xc0b47ba  jal         func_2D1EE8
    ctx->pc = 0x7AE2C0u;
    SET_GPR_U32(ctx, 31, 0x7AE2C8u);
    ctx->pc = 0x7AE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE2C0u;
    // 0x7ae2c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1EE8u, 0x7AE2C0u, 0x7AE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE2C8u;
label_7ae2c8:
    // 0x7ae2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ae2cc:
    // 0x7ae2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE2CCu;
        // 0x7ae2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE2D4u;
    // 0x7ae2d4: 0x0  nop
    ctx->pc = 0x7ae2d4u;
    // NOP
    ctx->pc = 0x7ae2d8u;
}
} // namespace gh_event
