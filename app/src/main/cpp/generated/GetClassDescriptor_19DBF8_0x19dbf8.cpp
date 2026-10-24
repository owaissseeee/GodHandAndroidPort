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

// Function: GetClassDescriptor_19DBF8
// Address: 0x19dbf8 - 0x19dc48
void GetClassDescriptor_19DBF8_0x19dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetClassDescriptor_19DBF8_0x19dbf8");
#endif

    switch (ctx->pc) {
        case 0x19dc1cu: goto label_19dc1c;
        case 0x19dc34u: goto label_19dc34;
        default: break;
    }

    ctx->pc = 0x19dbf8u;

    // 0x19dbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dbfc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19dc00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19dc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19dc04: 0x8c625e28  lw          $v0, 0x5E28($v1)
    ctx->pc = 0x19dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E28u));
    // 0x19dc08: 0x24705e28  addiu       $s0, $v1, 0x5E28
    ctx->pc = 0x19dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24104));
    // 0x19dc0c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DC0Cu;
    {
        const bool branch_taken_0x19dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc0c) {
            ctx->pc = 0x19DC34u;
            goto label_19dc34;
        }
    }
    ctx->pc = 0x19DC14u;
    // 0x19dc14: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19DC14u;
    SET_GPR_U32(ctx, 31, 0x19DC1Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19DC14u, 0x19DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC1Cu;
label_19dc1c:
    // 0x19dc1c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19dc20: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19dc24: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x19dc28: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19dc2c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19DC2Cu;
    SET_GPR_U32(ctx, 31, 0x19DC34u);
    ctx->pc = 0x19DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC2Cu;
    // 0x19dc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19DC2Cu, 0x19DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC34u;
label_19dc34:
    // 0x19dc34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19dc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19dc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc40: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC40u;
        // 0x19dc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC48u;
}
