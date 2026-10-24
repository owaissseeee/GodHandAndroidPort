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

// Function: cOmTwoGive_destroy
// Address: 0x1b9030 - 0x1b90d0
void cOmTwoGive_destroy_0x1b9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmTwoGive_destroy_0x1b9030");
#endif

    switch (ctx->pc) {
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9088u: goto label_1b9088;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90b4u: goto label_1b90b4;
        default: break;
    }

    ctx->pc = 0x1b9030u;

    // 0x1b9030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9034: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b9034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b9038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b903c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b9040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b904c: 0x24514380  addiu       $s1, $v0, 0x4380
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1b9050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9054: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b9054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9058: 0x246390c8  addiu       $v1, $v1, -0x6F38
    ctx->pc = 0x1b9058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938824));
    // 0x1b905c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9060: 0x8e050600  lw          $a1, 0x600($s0)
    ctx->pc = 0x1b9060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b9064: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B9064u;
    SET_GPR_U32(ctx, 31, 0x1B906Cu);
    ctx->pc = 0x1B9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9064u;
    // 0x1b9068: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B9064u, 0x1B906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B906Cu;
label_1b906c:
    // 0x1b906c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B906Cu;
    {
        const bool branch_taken_0x1b906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B906Cu;
        // 0x1b9070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b906c) {
            ctx->pc = 0x1B907Cu;
            goto label_1b907c;
        }
    }
    ctx->pc = 0x1B9074u;
    // 0x1b9074: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1b9074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1b9078: 0xae020604  sw          $v0, 0x604($s0)
    ctx->pc = 0x1b9078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
label_1b907c:
    // 0x1b907c: 0x8e050608  lw          $a1, 0x608($s0)
    ctx->pc = 0x1b907cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b9080: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B9080u;
    SET_GPR_U32(ctx, 31, 0x1B9088u);
    ctx->pc = 0x1B9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9080u;
    // 0x1b9084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B9080u, 0x1B9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9088u;
label_1b9088:
    // 0x1b9088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9088u;
    {
        const bool branch_taken_0x1b9088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9088u;
        // 0x1b908c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9088) {
            ctx->pc = 0x1B9098u;
            goto label_1b9098;
        }
    }
    ctx->pc = 0x1B9090u;
    // 0x1b9090: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1b9090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
    // 0x1b9094: 0xae02060c  sw          $v0, 0x60C($s0)
    ctx->pc = 0x1b9094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 2));
label_1b9098:
    // 0x1b9098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b909c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90a0: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B90A0u;
    SET_GPR_U32(ctx, 31, 0x1B90A8u);
    ctx->pc = 0x1B90A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90A0u;
    // 0x1b90a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B90A0u, 0x1B90A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90A8u;
label_1b90a8:
    // 0x1b90a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b90a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90ac: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B90ACu;
    SET_GPR_U32(ctx, 31, 0x1B90B4u);
    ctx->pc = 0x1B90B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90ACu;
    // 0x1b90b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B90ACu, 0x1B90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90B4u;
label_1b90b4:
    // 0x1b90b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b90b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b90b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b90b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b90bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b90bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b90c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b90c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b90c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B90C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B90C4u;
        // 0x1b90c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B90C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B90CCu;
    // 0x1b90cc: 0x0  nop
    ctx->pc = 0x1b90ccu;
    // NOP
    ctx->pc = 0x1b90d0u;
}
