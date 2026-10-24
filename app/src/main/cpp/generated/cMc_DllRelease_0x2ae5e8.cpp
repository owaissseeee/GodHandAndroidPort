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

// Function: cMc_DllRelease
// Address: 0x2ae5e8 - 0x2ae650
void cMc_DllRelease_0x2ae5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_DllRelease_0x2ae5e8");
#endif

    switch (ctx->pc) {
        case 0x2ae614u: goto label_2ae614;
        case 0x2ae61cu: goto label_2ae61c;
        case 0x2ae638u: goto label_2ae638;
        default: break;
    }

    ctx->pc = 0x2ae5e8u;

    // 0x2ae5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae5f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ae5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ae5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae5f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2ae5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae600: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE600u;
    {
        const bool branch_taken_0x2ae600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae600) {
            ctx->pc = 0x2AE604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE600u;
            // 0x2ae604: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE624u;
            goto label_2ae624;
        }
    }
    ctx->pc = 0x2AE608u;
    // 0x2ae608: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2ae608u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2AE608u) & 0xFFFFu)) << 16));
    // 0x2ae60c: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE60Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE60Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE614u);
        ctx->pc = 0x2AE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE60Cu;
        // 0x2ae610: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2AE610u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE60Cu, 0x2AE614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE614u;
label_2ae614:
    // 0x2ae614: 0xc0e53c8  jal         func_394F20
    ctx->pc = 0x2AE614u;
    SET_GPR_U32(ctx, 31, 0x2AE61Cu);
    ctx->pc = 0x2AE618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE614u;
    // 0x2ae618: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x2AE614u, 0x2AE61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE61Cu;
label_2ae61c:
    // 0x2ae61c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2ae61cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae620: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2ae620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ae624:
    // 0x2ae624: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE624u;
    {
        const bool branch_taken_0x2ae624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae624) {
            ctx->pc = 0x2AE628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE624u;
            // 0x2ae628: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE640u;
            goto label_2ae640;
        }
    }
    ctx->pc = 0x2AE62Cu;
    // 0x2ae62c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2ae62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2ae630: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2AE630u;
    SET_GPR_U32(ctx, 31, 0x2AE638u);
    ctx->pc = 0x2AE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE630u;
    // 0x2ae634: 0x24844230  addiu       $a0, $a0, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2AE630u, 0x2AE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE638u;
label_2ae638:
    // 0x2ae638: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ae63c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ae63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae640:
    // 0x2ae640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae644: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE644u;
        // 0x2ae648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE64Cu;
    // 0x2ae64c: 0x0  nop
    ctx->pc = 0x2ae64cu;
    // NOP
    ctx->pc = 0x2ae650u;
}
