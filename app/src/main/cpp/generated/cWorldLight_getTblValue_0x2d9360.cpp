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

// Function: cWorldLight_getTblValue
// Address: 0x2d9360 - 0x2d93e8
void cWorldLight_getTblValue_0x2d9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_getTblValue_0x2d9360");
#endif

    switch (ctx->pc) {
        case 0x2d93c0u: goto label_2d93c0;
        default: break;
    }

    ctx->pc = 0x2d9360u;

    // 0x2d9360: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d9364: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d9364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d9368: 0x8c866130  lw          $a2, 0x6130($a0)
    ctx->pc = 0x2d9368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24880)));
    // 0x2d936c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D936Cu;
    {
        const bool branch_taken_0x2d936c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d936c) {
            ctx->pc = 0x2D937Cu;
            goto label_2d937c;
        }
    }
    ctx->pc = 0x2D9374u;
    // 0x2d9374: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9374u;
    {
        const bool branch_taken_0x2d9374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9374u;
        // 0x2d9378: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9374) {
            ctx->pc = 0x2D938Cu;
            goto label_2d938c;
        }
    }
    ctx->pc = 0x2D937Cu;
label_2d937c:
    // 0x2d937c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d937cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9384: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D938Cu;
label_2d938c:
    // 0x2d938c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9394: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2d9394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d9398: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d9398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d939c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d939cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d93a0: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D93A0u;
    {
        const bool branch_taken_0x2d93a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93A0u;
        // 0x2d93a4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93a0) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D93A8u;
    // 0x2d93a8: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x2d93a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2d93ac: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D93ACu;
    {
        const bool branch_taken_0x2d93ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93ACu;
        // 0x2d93b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93ac) {
            ctx->pc = 0x2D93C0u;
            goto label_2d93c0;
        }
    }
    ctx->pc = 0x2D93B4u;
    // 0x2d93b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D93B4u;
    {
        const bool branch_taken_0x2d93b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93B4u;
        // 0x2d93b8: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93b4) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D93BCu;
    // 0x2d93bc: 0x0  nop
    ctx->pc = 0x2d93bcu;
    // NOP
label_2d93c0:
    // 0x2d93c0: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2d93c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2d93c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D93C4u;
    {
        const bool branch_taken_0x2d93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93C4u;
        // 0x2d93c8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93c4) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D93CCu;
    // 0x2d93cc: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x2d93ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2d93d0: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D93D0u;
    {
        const bool branch_taken_0x2d93d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93D0u;
        // 0x2d93d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93d0) {
            ctx->pc = 0x2D93C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d93c0;
        }
    }
    ctx->pc = 0x2D93D8u;
    // 0x2d93d8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2d93d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d93dc:
    // 0x2d93dc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2d93dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d93e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D93E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D93E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D93E8u;
}
