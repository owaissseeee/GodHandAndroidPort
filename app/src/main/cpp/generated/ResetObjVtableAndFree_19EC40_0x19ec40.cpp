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

// Function: ResetObjVtableAndFree_19EC40
// Address: 0x19ec40 - 0x19eca0
void ResetObjVtableAndFree_19EC40_0x19ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjVtableAndFree_19EC40_0x19ec40");
#endif

    switch (ctx->pc) {
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec8cu: goto label_19ec8c;
        default: break;
    }

    ctx->pc = 0x19ec40u;

    // 0x19ec40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ec44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19ec48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ec4c: 0x24426608  addiu       $v0, $v0, 0x6608
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
    // 0x19ec50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ec54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ec54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ec5c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19ec60: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19ec64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EC64u;
    {
        const bool branch_taken_0x19ec64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec64) {
            ctx->pc = 0x19EC80u;
            goto label_19ec80;
        }
    }
    ctx->pc = 0x19EC6Cu;
    // 0x19ec6c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ec70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec74: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19EC74u;
    SET_GPR_U32(ctx, 31, 0x19EC7Cu);
    ctx->pc = 0x19EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC74u;
    // 0x19ec78: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19EC74u, 0x19EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC7Cu;
label_19ec7c:
    // 0x19ec7c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19ec80:
    // 0x19ec80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec84: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19EC84u;
    SET_GPR_U32(ctx, 31, 0x19EC8Cu);
    ctx->pc = 0x19EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC84u;
    // 0x19ec88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19EC84u, 0x19EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC8Cu;
label_19ec8c:
    // 0x19ec8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ec8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ec90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ec90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC98u;
        // 0x19ec9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ECA0u;
}
