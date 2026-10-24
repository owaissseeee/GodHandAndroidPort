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

// Function: func_00384980
// Address: 0x384980 - 0x3849f8
void func_00384980_0x384980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384980_0x384980");
#endif

    switch (ctx->pc) {
        case 0x3849bcu: goto label_3849bc;
        case 0x3849d8u: goto label_3849d8;
        case 0x3849e8u: goto label_3849e8;
        default: break;
    }

    ctx->pc = 0x384980u;

    // 0x384980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384988: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x384988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x38498c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x384990: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x384990u;
    {
        const bool branch_taken_0x384990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384990) {
            ctx->pc = 0x384994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384990u;
            // 0x384994: 0x8ca20064  lw          $v0, 0x64($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3849ACu;
            goto label_3849ac;
        }
    }
    ctx->pc = 0x384998u;
    // 0x384998: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x384998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x38499c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38499Cu;
    {
        const bool branch_taken_0x38499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38499c) {
            ctx->pc = 0x3849A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38499Cu;
            // 0x3849a0: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3849C4u;
            goto label_3849c4;
        }
    }
    ctx->pc = 0x3849A4u;
    // 0x3849a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3849A4u;
    {
        const bool branch_taken_0x3849a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849a4) {
            ctx->pc = 0x3849D0u;
            goto label_3849d0;
        }
    }
    ctx->pc = 0x3849ACu;
label_3849ac:
    // 0x3849ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3849ACu;
    {
        const bool branch_taken_0x3849ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849ac) {
            ctx->pc = 0x3849B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3849ACu;
            // 0x3849b0: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3849C4u;
            goto label_3849c4;
        }
    }
    ctx->pc = 0x3849B4u;
    // 0x3849b4: 0xc0e127e  jal         func_3849F8
    ctx->pc = 0x3849B4u;
    SET_GPR_U32(ctx, 31, 0x3849BCu);
    ctx->pc = 0x3849B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849B4u;
    // 0x3849b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3849F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3849F8u, 0x3849B4u, 0x3849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849BCu;
label_3849bc:
    // 0x3849bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3849BCu;
    {
        const bool branch_taken_0x3849bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3849C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849BCu;
        // 0x3849c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849bc) {
            ctx->pc = 0x3849ECu;
            goto label_3849ec;
        }
    }
    ctx->pc = 0x3849C4u;
label_3849c4:
    // 0x3849c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3849c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3849c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3849C8u;
    {
        const bool branch_taken_0x3849c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3849c8) {
            ctx->pc = 0x3849E0u;
            goto label_3849e0;
        }
    }
    ctx->pc = 0x3849D0u;
label_3849d0:
    // 0x3849d0: 0xc0e127e  jal         func_3849F8
    ctx->pc = 0x3849D0u;
    SET_GPR_U32(ctx, 31, 0x3849D8u);
    ctx->pc = 0x3849D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849D0u;
    // 0x3849d4: 0x90a60004  lbu         $a2, 0x4($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3849F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3849F8u, 0x3849D0u, 0x3849D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849D8u;
label_3849d8:
    // 0x3849d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3849D8u;
    {
        const bool branch_taken_0x3849d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3849DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D8u;
        // 0x3849dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849d8) {
            ctx->pc = 0x3849ECu;
            goto label_3849ec;
        }
    }
    ctx->pc = 0x3849E0u;
label_3849e0:
    // 0x3849e0: 0xc0e127e  jal         func_3849F8
    ctx->pc = 0x3849E0u;
    SET_GPR_U32(ctx, 31, 0x3849E8u);
    ctx->pc = 0x3849E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849E0u;
    // 0x3849e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3849F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3849F8u, 0x3849E0u, 0x3849E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849E8u;
label_3849e8:
    // 0x3849e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3849e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3849ec:
    // 0x3849ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3849ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3849F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849ECu;
        // 0x3849f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3849ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3849F4u;
    // 0x3849f4: 0x0  nop
    ctx->pc = 0x3849f4u;
    // NOP
    ctx->pc = 0x3849f8u;
}
