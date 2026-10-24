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

// Function: func_003555A8
// Address: 0x3555a8 - 0x355630
void func_003555A8_0x3555a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003555A8_0x3555a8");
#endif

    switch (ctx->pc) {
        case 0x3555c0u: goto label_3555c0;
        case 0x3555e0u: goto label_3555e0;
        case 0x35561cu: goto label_35561c;
        default: break;
    }

    ctx->pc = 0x3555a8u;

    // 0x3555a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3555a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3555ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3555acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3555b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3555b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3555b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3555b8: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x3555B8u;
    SET_GPR_U32(ctx, 31, 0x3555C0u);
    ctx->pc = 0x3555BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555B8u;
    // 0x3555bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x3555B8u, 0x3555C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555C0u;
label_3555c0:
    // 0x3555c0: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x3555c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x3555c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3555c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555c8: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x3555cc: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3555CCu;
    {
        const bool branch_taken_0x3555cc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3555D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555CCu;
        // 0x3555d0: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555cc) {
            ctx->pc = 0x35560Cu;
            goto label_35560c;
        }
    }
    ctx->pc = 0x3555D4u;
    // 0x3555d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3555D4u;
    {
        const bool branch_taken_0x3555d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3555D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555D4u;
        // 0x3555d8: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555d4) {
            ctx->pc = 0x3555F0u;
            goto label_3555f0;
        }
    }
    ctx->pc = 0x3555DCu;
    // 0x3555dc: 0x0  nop
    ctx->pc = 0x3555dcu;
    // NOP
label_3555e0:
    // 0x3555e0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3555e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3555e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3555E4u;
    {
        const bool branch_taken_0x3555e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3555E4u;
        // 0x3555e8: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3555e4) {
            ctx->pc = 0x35560Cu;
            goto label_35560c;
        }
    }
    ctx->pc = 0x3555ECu;
    // 0x3555ec: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3555ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_3555f0:
    // 0x3555f0: 0x0  nop
    ctx->pc = 0x3555f0u;
    // NOP
    // 0x3555f4: 0x0  nop
    ctx->pc = 0x3555f4u;
    // NOP
    // 0x3555f8: 0x0  nop
    ctx->pc = 0x3555f8u;
    // NOP
    // 0x3555fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3555FCu;
    {
        const bool branch_taken_0x3555fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3555fc) {
            ctx->pc = 0x355600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3555FCu;
            // 0x355600: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3555E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3555e0;
        }
    }
    ctx->pc = 0x355604u;
    // 0x355604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x355608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35560c:
    // 0x35560c: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x35560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x355610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x355610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355614: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x355614u;
    SET_GPR_U32(ctx, 31, 0x35561Cu);
    ctx->pc = 0x355618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355614u;
    // 0x355618: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x355614u, 0x35561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35561Cu;
label_35561c:
    // 0x35561c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355624: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x355624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355628: 0x3e00008  jr          $ra
    ctx->pc = 0x355628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355628u;
        // 0x35562c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355630u;
}
