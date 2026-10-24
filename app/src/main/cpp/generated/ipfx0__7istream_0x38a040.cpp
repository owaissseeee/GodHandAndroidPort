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

// Function: ipfx0__7istream
// Address: 0x38a040 - 0x38a0c0
void ipfx0__7istream_0x38a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipfx0__7istream_0x38a040");
#endif

    switch (ctx->pc) {
        case 0x38a080u: goto label_38a080;
        case 0x38a0a4u: goto label_38a0a4;
        default: break;
    }

    ctx->pc = 0x38a040u;

    // 0x38a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a050: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38a050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a054: 0x90a3001a  lbu         $v1, 0x1A($a1)
    ctx->pc = 0x38a054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x38a058: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A058u;
    {
        const bool branch_taken_0x38a058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A058u;
        // 0x38a05c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a058) {
            ctx->pc = 0x38A06Cu;
            goto label_38a06c;
        }
    }
    ctx->pc = 0x38A060u;
    // 0x38a060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a064: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38A064u;
    {
        const bool branch_taken_0x38a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A064u;
        // 0x38a068: 0xa0a3001a  sb          $v1, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a064) {
            ctx->pc = 0x38A0ACu;
            goto label_38a0ac;
        }
    }
    ctx->pc = 0x38A06Cu;
label_38a06c:
    // 0x38a06c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x38a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38a070: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A070u;
    {
        const bool branch_taken_0x38a070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a070) {
            ctx->pc = 0x38A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A070u;
            // 0x38a074: 0xdca20010  ld          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A088u;
            goto label_38a088;
        }
    }
    ctx->pc = 0x38A078u;
    // 0x38a078: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38A078u;
    SET_GPR_U32(ctx, 31, 0x38A080u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38A078u, 0x38A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A080u;
label_38a080:
    // 0x38a080: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38a080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a084: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x38a084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_38a088:
    // 0x38a088: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38a08c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38a090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38a090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38a094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A094u;
    {
        const bool branch_taken_0x38a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A094u;
        // 0x38a098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a094) {
            ctx->pc = 0x38A0ACu;
            goto label_38a0ac;
        }
    }
    ctx->pc = 0x38A09Cu;
    // 0x38a09c: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38A09Cu;
    SET_GPR_U32(ctx, 31, 0x38A0A4u);
    ctx->pc = 0x38A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A09Cu;
    // 0x38a0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38A09Cu, 0x38A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A0A4u;
label_38a0a4:
    // 0x38a0a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A0A4u;
    {
        const bool branch_taken_0x38a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0A4u;
        // 0x38a0a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a0a4) {
            ctx->pc = 0x38A0B0u;
            goto label_38a0b0;
        }
    }
    ctx->pc = 0x38A0ACu;
label_38a0ac:
    // 0x38a0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38a0b0:
    // 0x38a0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x38A0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0B4u;
        // 0x38a0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A0BCu;
    // 0x38a0bc: 0x0  nop
    ctx->pc = 0x38a0bcu;
    // NOP
    ctx->pc = 0x38a0c0u;
}
