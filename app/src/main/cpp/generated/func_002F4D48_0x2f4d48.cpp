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

// Function: func_002F4D48
// Address: 0x2f4d48 - 0x2f4da0
void func_002F4D48_0x2f4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4D48_0x2f4d48");
#endif

    switch (ctx->pc) {
        case 0x2f4d6cu: goto label_2f4d6c;
        case 0x2f4d84u: goto label_2f4d84;
        default: break;
    }

    ctx->pc = 0x2f4d48u;

    // 0x2f4d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4d4c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f4d50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f4d54: 0x8c6264f8  lw          $v0, 0x64F8($v1)
    ctx->pc = 0x2f4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7864F8u));
    // 0x2f4d58: 0x247064f8  addiu       $s0, $v1, 0x64F8
    ctx->pc = 0x2f4d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25848));
    // 0x2f4d5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4D5Cu;
    {
        const bool branch_taken_0x2f4d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D5Cu;
        // 0x2f4d60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d5c) {
            ctx->pc = 0x2F4D84u;
            goto label_2f4d84;
        }
    }
    ctx->pc = 0x2F4D64u;
    // 0x2f4d64: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F4D64u;
    SET_GPR_U32(ctx, 31, 0x2F4D6Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F4D64u, 0x2F4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D6Cu;
label_2f4d6c:
    // 0x2f4d6c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f4d70: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f4d74: 0x24a5f300  addiu       $a1, $a1, -0xD00
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    // 0x2f4d78: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f4d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f4d7c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D84u);
    ctx->pc = 0x2F4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D7Cu;
    // 0x2f4d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F4D7Cu, 0x2F4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D84u;
label_2f4d84:
    // 0x2f4d84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4d8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f4d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D90u;
        // 0x2f4d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4D98u;
    // 0x2f4d98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f4d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4d9c: 0x0  nop
    ctx->pc = 0x2f4d9cu;
    // NOP
    ctx->pc = 0x2f4da0u;
}
