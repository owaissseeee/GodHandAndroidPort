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

// Function: func_003451D8
// Address: 0x3451d8 - 0x345250
void func_003451D8_0x3451d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003451D8_0x3451d8");
#endif

    switch (ctx->pc) {
        case 0x3451f8u: goto label_3451f8;
        case 0x345224u: goto label_345224;
        default: break;
    }

    ctx->pc = 0x3451d8u;

    // 0x3451d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3451d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3451dc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x3451dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3451e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3451e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3451e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3451e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3451e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3451e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3451ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3451ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3451f0: 0xc0d7646  jal         func_35D918
    ctx->pc = 0x3451F0u;
    SET_GPR_U32(ctx, 31, 0x3451F8u);
    ctx->pc = 0x3451F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451F0u;
    // 0x3451f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D918u, 0x3451F0u, 0x3451F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451F8u;
label_3451f8:
    // 0x3451f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3451f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3451fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3451fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345200: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x345200u;
    {
        const bool branch_taken_0x345200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x345204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345200u;
        // 0x345204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345200) {
            ctx->pc = 0x345238u;
            goto label_345238;
        }
    }
    ctx->pc = 0x345208u;
    // 0x345208: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x345208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34520c: 0x5604000b  bnel        $s0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x34520Cu;
    {
        const bool branch_taken_0x34520c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x34520c) {
            ctx->pc = 0x345210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34520Cu;
            // 0x345210: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34523Cu;
            goto label_34523c;
        }
    }
    ctx->pc = 0x345214u;
    // 0x345214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345218: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x345218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34521c: 0xc0d7948  jal         func_35E520
    ctx->pc = 0x34521Cu;
    SET_GPR_U32(ctx, 31, 0x345224u);
    ctx->pc = 0x345220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34521Cu;
    // 0x345220: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E520u, 0x34521Cu, 0x345224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345224u;
label_345224:
    // 0x345224: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345224u;
    {
        const bool branch_taken_0x345224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x345228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345224u;
        // 0x345228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345224) {
            ctx->pc = 0x345238u;
            goto label_345238;
        }
    }
    ctx->pc = 0x34522Cu;
    // 0x34522c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x345230: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x345230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x345234: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x345234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_345238:
    // 0x345238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x345238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34523c:
    // 0x34523c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34523cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345244: 0x3e00008  jr          $ra
    ctx->pc = 0x345244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345244u;
        // 0x345248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34524Cu;
    // 0x34524c: 0x0  nop
    ctx->pc = 0x34524cu;
    // NOP
    ctx->pc = 0x345250u;
}
