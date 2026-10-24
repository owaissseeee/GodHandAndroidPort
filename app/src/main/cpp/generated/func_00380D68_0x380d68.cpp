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

// Function: func_00380D68
// Address: 0x380d68 - 0x380dc0
void func_00380D68_0x380d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380D68_0x380d68");
#endif

    switch (ctx->pc) {
        case 0x380d8cu: goto label_380d8c;
        case 0x380da0u: goto label_380da0;
        case 0x380dacu: goto label_380dac;
        default: break;
    }

    ctx->pc = 0x380d68u;

    // 0x380d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380d74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x380d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380d78: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380d7c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x380D7Cu;
    {
        const bool branch_taken_0x380d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380d7c) {
            ctx->pc = 0x380D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380D7Cu;
            // 0x380d80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380DB0u;
            goto label_380db0;
        }
    }
    ctx->pc = 0x380D84u;
    // 0x380d84: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x380D84u;
    SET_GPR_U32(ctx, 31, 0x380D8Cu);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x380D84u, 0x380D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380D8Cu;
label_380d8c:
    // 0x380d8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x380d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x380d90: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x380D90u;
    {
        const bool branch_taken_0x380d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x380d90) {
            ctx->pc = 0x380D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380D90u;
            // 0x380d94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380DB0u;
            goto label_380db0;
        }
    }
    ctx->pc = 0x380D98u;
    // 0x380d98: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x380D98u;
    SET_GPR_U32(ctx, 31, 0x380DA0u);
    ctx->pc = 0x380D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380D98u;
    // 0x380d9c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x380D98u, 0x380DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DA0u;
label_380da0:
    // 0x380da0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x380da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x380da4: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x380DA4u;
    SET_GPR_U32(ctx, 31, 0x380DACu);
    ctx->pc = 0x380DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DA4u;
    // 0x380da8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x380DA4u, 0x380DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DACu;
label_380dac:
    // 0x380dac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x380dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_380db0:
    // 0x380db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380db4: 0x3e00008  jr          $ra
    ctx->pc = 0x380DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DB4u;
        // 0x380db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380DBCu;
    // 0x380dbc: 0x0  nop
    ctx->pc = 0x380dbcu;
    // NOP
    ctx->pc = 0x380dc0u;
}
