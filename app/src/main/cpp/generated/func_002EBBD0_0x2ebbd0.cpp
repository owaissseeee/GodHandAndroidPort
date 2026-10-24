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

// Function: func_002EBBD0
// Address: 0x2ebbd0 - 0x2ebc28
void func_002EBBD0_0x2ebbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EBBD0_0x2ebbd0");
#endif

    switch (ctx->pc) {
        case 0x2ebbf4u: goto label_2ebbf4;
        case 0x2ebc0cu: goto label_2ebc0c;
        default: break;
    }

    ctx->pc = 0x2ebbd0u;

    // 0x2ebbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebbd4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ebbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ebbd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ebbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ebbdc: 0x8c626448  lw          $v0, 0x6448($v1)
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786448u));
    // 0x2ebbe0: 0x24706448  addiu       $s0, $v1, 0x6448
    ctx->pc = 0x2ebbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25672));
    // 0x2ebbe4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBBE4u;
    {
        const bool branch_taken_0x2ebbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBE4u;
        // 0x2ebbe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebbe4) {
            ctx->pc = 0x2EBC0Cu;
            goto label_2ebc0c;
        }
    }
    ctx->pc = 0x2EBBECu;
    // 0x2ebbec: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2EBBECu;
    SET_GPR_U32(ctx, 31, 0x2EBBF4u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2EBBECu, 0x2EBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBF4u;
label_2ebbf4:
    // 0x2ebbf4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ebbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ebbf8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2ebbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2ebbfc: 0x24a5e8b0  addiu       $a1, $a1, -0x1750
    ctx->pc = 0x2ebbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961328));
    // 0x2ebc00: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2ebc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2ebc04: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2EBC04u;
    SET_GPR_U32(ctx, 31, 0x2EBC0Cu);
    ctx->pc = 0x2EBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC04u;
    // 0x2ebc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2EBC04u, 0x2EBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC0Cu;
label_2ebc0c:
    // 0x2ebc0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ebc0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ebc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC18u;
        // 0x2ebc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC20u;
    // 0x2ebc20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ebc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ebc24: 0x0  nop
    ctx->pc = 0x2ebc24u;
    // NOP
    ctx->pc = 0x2ebc28u;
}
