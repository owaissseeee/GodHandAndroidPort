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

// Function: func_0038A7E0
// Address: 0x38a7e0 - 0x38a838
void func_0038A7E0_0x38a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A7E0_0x38a7e0");
#endif

    switch (ctx->pc) {
        case 0x38a804u: goto label_38a804;
        case 0x38a820u: goto label_38a820;
        default: break;
    }

    ctx->pc = 0x38a7e0u;

    // 0x38a7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a7e4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x38a7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a7ec: 0x8c626718  lw          $v0, 0x6718($v1)
    ctx->pc = 0x38a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786718u));
    // 0x38a7f0: 0x24706718  addiu       $s0, $v1, 0x6718
    ctx->pc = 0x38a7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26392));
    // 0x38a7f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38A7F4u;
    {
        const bool branch_taken_0x38a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7F4u;
        // 0x38a7f8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a7f4) {
            ctx->pc = 0x38A820u;
            goto label_38a820;
        }
    }
    ctx->pc = 0x38A7FCu;
    // 0x38a7fc: 0xc0e3036  jal         func_38C0D8
    ctx->pc = 0x38A7FCu;
    SET_GPR_U32(ctx, 31, 0x38A804u);
    ctx->pc = 0x38C0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0D8u, 0x38A7FCu, 0x38A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A804u;
label_38a804:
    // 0x38a804: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38a804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38a808: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x38a808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x38a80c: 0x24a5d210  addiu       $a1, $a1, -0x2DF0
    ctx->pc = 0x38a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
    // 0x38a810: 0x24c6d208  addiu       $a2, $a2, -0x2DF8
    ctx->pc = 0x38a810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955528));
    // 0x38a814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a818: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x38A818u;
    SET_GPR_U32(ctx, 31, 0x38A820u);
    ctx->pc = 0x38A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A818u;
    // 0x38a81c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x38A818u, 0x38A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A820u;
label_38a820:
    // 0x38a820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A82Cu;
        // 0x38a830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A834u;
    // 0x38a834: 0x0  nop
    ctx->pc = 0x38a834u;
    // NOP
    ctx->pc = 0x38a838u;
}
