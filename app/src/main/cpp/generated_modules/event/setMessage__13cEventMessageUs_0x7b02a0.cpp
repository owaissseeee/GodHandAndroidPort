#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setMessage__13cEventMessageUs
// Address: 0x7b02a0 - 0x7b0308
void setMessage__13cEventMessageUs_0x7b02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setMessage__13cEventMessageUs_0x7b02a0");
#endif

    switch (ctx->pc) {
        case 0x7b02c4u: goto label_7b02c4;
        case 0x7b02ecu: goto label_7b02ec;
        default: break;
    }

    ctx->pc = 0x7b02a0u;

    // 0x7b02a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b02a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b02a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b02a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b02a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b02ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b02acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b02b0: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b02b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b02b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b02b8: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x7b02b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7b02bc: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7B02BCu;
    SET_GPR_U32(ctx, 31, 0x7B02C4u);
    ctx->pc = 0x7B02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B02BCu;
    // 0x7b02c0: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7B02BCu, 0x7B02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B02C4u;
label_7b02c4:
    // 0x7b02c4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B02C4u;
    {
        const bool branch_taken_0x7b02c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b02c4) {
            ctx->pc = 0x7B02C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B02C4u;
            // 0x7b02c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B02F4u;
            goto label_7b02f4;
        }
    }
    ctx->pc = 0x7B02CCu;
    // 0x7b02cc: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x7b02ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x7b02d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7b02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7b02d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b02d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b02d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7b02d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b02dc: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x7b02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x7b02e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b02e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b02e4: 0xc0abada  jal         func_2AEB68
    ctx->pc = 0x7B02E4u;
    SET_GPR_U32(ctx, 31, 0x7B02ECu);
    ctx->pc = 0x7B02E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B02E4u;
    // 0x7b02e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB68u, 0x7B02E4u, 0x7B02ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B02ECu;
label_7b02ec:
    // 0x7b02ec: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x7b02ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b02f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b02f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b02f4:
    // 0x7b02f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b02f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b02f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b02f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b02fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B02FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B02FCu;
        // 0x7b0300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B02FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0304u;
    // 0x7b0304: 0x0  nop
    ctx->pc = 0x7b0304u;
    // NOP
    ctx->pc = 0x7b0308u;
}
} // namespace gh_event
