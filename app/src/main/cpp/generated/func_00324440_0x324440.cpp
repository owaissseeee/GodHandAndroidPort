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

// Function: func_00324440
// Address: 0x324440 - 0x3244c8
void func_00324440_0x324440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324440_0x324440");
#endif

    switch (ctx->pc) {
        case 0x324460u: goto label_324460;
        case 0x324488u: goto label_324488;
        case 0x324490u: goto label_324490;
        case 0x3244a4u: goto label_3244a4;
        default: break;
    }

    ctx->pc = 0x324440u;

    // 0x324440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32444c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32444Cu;
    {
        const bool branch_taken_0x32444c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32444Cu;
        // 0x324450: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32444c) {
            ctx->pc = 0x324468u;
            goto label_324468;
        }
    }
    ctx->pc = 0x324454u;
    // 0x324454: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x324454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x324458: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x324458u;
    SET_GPR_U32(ctx, 31, 0x324460u);
    ctx->pc = 0x32445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324458u;
    // 0x32445c: 0x24841928  addiu       $a0, $a0, 0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x324458u, 0x324460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324460u;
label_324460:
    // 0x324460: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x324460u;
    {
        const bool branch_taken_0x324460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324460u;
        // 0x324464: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324460) {
            ctx->pc = 0x3244B0u;
            goto label_3244b0;
        }
    }
    ctx->pc = 0x324468u;
label_324468:
    // 0x324468: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x324468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32446c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x32446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x324470: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x324470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x324474: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x324474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x324478: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x324478u;
    {
        const bool branch_taken_0x324478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324478) {
            ctx->pc = 0x32447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324478u;
            // 0x32447c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3244B0u;
            goto label_3244b0;
        }
    }
    ctx->pc = 0x324480u;
    // 0x324480: 0xc0ca3dc  jal         func_328F70
    ctx->pc = 0x324480u;
    SET_GPR_U32(ctx, 31, 0x324488u);
    ctx->pc = 0x324484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324480u;
    // 0x324484: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F70u, 0x324480u, 0x324488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324488u;
label_324488:
    // 0x324488: 0xc0ca026  jal         func_328098
    ctx->pc = 0x324488u;
    SET_GPR_U32(ctx, 31, 0x324490u);
    ctx->pc = 0x32448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324488u;
    // 0x32448c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x324488u, 0x324490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324490u;
label_324490:
    // 0x324490: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324494: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x324494u;
    {
        const bool branch_taken_0x324494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x324498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324494u;
        // 0x324498: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324494) {
            ctx->pc = 0x3244B0u;
            goto label_3244b0;
        }
    }
    ctx->pc = 0x32449Cu;
    // 0x32449c: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x32449Cu;
    SET_GPR_U32(ctx, 31, 0x3244A4u);
    ctx->pc = 0x3244A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32449Cu;
    // 0x3244a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x32449Cu, 0x3244A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244A4u;
label_3244a4:
    // 0x3244a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3244a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3244a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3244a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3244acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3244b0:
    // 0x3244b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3244b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3244b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3244b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3244b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3244B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244B8u;
        // 0x3244bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3244B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3244C0u;
    // 0x3244c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3244c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3244c4: 0x0  nop
    ctx->pc = 0x3244c4u;
    // NOP
    ctx->pc = 0x3244c8u;
}
