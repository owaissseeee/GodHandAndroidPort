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

// Function: BuildSlotEntry_376200
// Address: 0x376200 - 0x376260
void BuildSlotEntry_376200_0x376200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildSlotEntry_376200_0x376200");
#endif

    switch (ctx->pc) {
        case 0x376218u: goto label_376218;
        case 0x376238u: goto label_376238;
        case 0x376248u: goto label_376248;
        default: break;
    }

    ctx->pc = 0x376200u;

    // 0x376200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37620c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376210: 0xc0ddaa4  jal         func_376A90
    ctx->pc = 0x376210u;
    SET_GPR_U32(ctx, 31, 0x376218u);
    ctx->pc = 0x376214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376210u;
    // 0x376214: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376A90u, 0x376210u, 0x376218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376218u;
label_376218:
    // 0x376218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x376218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37621c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x37621Cu;
    {
        const bool branch_taken_0x37621c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x376220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37621Cu;
        // 0x376220: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37621c) {
            ctx->pc = 0x37624Cu;
            goto label_37624c;
        }
    }
    ctx->pc = 0x376224u;
    // 0x376224: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x376224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x376228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376228u;
    {
        const bool branch_taken_0x376228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376228) {
            ctx->pc = 0x376240u;
            goto label_376240;
        }
    }
    ctx->pc = 0x376230u;
    // 0x376230: 0xc0dd898  jal         func_376260
    ctx->pc = 0x376230u;
    SET_GPR_U32(ctx, 31, 0x376238u);
    ctx->pc = 0x376234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376230u;
    // 0x376234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376260u, 0x376230u, 0x376238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376238u;
label_376238:
    // 0x376238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376238u;
    {
        const bool branch_taken_0x376238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376238u;
        // 0x37623c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376238) {
            ctx->pc = 0x37624Cu;
            goto label_37624c;
        }
    }
    ctx->pc = 0x376240u;
label_376240:
    // 0x376240: 0xc0dd8b6  jal         func_3762D8
    ctx->pc = 0x376240u;
    SET_GPR_U32(ctx, 31, 0x376248u);
    ctx->pc = 0x376244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376240u;
    // 0x376244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3762D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3762D8u, 0x376240u, 0x376248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376248u;
label_376248:
    // 0x376248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37624c:
    // 0x37624c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37624cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376254: 0x3e00008  jr          $ra
    ctx->pc = 0x376254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376254u;
        // 0x376258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37625Cu;
    // 0x37625c: 0x0  nop
    ctx->pc = 0x37625cu;
    // NOP
    ctx->pc = 0x376260u;
}
