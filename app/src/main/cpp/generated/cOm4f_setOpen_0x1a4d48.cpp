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

// Function: cOm4f_setOpen
// Address: 0x1a4d48 - 0x1a4da8
void cOm4f_setOpen_0x1a4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setOpen_0x1a4d48");
#endif

    switch (ctx->pc) {
        case 0x1a4d80u: goto label_1a4d80;
        default: break;
    }

    ctx->pc = 0x1a4d48u;

    // 0x1a4d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4d4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a4d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a4d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4d5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a4d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4d60: 0x92020762  lbu         $v0, 0x762($s0)
    ctx->pc = 0x1a4d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1890)));
    // 0x1a4d64: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4D64u;
    {
        const bool branch_taken_0x1a4d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4d64) {
            ctx->pc = 0x1A4D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D64u;
            // 0x1a4d68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D94u;
            goto label_1a4d94;
        }
    }
    ctx->pc = 0x1A4D6Cu;
    // 0x1a4d6c: 0x92020761  lbu         $v0, 0x761($s0)
    ctx->pc = 0x1a4d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1889)));
    // 0x1a4d70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4D70u;
    {
        const bool branch_taken_0x1a4d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d70) {
            ctx->pc = 0x1A4D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D70u;
            // 0x1a4d74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D94u;
            goto label_1a4d94;
        }
    }
    ctx->pc = 0x1A4D78u;
    // 0x1a4d78: 0xc0692f4  jal         func_1A4BD0
    ctx->pc = 0x1A4D78u;
    SET_GPR_U32(ctx, 31, 0x1A4D80u);
    ctx->pc = 0x1A4D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D78u;
    // 0x1a4d7c: 0xa2110760  sb          $s1, 0x760($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1888), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BD0u, 0x1A4D78u, 0x1A4D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D80u;
label_1a4d80:
    // 0x1a4d80: 0xa21102f4  sb          $s1, 0x2F4($s0)
    ctx->pc = 0x1a4d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a4d84: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a4d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4d88: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a4d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4d8c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a4d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4d94:
    // 0x1a4d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D9Cu;
        // 0x1a4da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4DA4u;
    // 0x1a4da4: 0x0  nop
    ctx->pc = 0x1a4da4u;
    // NOP
    ctx->pc = 0x1a4da8u;
}
