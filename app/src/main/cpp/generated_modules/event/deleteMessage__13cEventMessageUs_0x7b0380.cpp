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
// Function: deleteMessage__13cEventMessageUs
// Address: 0x7b0380 - 0x7b03f8
void deleteMessage__13cEventMessageUs_0x7b0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deleteMessage__13cEventMessageUs_0x7b0380");
#endif

    switch (ctx->pc) {
        case 0x7b03a4u: goto label_7b03a4;
        case 0x7b03c0u: goto label_7b03c0;
        case 0x7b03d4u: goto label_7b03d4;
        default: break;
    }

    ctx->pc = 0x7b0380u;

    // 0x7b0380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b0384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b0384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b0388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b0388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b038c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b0390: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0398: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x7b0398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7b039c: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7B039Cu;
    SET_GPR_U32(ctx, 31, 0x7B03A4u);
    ctx->pc = 0x7B03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B039Cu;
    // 0x7b03a0: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7B039Cu, 0x7B03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B03A4u;
label_7b03a4:
    // 0x7b03a4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x7B03A4u;
    {
        const bool branch_taken_0x7b03a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b03a4) {
            ctx->pc = 0x7B03A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B03A4u;
            // 0x7b03a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B03E4u;
            goto label_7b03e4;
        }
    }
    ctx->pc = 0x7B03ACu;
    // 0x7b03ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b03acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b03b0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B03B0u;
    {
        const bool branch_taken_0x7b03b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B03B0u;
        // 0x7b03b4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b03b0) {
            ctx->pc = 0x7B03C8u;
            goto label_7b03c8;
        }
    }
    ctx->pc = 0x7B03B8u;
    // 0x7b03b8: 0xc0abb22  jal         func_2AEC88
    ctx->pc = 0x7B03B8u;
    SET_GPR_U32(ctx, 31, 0x7B03C0u);
    ctx->pc = 0x7B03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B03B8u;
    // 0x7b03bc: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC88u, 0x7B03B8u, 0x7B03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B03C0u;
label_7b03c0:
    // 0x7b03c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7B03C0u;
    {
        const bool branch_taken_0x7b03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B03C0u;
        // 0x7b03c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b03c0) {
            ctx->pc = 0x7B03D8u;
            goto label_7b03d8;
        }
    }
    ctx->pc = 0x7B03C8u;
label_7b03c8:
    // 0x7b03c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b03c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b03cc: 0xc0abb10  jal         func_2AEC40
    ctx->pc = 0x7B03CCu;
    SET_GPR_U32(ctx, 31, 0x7B03D4u);
    ctx->pc = 0x7B03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B03CCu;
    // 0x7b03d0: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC40u, 0x7B03CCu, 0x7B03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B03D4u;
label_7b03d4:
    // 0x7b03d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b03d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7b03d8:
    // 0x7b03d8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x7b03d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b03dc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x7b03dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b03e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b03e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b03e4:
    // 0x7b03e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b03e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b03e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b03e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b03ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7B03ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B03ECu;
        // 0x7b03f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B03ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B03F4u;
    // 0x7b03f4: 0x0  nop
    ctx->pc = 0x7b03f4u;
    // NOP
    ctx->pc = 0x7b03f8u;
}
} // namespace gh_event
