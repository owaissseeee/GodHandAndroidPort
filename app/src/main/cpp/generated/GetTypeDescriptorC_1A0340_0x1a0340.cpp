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

// Function: GetTypeDescriptorC_1A0340
// Address: 0x1a0340 - 0x1a0390
void GetTypeDescriptorC_1A0340_0x1a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDescriptorC_1A0340_0x1a0340");
#endif

    switch (ctx->pc) {
        case 0x1a0364u: goto label_1a0364;
        case 0x1a037cu: goto label_1a037c;
        default: break;
    }

    ctx->pc = 0x1a0340u;

    // 0x1a0340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0344: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a0348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a034c: 0x8c625ed8  lw          $v0, 0x5ED8($v1)
    ctx->pc = 0x1a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785ED8u));
    // 0x1a0350: 0x24705ed8  addiu       $s0, $v1, 0x5ED8
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24280));
    // 0x1a0354: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0354u;
    {
        const bool branch_taken_0x1a0354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0354u;
        // 0x1a0358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0354) {
            ctx->pc = 0x1A037Cu;
            goto label_1a037c;
        }
    }
    ctx->pc = 0x1A035Cu;
    // 0x1a035c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A035Cu;
    SET_GPR_U32(ctx, 31, 0x1A0364u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A035Cu, 0x1A0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0364u;
label_1a0364:
    // 0x1a0364: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a0364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a0368: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a036c: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x1a0370: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a0370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a0374: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A0374u;
    SET_GPR_U32(ctx, 31, 0x1A037Cu);
    ctx->pc = 0x1A0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0374u;
    // 0x1a0378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A0374u, 0x1A037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A037Cu;
label_1a037c:
    // 0x1a037c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a037cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0388: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0388u;
        // 0x1a038c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0390u;
}
