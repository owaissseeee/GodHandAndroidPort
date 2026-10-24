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

// Function: func_00381070
// Address: 0x381070 - 0x3810f8
void func_00381070_0x381070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381070_0x381070");
#endif

    switch (ctx->pc) {
        case 0x3810acu: goto label_3810ac;
        case 0x3810bcu: goto label_3810bc;
        case 0x3810d8u: goto label_3810d8;
        case 0x3810e8u: goto label_3810e8;
        default: break;
    }

    ctx->pc = 0x381070u;

    // 0x381070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x381074: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x381074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38107c: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x38107cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x381080: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x381080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x381084: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x381084u;
    {
        const bool branch_taken_0x381084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381084u;
        // 0x381088: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381084) {
            ctx->pc = 0x3810E8u;
            goto label_3810e8;
        }
    }
    ctx->pc = 0x38108Cu;
    // 0x38108c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x381090: 0x2442c4e0  addiu       $v0, $v0, -0x3B20
    ctx->pc = 0x381090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952160));
    // 0x381094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381098: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x381098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38109c: 0x800008  jr          $a0
    ctx->pc = 0x38109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3810A4u: goto label_3810a4;
            case 0x3810B4u: goto label_3810b4;
            case 0x3810C4u: goto label_3810c4;
            case 0x3810E0u: goto label_3810e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38109Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3810A4u;
label_3810a4:
    // 0x3810a4: 0xc0e043e  jal         func_3810F8
    ctx->pc = 0x3810A4u;
    SET_GPR_U32(ctx, 31, 0x3810ACu);
    ctx->pc = 0x3810A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810A4u;
    // 0x3810a8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3810F8u, 0x3810A4u, 0x3810ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810ACu;
label_3810ac:
    // 0x3810ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3810ACu;
    {
        const bool branch_taken_0x3810ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810ACu;
        // 0x3810b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810ac) {
            ctx->pc = 0x3810ECu;
            goto label_3810ec;
        }
    }
    ctx->pc = 0x3810B4u;
label_3810b4:
    // 0x3810b4: 0xc0e0454  jal         func_381150
    ctx->pc = 0x3810B4u;
    SET_GPR_U32(ctx, 31, 0x3810BCu);
    ctx->pc = 0x3810B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810B4u;
    // 0x3810b8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381150u, 0x3810B4u, 0x3810BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810BCu;
label_3810bc:
    // 0x3810bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3810BCu;
    {
        const bool branch_taken_0x3810bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810BCu;
        // 0x3810c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810bc) {
            ctx->pc = 0x3810ECu;
            goto label_3810ec;
        }
    }
    ctx->pc = 0x3810C4u;
label_3810c4:
    // 0x3810c4: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x3810c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3810c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3810c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3810cc: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x3810ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x3810d0: 0xc0e04ac  jal         func_3812B0
    ctx->pc = 0x3810D0u;
    SET_GPR_U32(ctx, 31, 0x3810D8u);
    ctx->pc = 0x3810D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810D0u;
    // 0x3810d4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3812B0u, 0x3810D0u, 0x3810D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810D8u;
label_3810d8:
    // 0x3810d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3810D8u;
    {
        const bool branch_taken_0x3810d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810D8u;
        // 0x3810dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810d8) {
            ctx->pc = 0x3810ECu;
            goto label_3810ec;
        }
    }
    ctx->pc = 0x3810E0u;
label_3810e0:
    // 0x3810e0: 0xc0e04f2  jal         func_3813C8
    ctx->pc = 0x3810E0u;
    SET_GPR_U32(ctx, 31, 0x3810E8u);
    ctx->pc = 0x3810E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810E0u;
    // 0x3810e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3813C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3813C8u, 0x3810E0u, 0x3810E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810E8u;
label_3810e8:
    // 0x3810e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3810e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3810ec:
    // 0x3810ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3810ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3810F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810ECu;
        // 0x3810f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3810ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3810F4u;
    // 0x3810f4: 0x0  nop
    ctx->pc = 0x3810f4u;
    // NOP
    ctx->pc = 0x3810f8u;
}
