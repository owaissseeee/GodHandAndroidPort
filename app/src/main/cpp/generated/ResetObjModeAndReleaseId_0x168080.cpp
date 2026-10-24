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

// Function: ResetObjModeAndReleaseId
// Address: 0x168080 - 0x1680d8
void ResetObjModeAndReleaseId_0x168080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjModeAndReleaseId_0x168080");
#endif

    switch (ctx->pc) {
        case 0x168094u: goto label_168094;
        case 0x1680acu: goto label_1680ac;
        case 0x1680c8u: goto label_1680c8;
        default: break;
    }

    ctx->pc = 0x168080u;

    // 0x168080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16808c: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x16808Cu;
    SET_GPR_U32(ctx, 31, 0x168094u);
    ctx->pc = 0x168090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16808Cu;
    // 0x168090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x16808Cu, 0x168094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168094u;
label_168094:
    // 0x168094: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x168094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x168098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16809c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16809Cu;
    {
        const bool branch_taken_0x16809c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16809c) {
            ctx->pc = 0x1680A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16809Cu;
            // 0x1680a0: 0xa2000090  sb          $zero, 0x90($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680A4u;
            goto label_1680a4;
        }
    }
    ctx->pc = 0x1680A4u;
label_1680a4:
    // 0x1680a4: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1680A4u;
    SET_GPR_U32(ctx, 31, 0x1680ACu);
    ctx->pc = 0x1680A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680A4u;
    // 0x1680a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1680A4u, 0x1680ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680ACu;
label_1680ac:
    // 0x1680ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1680acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1680b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1680b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680b4: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1680b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1680bc: 0xaca000b0  sw          $zero, 0xB0($a1)
    ctx->pc = 0x1680bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 0));
    // 0x1680c0: 0xc058564  jal         func_161590
    ctx->pc = 0x1680C0u;
    SET_GPR_U32(ctx, 31, 0x1680C8u);
    ctx->pc = 0x1680C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680C0u;
    // 0x1680c4: 0xaca000b4  sw          $zero, 0xB4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x1680C0u, 0x1680C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680C8u;
label_1680c8:
    // 0x1680c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1680c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1680cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1680ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1680d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1680D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680D0u;
        // 0x1680d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1680D8u;
}
