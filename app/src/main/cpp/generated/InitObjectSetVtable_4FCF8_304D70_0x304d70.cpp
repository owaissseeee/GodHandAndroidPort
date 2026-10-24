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

// Function: InitObjectSetVtable_4FCF8_304D70
// Address: 0x304d70 - 0x304db0
void InitObjectSetVtable_4FCF8_304D70_0x304d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4FCF8_304D70_0x304d70");
#endif

    switch (ctx->pc) {
        case 0x304d8cu: goto label_304d8c;
        default: break;
    }

    ctx->pc = 0x304d70u;

    // 0x304d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304d74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d7c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304D7Cu;
    {
        const bool branch_taken_0x304d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D7Cu;
        // 0x304d80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d7c) {
            ctx->pc = 0x304D98u;
            goto label_304d98;
        }
    }
    ctx->pc = 0x304D84u;
    // 0x304d84: 0xc0c09e4  jal         func_302790
    ctx->pc = 0x304D84u;
    SET_GPR_U32(ctx, 31, 0x304D8Cu);
    ctx->pc = 0x302790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302790u, 0x304D84u, 0x304D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D8Cu;
label_304d8c:
    // 0x304d8c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x304d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x304d90: 0x2463fcf8  addiu       $v1, $v1, -0x308
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966520));
    // 0x304d94: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x304d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_304d98:
    // 0x304d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x304d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304da0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304da4: 0x3e00008  jr          $ra
    ctx->pc = 0x304DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DA4u;
        // 0x304da8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304DACu;
    // 0x304dac: 0x0  nop
    ctx->pc = 0x304dacu;
    // NOP
    ctx->pc = 0x304db0u;
}
