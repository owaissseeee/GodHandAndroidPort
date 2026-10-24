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

// Function: SFD_GetTrHn
// Address: 0x35a1e0 - 0x35a260
void SFD_GetTrHn_0x35a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_GetTrHn_0x35a1e0");
#endif

    switch (ctx->pc) {
        case 0x35a204u: goto label_35a204;
        case 0x35a240u: goto label_35a240;
        default: break;
    }

    ctx->pc = 0x35a1e0u;

    // 0x35a1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a1f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a1f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a1f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35a1fc: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35A1FCu;
    SET_GPR_U32(ctx, 31, 0x35A204u);
    ctx->pc = 0x35A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1FCu;
    // 0x35a200: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35A1FCu, 0x35A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A204u;
label_35a204:
    // 0x35a204: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35a204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35a208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a20c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35A210u;
    {
        const bool branch_taken_0x35a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A210u;
        // 0x35a214: 0x34a50117  ori         $a1, $a1, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a210) {
            ctx->pc = 0x35A238u;
            goto label_35a238;
        }
    }
    ctx->pc = 0x35A218u;
    // 0x35a218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a21c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a22c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35A22Cu;
    ctx->pc = 0x35A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A22Cu;
    // 0x35a230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35A22Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A234u;
    // 0x35a234: 0x0  nop
    ctx->pc = 0x35a234u;
    // NOP
label_35a238:
    // 0x35a238: 0xc0d6898  jal         func_35A260
    ctx->pc = 0x35A238u;
    SET_GPR_U32(ctx, 31, 0x35A240u);
    ctx->pc = 0x35A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A238u;
    // 0x35a23c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A260u, 0x35A238u, 0x35A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A240u;
label_35a240:
    // 0x35a240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a24c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a250: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a254: 0x3e00008  jr          $ra
    ctx->pc = 0x35A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A254u;
        // 0x35a258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A25Cu;
    // 0x35a25c: 0x0  nop
    ctx->pc = 0x35a25cu;
    // NOP
    ctx->pc = 0x35a260u;
}
