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

// Function: func_00355C08
// Address: 0x355c08 - 0x355c88
void func_00355C08_0x355c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355C08_0x355c08");
#endif

    switch (ctx->pc) {
        case 0x355c28u: goto label_355c28;
        case 0x355c48u: goto label_355c48;
        case 0x355c70u: goto label_355c70;
        default: break;
    }

    ctx->pc = 0x355c08u;

    // 0x355c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355c18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x355c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355c20: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355C20u;
    SET_GPR_U32(ctx, 31, 0x355C28u);
    ctx->pc = 0x355C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C20u;
    // 0x355c24: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355C20u, 0x355C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C28u;
label_355c28:
    // 0x355c28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x355c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x355c2c: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x355c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x355c30: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x355c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x355c34: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x355c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x355c38: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x355c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x355c3c: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x355C3Cu;
    {
        const bool branch_taken_0x355c3c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x355C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C3Cu;
        // 0x355c40: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c3c) {
            ctx->pc = 0x355C68u;
            goto label_355c68;
        }
    }
    ctx->pc = 0x355C44u;
    // 0x355c44: 0x0  nop
    ctx->pc = 0x355c44u;
    // NOP
label_355c48:
    // 0x355c48: 0x0  nop
    ctx->pc = 0x355c48u;
    // NOP
    // 0x355c4c: 0x0  nop
    ctx->pc = 0x355c4cu;
    // NOP
    // 0x355c50: 0x0  nop
    ctx->pc = 0x355c50u;
    // NOP
    // 0x355c54: 0x0  nop
    ctx->pc = 0x355c54u;
    // NOP
    // 0x355c58: 0x0  nop
    ctx->pc = 0x355c58u;
    // NOP
    // 0x355c5c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x355C5Cu;
    {
        const bool branch_taken_0x355c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c5c) {
            ctx->pc = 0x355C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355c48;
        }
    }
    ctx->pc = 0x355C64u;
    // 0x355c64: 0x0  nop
    ctx->pc = 0x355c64u;
    // NOP
label_355c68:
    // 0x355c68: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x355C68u;
    SET_GPR_U32(ctx, 31, 0x355C70u);
    ctx->pc = 0x355C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C68u;
    // 0x355c6c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355C68u, 0x355C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C70u;
label_355c70:
    // 0x355c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x355c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355c80: 0x3e00008  jr          $ra
    ctx->pc = 0x355C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C80u;
        // 0x355c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355C88u;
}
