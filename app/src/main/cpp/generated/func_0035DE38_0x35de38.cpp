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

// Function: func_0035DE38
// Address: 0x35de38 - 0x35de88
void func_0035DE38_0x35de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DE38_0x35de38");
#endif

    switch (ctx->pc) {
        case 0x35de5cu: goto label_35de5c;
        default: break;
    }

    ctx->pc = 0x35de38u;

    // 0x35de38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35de3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35de40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35de44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35de44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35de4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35de50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35de54: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DE54u;
    SET_GPR_U32(ctx, 31, 0x35DE5Cu);
    ctx->pc = 0x35DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE54u;
    // 0x35de58: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DE54u, 0x35DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE5Cu;
label_35de5c:
    // 0x35de5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DE5Cu;
    {
        const bool branch_taken_0x35de5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de5c) {
            ctx->pc = 0x35DE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE5Cu;
            // 0x35de60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE74u;
            goto label_35de74;
        }
    }
    ctx->pc = 0x35DE64u;
    // 0x35de64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x35de64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35de68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35de6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35de70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35de70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35de74:
    // 0x35de74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35de74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35de78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35de7c: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE7Cu;
        // 0x35de80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE84u;
    // 0x35de84: 0x0  nop
    ctx->pc = 0x35de84u;
    // NOP
    ctx->pc = 0x35de88u;
}
