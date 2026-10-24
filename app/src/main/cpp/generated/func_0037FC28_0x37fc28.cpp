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

// Function: func_0037FC28
// Address: 0x37fc28 - 0x37fcc8
void func_0037FC28_0x37fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FC28_0x37fc28");
#endif

    switch (ctx->pc) {
        case 0x37fc44u: goto label_37fc44;
        case 0x37fc5cu: goto label_37fc5c;
        case 0x37fc6cu: goto label_37fc6c;
        case 0x37fc80u: goto label_37fc80;
        case 0x37fc90u: goto label_37fc90;
        case 0x37fcacu: goto label_37fcac;
        default: break;
    }

    ctx->pc = 0x37fc28u;

    // 0x37fc28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37fc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37fc30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37fc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fc34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fc3c: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x37FC3Cu;
    SET_GPR_U32(ctx, 31, 0x37FC44u);
    ctx->pc = 0x37FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC3Cu;
    // 0x37fc40: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x37FC3Cu, 0x37FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC44u;
label_37fc44:
    // 0x37fc44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37fc48: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x37FC48u;
    {
        const bool branch_taken_0x37fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC48u;
        // 0x37fc4c: 0x26300370  addiu       $s0, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc48) {
            ctx->pc = 0x37FCB4u;
            goto label_37fcb4;
        }
    }
    ctx->pc = 0x37FC50u;
    // 0x37fc50: 0x92250006  lbu         $a1, 0x6($s1)
    ctx->pc = 0x37fc50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37fc54: 0xc0c8e46  jal         func_323918
    ctx->pc = 0x37FC54u;
    SET_GPR_U32(ctx, 31, 0x37FC5Cu);
    ctx->pc = 0x37FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC54u;
    // 0x37fc58: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323918u, 0x37FC54u, 0x37FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC5Cu;
label_37fc5c:
    // 0x37fc5c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x37fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x37fc60: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x37fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x37fc64: 0xc0c722e  jal         func_31C8B8
    ctx->pc = 0x37FC64u;
    SET_GPR_U32(ctx, 31, 0x37FC6Cu);
    ctx->pc = 0x37FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC64u;
    // 0x37fc68: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8B8u, 0x37FC64u, 0x37FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC6Cu;
label_37fc6c:
    // 0x37fc6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37FC6Cu;
    {
        const bool branch_taken_0x37fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC6Cu;
        // 0x37fc70: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc6c) {
            ctx->pc = 0x37FC9Cu;
            goto label_37fc9c;
        }
    }
    ctx->pc = 0x37FC74u;
    // 0x37fc74: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x37fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x37fc78: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x37FC78u;
    SET_GPR_U32(ctx, 31, 0x37FC80u);
    ctx->pc = 0x37FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC78u;
    // 0x37fc7c: 0x2484c270  addiu       $a0, $a0, -0x3D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x37FC78u, 0x37FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC80u;
label_37fc80:
    // 0x37fc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fc84: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x37fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x37fc88: 0xc0c8e9c  jal         func_323A70
    ctx->pc = 0x37FC88u;
    SET_GPR_U32(ctx, 31, 0x37FC90u);
    ctx->pc = 0x37FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC88u;
    // 0x37fc8c: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A70u, 0x37FC88u, 0x37FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC90u;
label_37fc90:
    // 0x37fc90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37fc94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37FC94u;
    {
        const bool branch_taken_0x37fc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC94u;
        // 0x37fc98: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc94) {
            ctx->pc = 0x37FCB4u;
            goto label_37fcb4;
        }
    }
    ctx->pc = 0x37FC9Cu;
label_37fc9c:
    // 0x37fc9c: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x37fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x37fca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37fca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fca4: 0xc0c8fa0  jal         func_323E80
    ctx->pc = 0x37FCA4u;
    SET_GPR_U32(ctx, 31, 0x37FCACu);
    ctx->pc = 0x37FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCA4u;
    // 0x37fca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E80u, 0x37FCA4u, 0x37FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCACu;
label_37fcac:
    // 0x37fcac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37fcb0: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x37fcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_37fcb4:
    // 0x37fcb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37fcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37fcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fcbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FCC0u;
        // 0x37fcc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FCC8u;
}
