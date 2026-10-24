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

// Function: GetObjSingleton_191CE8
// Address: 0x191ce8 - 0x191d38
void GetObjSingleton_191CE8_0x191ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSingleton_191CE8_0x191ce8");
#endif

    switch (ctx->pc) {
        case 0x191d0cu: goto label_191d0c;
        case 0x191d24u: goto label_191d24;
        default: break;
    }

    ctx->pc = 0x191ce8u;

    // 0x191ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191cec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x191cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191cf4: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BF8u));
    // 0x191cf8: 0x24705bf8  addiu       $s0, $v1, 0x5BF8
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23544));
    // 0x191cfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191CFCu;
    {
        const bool branch_taken_0x191cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CFCu;
        // 0x191d00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cfc) {
            ctx->pc = 0x191D24u;
            goto label_191d24;
        }
    }
    ctx->pc = 0x191D04u;
    // 0x191d04: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x191D04u;
    SET_GPR_U32(ctx, 31, 0x191D0Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x191D04u, 0x191D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D0Cu;
label_191d0c:
    // 0x191d0c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x191d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x191d10: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x191d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x191d14: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
    // 0x191d18: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x191d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x191d1c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x191D1Cu;
    SET_GPR_U32(ctx, 31, 0x191D24u);
    ctx->pc = 0x191D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D1Cu;
    // 0x191d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x191D1Cu, 0x191D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D24u;
label_191d24:
    // 0x191d24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x191d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191d2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191d30: 0x3e00008  jr          $ra
    ctx->pc = 0x191D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D30u;
        // 0x191d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191D38u;
}
