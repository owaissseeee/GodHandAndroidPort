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

// Function: func_00334698
// Address: 0x334698 - 0x334738
void func_00334698_0x334698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334698_0x334698");
#endif

    switch (ctx->pc) {
        case 0x3346c8u: goto label_3346c8;
        case 0x3346dcu: goto label_3346dc;
        case 0x3346e4u: goto label_3346e4;
        case 0x3346f0u: goto label_3346f0;
        case 0x334704u: goto label_334704;
        default: break;
    }

    ctx->pc = 0x334698u;

    // 0x334698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33469c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33469cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3346a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3346a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3346a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3346a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3346a8: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3346A8u;
    {
        const bool branch_taken_0x3346a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346A8u;
        // 0x3346ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346a8) {
            ctx->pc = 0x334720u;
            goto label_334720;
        }
    }
    ctx->pc = 0x3346B0u;
    // 0x3346b0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3346b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3346b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3346b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3346b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3346B8u;
    {
        const bool branch_taken_0x3346b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3346b8) {
            ctx->pc = 0x3346BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3346B8u;
            // 0x3346bc: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3346CCu;
            goto label_3346cc;
        }
    }
    ctx->pc = 0x3346C0u;
    // 0x3346c0: 0xc0cd266  jal         func_334998
    ctx->pc = 0x3346C0u;
    SET_GPR_U32(ctx, 31, 0x3346C8u);
    ctx->pc = 0x334998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334998u, 0x3346C0u, 0x3346C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346C8u;
label_3346c8:
    // 0x3346c8: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x3346c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3346cc:
    // 0x3346cc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3346CCu;
    {
        const bool branch_taken_0x3346cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3346cc) {
            ctx->pc = 0x3346D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3346CCu;
            // 0x3346d0: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334708u;
            goto label_334708;
        }
    }
    ctx->pc = 0x3346D4u;
    // 0x3346d4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3346D4u;
    SET_GPR_U32(ctx, 31, 0x3346DCu);
    ctx->pc = 0x3346D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346D4u;
    // 0x3346d8: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3346D4u, 0x3346DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346DCu;
label_3346dc:
    // 0x3346dc: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x3346DCu;
    SET_GPR_U32(ctx, 31, 0x3346E4u);
    ctx->pc = 0x3346E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346DCu;
    // 0x3346e0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x3346DCu, 0x3346E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346E4u;
label_3346e4:
    // 0x3346e4: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x3346e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x3346e8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3346E8u;
    SET_GPR_U32(ctx, 31, 0x3346F0u);
    ctx->pc = 0x3346ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346E8u;
    // 0x3346ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3346E8u, 0x3346F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346F0u;
label_3346f0:
    // 0x3346f0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3346f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3346f4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3346F4u;
    {
        const bool branch_taken_0x3346f4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3346F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346F4u;
        // 0x3346f8: 0x24844948  addiu       $a0, $a0, 0x4948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346f4) {
            ctx->pc = 0x334704u;
            goto label_334704;
        }
    }
    ctx->pc = 0x3346FCu;
    // 0x3346fc: 0xc0c9814  jal         func_326050
    ctx->pc = 0x3346FCu;
    SET_GPR_U32(ctx, 31, 0x334704u);
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x3346FCu, 0x334704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334704u;
label_334704:
    // 0x334704: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x334704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_334708:
    // 0x334708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33470c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33470cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334718: 0x80cd140  j           func_334500
    ctx->pc = 0x334718u;
    ctx->pc = 0x33471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334718u;
    // 0x33471c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334500u, 0x334718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x334720u;
label_334720:
    // 0x334720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33472c: 0x3e00008  jr          $ra
    ctx->pc = 0x33472Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33472Cu;
        // 0x334730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33472Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334734u;
    // 0x334734: 0x0  nop
    ctx->pc = 0x334734u;
    // NOP
    ctx->pc = 0x334738u;
}
