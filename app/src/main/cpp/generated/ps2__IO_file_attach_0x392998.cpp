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

// Function: _IO_file_attach
// Address: 0x392998 - 0x392a30
void ps2__IO_file_attach_0x392998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_attach_0x392998");
#endif

    switch (ctx->pc) {
        case 0x392998u: goto label_392998;
        case 0x39299cu: goto label_39299c;
        case 0x3929a0u: goto label_3929a0;
        case 0x3929a4u: goto label_3929a4;
        case 0x3929a8u: goto label_3929a8;
        case 0x3929acu: goto label_3929ac;
        case 0x3929b0u: goto label_3929b0;
        case 0x3929b4u: goto label_3929b4;
        case 0x3929b8u: goto label_3929b8;
        case 0x3929bcu: goto label_3929bc;
        case 0x3929c0u: goto label_3929c0;
        case 0x3929c4u: goto label_3929c4;
        case 0x3929c8u: goto label_3929c8;
        case 0x3929ccu: goto label_3929cc;
        case 0x3929d0u: goto label_3929d0;
        case 0x3929d4u: goto label_3929d4;
        case 0x3929d8u: goto label_3929d8;
        case 0x3929dcu: goto label_3929dc;
        case 0x3929e0u: goto label_3929e0;
        case 0x3929e4u: goto label_3929e4;
        case 0x3929e8u: goto label_3929e8;
        case 0x3929ecu: goto label_3929ec;
        case 0x3929f0u: goto label_3929f0;
        case 0x3929f4u: goto label_3929f4;
        case 0x3929f8u: goto label_3929f8;
        case 0x3929fcu: goto label_3929fc;
        case 0x392a00u: goto label_392a00;
        case 0x392a04u: goto label_392a04;
        case 0x392a08u: goto label_392a08;
        case 0x392a0cu: goto label_392a0c;
        case 0x392a10u: goto label_392a10;
        case 0x392a14u: goto label_392a14;
        case 0x392a18u: goto label_392a18;
        case 0x392a1cu: goto label_392a1c;
        case 0x392a20u: goto label_392a20;
        case 0x392a24u: goto label_392a24;
        case 0x392a28u: goto label_392a28;
        case 0x392a2cu: goto label_392a2c;
        default: break;
    }

    ctx->pc = 0x392998u;

label_392998:
    // 0x392998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39299c:
    // 0x39299c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3929a0:
    // 0x3929a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3929a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3929a4:
    // 0x3929a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3929a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3929a8:
    // 0x3929a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3929a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3929ac:
    // 0x3929ac: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3929acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3929b0:
    // 0x3929b0: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
label_3929b4:
    if (ctx->pc == 0x3929B4u) {
        ctx->pc = 0x3929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929B0u;
        // 0x3929b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929B8u;
        goto label_3929b8;
    }
    ctx->pc = 0x3929B0u;
    {
        const bool branch_taken_0x3929b0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929B0u;
        // 0x3929b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929b0) {
            ctx->pc = 0x392A18u;
            goto label_392a18;
        }
    }
    ctx->pc = 0x3929B8u;
label_3929b8:
    // 0x3929b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3929b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3929bc:
    // 0x3929bc: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x3929bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_3929c0:
    // 0x3929c0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3929c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3929c4:
    // 0x3929c4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3929c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3929c8:
    // 0x3929c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3929c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3929cc:
    // 0x3929cc: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x3929ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
label_3929d0:
    // 0x3929d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3929d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3929d4:
    // 0x3929d4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x3929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3929d8:
    // 0x3929d8: 0xfe300040  sd          $s0, 0x40($s1)
    ctx->pc = 0x3929d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 16));
label_3929dc:
    // 0x3929dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3929dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3929e0:
    // 0x3929e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3929e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3929e4:
    // 0x3929e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3929e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3929e8:
    // 0x3929e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3929e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3929ec:
    // 0x3929ec: 0x40f809  jalr        $v0
label_3929f0:
    if (ctx->pc == 0x3929F0u) {
        ctx->pc = 0x3929F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929ECu;
        // 0x3929f0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929F4u;
        goto label_3929f4;
    }
    ctx->pc = 0x3929ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3929F4u);
        ctx->pc = 0x3929F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929ECu;
        // 0x3929f0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929ECu, 0x3929F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3929F4u;
label_3929f4:
    // 0x3929f4: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
label_3929f8:
    if (ctx->pc == 0x3929F8u) {
        ctx->pc = 0x3929F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929F4u;
        // 0x3929f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929FCu;
        goto label_3929fc;
    }
    ctx->pc = 0x3929F4u;
    {
        const bool branch_taken_0x3929f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3929f4) {
            ctx->pc = 0x3929F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3929F4u;
            // 0x3929f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392A18u;
            goto label_392a18;
        }
    }
    ctx->pc = 0x3929FCu;
label_3929fc:
    // 0x3929fc: 0xc0e93ee  jal         func_3A4FB8
label_392a00:
    if (ctx->pc == 0x392A00u) {
        ctx->pc = 0x392A04u;
        goto label_392a04;
    }
    ctx->pc = 0x3929FCu;
    SET_GPR_U32(ctx, 31, 0x392A04u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3929FCu, 0x392A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A04u;
label_392a04:
    // 0x392a04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x392a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_392a08:
    // 0x392a08: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x392a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_392a0c:
    // 0x392a0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_392a10:
    if (ctx->pc == 0x392A10u) {
        ctx->pc = 0x392A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A0Cu;
        // 0x392a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A14u;
        goto label_392a14;
    }
    ctx->pc = 0x392A0Cu;
    {
        const bool branch_taken_0x392a0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x392A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A0Cu;
        // 0x392a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a0c) {
            ctx->pc = 0x392A18u;
            goto label_392a18;
        }
    }
    ctx->pc = 0x392A14u;
label_392a14:
    // 0x392a14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x392a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392a18:
    // 0x392a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392a1c:
    // 0x392a1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_392a20:
    // 0x392a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392a24:
    // 0x392a24: 0x3e00008  jr          $ra
label_392a28:
    if (ctx->pc == 0x392A28u) {
        ctx->pc = 0x392A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A24u;
        // 0x392a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A2Cu;
        goto label_392a2c;
    }
    ctx->pc = 0x392A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A24u;
        // 0x392a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392A2Cu;
label_392a2c:
    // 0x392a2c: 0x0  nop
    ctx->pc = 0x392a2cu;
    // NOP
    ctx->pc = 0x392a30u;
}
