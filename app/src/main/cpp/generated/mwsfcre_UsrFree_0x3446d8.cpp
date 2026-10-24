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

// Function: mwsfcre_UsrFree
// Address: 0x3446d8 - 0x344710
void mwsfcre_UsrFree_0x3446d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_UsrFree_0x3446d8");
#endif

    switch (ctx->pc) {
        case 0x3446d8u: goto label_3446d8;
        case 0x3446dcu: goto label_3446dc;
        case 0x3446e0u: goto label_3446e0;
        case 0x3446e4u: goto label_3446e4;
        case 0x3446e8u: goto label_3446e8;
        case 0x3446ecu: goto label_3446ec;
        case 0x3446f0u: goto label_3446f0;
        case 0x3446f4u: goto label_3446f4;
        case 0x3446f8u: goto label_3446f8;
        case 0x3446fcu: goto label_3446fc;
        case 0x344700u: goto label_344700;
        case 0x344704u: goto label_344704;
        case 0x344708u: goto label_344708;
        case 0x34470cu: goto label_34470c;
        default: break;
    }

    ctx->pc = 0x3446d8u;

label_3446d8:
    // 0x3446d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3446d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3446dc:
    // 0x3446dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3446dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3446e0:
    // 0x3446e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3446e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3446e4:
    // 0x3446e4: 0xc0d14ac  jal         func_3452B0
label_3446e8:
    if (ctx->pc == 0x3446E8u) {
        ctx->pc = 0x3446E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446E4u;
        // 0x3446e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446ECu;
        goto label_3446ec;
    }
    ctx->pc = 0x3446E4u;
    SET_GPR_U32(ctx, 31, 0x3446ECu);
    ctx->pc = 0x3446E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446E4u;
    // 0x3446e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3446E4u, 0x3446ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446ECu;
label_3446ec:
    // 0x3446ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x3446ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3446f0:
    // 0x3446f0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x3446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_3446f4:
    // 0x3446f4: 0x60f809  jalr        $v1
label_3446f8:
    if (ctx->pc == 0x3446F8u) {
        ctx->pc = 0x3446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446F4u;
        // 0x3446f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446FCu;
        goto label_3446fc;
    }
    ctx->pc = 0x3446F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3446FCu);
        ctx->pc = 0x3446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446F4u;
        // 0x3446f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3446F4u, 0x3446FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3446FCu;
label_3446fc:
    // 0x3446fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3446fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344700:
    // 0x344700: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_344704:
    // 0x344704: 0x3e00008  jr          $ra
label_344708:
    if (ctx->pc == 0x344708u) {
        ctx->pc = 0x344708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344704u;
        // 0x344708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34470Cu;
        goto label_34470c;
    }
    ctx->pc = 0x344704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344704u;
        // 0x344708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34470Cu;
label_34470c:
    // 0x34470c: 0x0  nop
    ctx->pc = 0x34470cu;
    // NOP
    ctx->pc = 0x344710u;
}
