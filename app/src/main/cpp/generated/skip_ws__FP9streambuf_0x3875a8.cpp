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

// Function: skip_ws__FP9streambuf
// Address: 0x3875a8 - 0x387610
void skip_ws__FP9streambuf_0x3875a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("skip_ws__FP9streambuf_0x3875a8");
#endif

    switch (ctx->pc) {
        case 0x3875d0u: goto label_3875d0;
        case 0x3875d8u: goto label_3875d8;
        default: break;
    }

    ctx->pc = 0x3875a8u;

    // 0x3875a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3875a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3875ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3875acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3875b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3875b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3875b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3875b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3875b8: 0x2452f039  addiu       $s2, $v0, -0xFC7
    ctx->pc = 0x3875b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
    // 0x3875bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3875bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3875c0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3875c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3875c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3875c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3875c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3875c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3875cc: 0x0  nop
    ctx->pc = 0x3875ccu;
    // NOP
label_3875d0:
    // 0x3875d0: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x3875D0u;
    SET_GPR_U32(ctx, 31, 0x3875D8u);
    ctx->pc = 0x3875D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3875D0u;
    // 0x3875d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x3875D0u, 0x3875D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3875D8u;
label_3875d8:
    // 0x3875d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3875d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3875dc: 0x10910005  beq         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3875DCu;
    {
        const bool branch_taken_0x3875dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x3875E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875DCu;
        // 0x3875e0: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875dc) {
            ctx->pc = 0x3875F4u;
            goto label_3875f4;
        }
    }
    ctx->pc = 0x3875E4u;
    // 0x3875e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3875e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3875e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3875e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3875ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3875ECu;
    {
        const bool branch_taken_0x3875ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3875ec) {
            ctx->pc = 0x3875D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3875d0;
        }
    }
    ctx->pc = 0x3875F4u;
label_3875f4:
    // 0x3875f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3875f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3875f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3875f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3875fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3875fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387600: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387608: 0x3e00008  jr          $ra
    ctx->pc = 0x387608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387608u;
        // 0x38760c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387610u;
}
