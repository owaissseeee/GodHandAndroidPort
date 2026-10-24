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

// Function: func_00378BF8
// Address: 0x378bf8 - 0x378c48
void func_00378BF8_0x378bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378BF8_0x378bf8");
#endif

    switch (ctx->pc) {
        case 0x378c0cu: goto label_378c0c;
        case 0x378c14u: goto label_378c14;
        case 0x378c28u: goto label_378c28;
        case 0x378c38u: goto label_378c38;
        default: break;
    }

    ctx->pc = 0x378bf8u;

    // 0x378bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378bfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378c04: 0xc0de312  jal         func_378C48
    ctx->pc = 0x378C04u;
    SET_GPR_U32(ctx, 31, 0x378C0Cu);
    ctx->pc = 0x378C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C04u;
    // 0x378c08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C48u, 0x378C04u, 0x378C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C0Cu;
label_378c0c:
    // 0x378c0c: 0xc0dec38  jal         func_37B0E0
    ctx->pc = 0x378C0Cu;
    SET_GPR_U32(ctx, 31, 0x378C14u);
    ctx->pc = 0x378C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C0Cu;
    // 0x378c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0E0u, 0x378C0Cu, 0x378C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C14u;
label_378c14:
    // 0x378c14: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x378c14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x378c18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x378C18u;
    {
        const bool branch_taken_0x378c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378c18) {
            ctx->pc = 0x378C30u;
            goto label_378c30;
        }
    }
    ctx->pc = 0x378C20u;
    // 0x378c20: 0xc0de464  jal         func_379190
    ctx->pc = 0x378C20u;
    SET_GPR_U32(ctx, 31, 0x378C28u);
    ctx->pc = 0x378C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C20u;
    // 0x378c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379190u, 0x378C20u, 0x378C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C28u;
label_378c28:
    // 0x378c28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x378C28u;
    {
        const bool branch_taken_0x378c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C28u;
        // 0x378c2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c28) {
            ctx->pc = 0x378C3Cu;
            goto label_378c3c;
        }
    }
    ctx->pc = 0x378C30u;
label_378c30:
    // 0x378c30: 0xc0de6f0  jal         func_379BC0
    ctx->pc = 0x378C30u;
    SET_GPR_U32(ctx, 31, 0x378C38u);
    ctx->pc = 0x378C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C30u;
    // 0x378c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379BC0u, 0x378C30u, 0x378C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C38u;
label_378c38:
    // 0x378c38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378c3c:
    // 0x378c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378c40: 0x3e00008  jr          $ra
    ctx->pc = 0x378C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C40u;
        // 0x378c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378C48u;
}
