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

// Function: Forward349590_349578
// Address: 0x349578 - 0x349630
void Forward349590_349578_0x349578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward349590_349578_0x349578");
#endif

    switch (ctx->pc) {
        case 0x3495ccu: goto label_3495cc;
        case 0x3495ecu: goto label_3495ec;
        case 0x3495fcu: goto label_3495fc;
        default: break;
    }

    ctx->pc = 0x349578u;

    // 0x349578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34957c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349584: 0x80d2564  j           func_349590
    ctx->pc = 0x349584u;
    ctx->pc = 0x349588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349584u;
    // 0x349588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349590u;
    goto label_349590;
    ctx->pc = 0x34958Cu;
    // 0x34958c: 0x0  nop
    ctx->pc = 0x34958cu;
    // NOP
label_349590:
    // 0x349590: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x349590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x349594: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349598: 0x8c45c7dc  lw          $a1, -0x3824($v0)
    ctx->pc = 0x349598u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EC7DCu));
    // 0x34959c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34959cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3495a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3495a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3495a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3495a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3495a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3495ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3495acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495b0: 0x14a30019  bne         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3495B0u;
    {
        const bool branch_taken_0x3495b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3495B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495B0u;
        // 0x3495b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495b0) {
            ctx->pc = 0x349618u;
            goto label_349618;
        }
    }
    ctx->pc = 0x3495B8u;
    // 0x3495b8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3495B8u;
    {
        const bool branch_taken_0x3495b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3495b8) {
            ctx->pc = 0x3495D8u;
            goto label_3495d8;
        }
    }
    ctx->pc = 0x3495C0u;
    // 0x3495c0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3495c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3495c4: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3495C4u;
    SET_GPR_U32(ctx, 31, 0x3495CCu);
    ctx->pc = 0x3495C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495C4u;
    // 0x3495c8: 0x24849378  addiu       $a0, $a0, -0x6C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3495C4u, 0x3495CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495CCu;
label_3495cc:
    // 0x3495cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3495CCu;
    {
        const bool branch_taken_0x3495cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3495D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495CCu;
        // 0x3495d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495cc) {
            ctx->pc = 0x349618u;
            goto label_349618;
        }
    }
    ctx->pc = 0x3495D4u;
    // 0x3495d4: 0x0  nop
    ctx->pc = 0x3495d4u;
    // NOP
label_3495d8:
    // 0x3495d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3495d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3495dc: 0x1605000e  bne         $s0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3495DCu;
    {
        const bool branch_taken_0x3495dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x3495E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495DCu;
        // 0x3495e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495dc) {
            ctx->pc = 0x349618u;
            goto label_349618;
        }
    }
    ctx->pc = 0x3495E4u;
    // 0x3495e4: 0xc0d25c8  jal         func_349720
    ctx->pc = 0x3495E4u;
    SET_GPR_U32(ctx, 31, 0x3495ECu);
    ctx->pc = 0x349720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349720u, 0x3495E4u, 0x3495ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495ECu;
label_3495ec:
    // 0x3495ec: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3495ECu;
    {
        const bool branch_taken_0x3495ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3495ec) {
            ctx->pc = 0x3495F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3495ECu;
            // 0x3495f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349618u;
            goto label_349618;
        }
    }
    ctx->pc = 0x3495F4u;
    // 0x3495f4: 0xc0d25de  jal         func_349778
    ctx->pc = 0x3495F4u;
    SET_GPR_U32(ctx, 31, 0x3495FCu);
    ctx->pc = 0x349778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349778u, 0x3495F4u, 0x3495FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495FCu;
label_3495fc:
    // 0x3495fc: 0x1050fff3  beq         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3495FCu;
    {
        const bool branch_taken_0x3495fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x349600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495FCu;
        // 0x349600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495fc) {
            ctx->pc = 0x3495CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3495cc;
        }
    }
    ctx->pc = 0x349604u;
    // 0x349604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34960c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349610: 0x80d258c  j           func_349630
    ctx->pc = 0x349610u;
    ctx->pc = 0x349614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349610u;
    // 0x349614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349630u, 0x349610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349618u;
label_349618:
    // 0x349618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34961c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34961cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349624: 0x3e00008  jr          $ra
    ctx->pc = 0x349624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349624u;
        // 0x349628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34962Cu;
    // 0x34962c: 0x0  nop
    ctx->pc = 0x34962cu;
    // NOP
    ctx->pc = 0x349630u;
}
