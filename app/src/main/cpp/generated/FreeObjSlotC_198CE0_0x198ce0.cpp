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

// Function: FreeObjSlotC_198CE0
// Address: 0x198ce0 - 0x198d40
void FreeObjSlotC_198CE0_0x198ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjSlotC_198CE0_0x198ce0");
#endif

    switch (ctx->pc) {
        case 0x198d1cu: goto label_198d1c;
        case 0x198d2cu: goto label_198d2c;
        default: break;
    }

    ctx->pc = 0x198ce0u;

    // 0x198ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198ce4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x198ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x198ce8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198cec: 0x24425000  addiu       $v0, $v0, 0x5000
    ctx->pc = 0x198cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20480));
    // 0x198cf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198cfc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x198cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x198d00: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x198d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x198d04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198D04u;
    {
        const bool branch_taken_0x198d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d04) {
            ctx->pc = 0x198D20u;
            goto label_198d20;
        }
    }
    ctx->pc = 0x198D0Cu;
    // 0x198d0c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x198d10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d14: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x198D14u;
    SET_GPR_U32(ctx, 31, 0x198D1Cu);
    ctx->pc = 0x198D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D14u;
    // 0x198d18: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x198D14u, 0x198D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D1Cu;
label_198d1c:
    // 0x198d1c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x198d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_198d20:
    // 0x198d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d24: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x198D24u;
    SET_GPR_U32(ctx, 31, 0x198D2Cu);
    ctx->pc = 0x198D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D24u;
    // 0x198d28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x198D24u, 0x198D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D2Cu;
label_198d2c:
    // 0x198d2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198d38: 0x3e00008  jr          $ra
    ctx->pc = 0x198D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D38u;
        // 0x198d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D40u;
}
