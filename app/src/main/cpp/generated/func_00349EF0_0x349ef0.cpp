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

// Function: func_00349EF0
// Address: 0x349ef0 - 0x349f80
void func_00349EF0_0x349ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349EF0_0x349ef0");
#endif

    switch (ctx->pc) {
        case 0x349ef0u: goto label_349ef0;
        case 0x349ef4u: goto label_349ef4;
        case 0x349ef8u: goto label_349ef8;
        case 0x349efcu: goto label_349efc;
        case 0x349f00u: goto label_349f00;
        case 0x349f04u: goto label_349f04;
        case 0x349f08u: goto label_349f08;
        case 0x349f0cu: goto label_349f0c;
        case 0x349f10u: goto label_349f10;
        case 0x349f14u: goto label_349f14;
        case 0x349f18u: goto label_349f18;
        case 0x349f1cu: goto label_349f1c;
        case 0x349f20u: goto label_349f20;
        case 0x349f24u: goto label_349f24;
        case 0x349f28u: goto label_349f28;
        case 0x349f2cu: goto label_349f2c;
        case 0x349f30u: goto label_349f30;
        case 0x349f34u: goto label_349f34;
        case 0x349f38u: goto label_349f38;
        case 0x349f3cu: goto label_349f3c;
        case 0x349f40u: goto label_349f40;
        case 0x349f44u: goto label_349f44;
        case 0x349f48u: goto label_349f48;
        case 0x349f4cu: goto label_349f4c;
        case 0x349f50u: goto label_349f50;
        case 0x349f54u: goto label_349f54;
        case 0x349f58u: goto label_349f58;
        case 0x349f5cu: goto label_349f5c;
        case 0x349f60u: goto label_349f60;
        case 0x349f64u: goto label_349f64;
        case 0x349f68u: goto label_349f68;
        case 0x349f6cu: goto label_349f6c;
        case 0x349f70u: goto label_349f70;
        case 0x349f74u: goto label_349f74;
        case 0x349f78u: goto label_349f78;
        case 0x349f7cu: goto label_349f7c;
        default: break;
    }

    ctx->pc = 0x349ef0u;

label_349ef0:
    // 0x349ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_349ef4:
    // 0x349ef4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x349ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_349ef8:
    // 0x349ef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x349ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349efc:
    // 0x349efc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_349f00:
    // 0x349f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349f04:
    // 0x349f04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_349f08:
    // 0x349f08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_349f0c:
    // 0x349f0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x349f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_349f10:
    // 0x349f10: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x349f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_349f14:
    // 0x349f14: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x349f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_349f18:
    // 0x349f18: 0xc0d2a6e  jal         func_34A9B8
label_349f1c:
    if (ctx->pc == 0x349F1Cu) {
        ctx->pc = 0x349F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F18u;
        // 0x349f1c: 0x8e112004  lw          $s1, 0x2004($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F20u;
        goto label_349f20;
    }
    ctx->pc = 0x349F18u;
    SET_GPR_U32(ctx, 31, 0x349F20u);
    ctx->pc = 0x349F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F18u;
    // 0x349f1c: 0x8e112004  lw          $s1, 0x2004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A9B8u, 0x349F18u, 0x349F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F20u;
label_349f20:
    // 0x349f20: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x349f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_349f24:
    // 0x349f24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_349f28:
    if (ctx->pc == 0x349F28u) {
        ctx->pc = 0x349F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F24u;
        // 0x349f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F2Cu;
        goto label_349f2c;
    }
    ctx->pc = 0x349F24u;
    {
        const bool branch_taken_0x349f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F24u;
        // 0x349f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f24) {
            ctx->pc = 0x349F64u;
            goto label_349f64;
        }
    }
    ctx->pc = 0x349F2Cu;
label_349f2c:
    // 0x349f2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x349f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_349f30:
    // 0x349f30: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x349f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_349f34:
    // 0x349f34: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x349f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_349f38:
    // 0x349f38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x349f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349f3c:
    // 0x349f3c: 0x60f809  jalr        $v1
label_349f40:
    if (ctx->pc == 0x349F40u) {
        ctx->pc = 0x349F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F3Cu;
        // 0x349f40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F44u;
        goto label_349f44;
    }
    ctx->pc = 0x349F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x349F44u);
        ctx->pc = 0x349F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F3Cu;
        // 0x349f40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F3Cu, 0x349F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349F44u;
label_349f44:
    // 0x349f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349f48:
    // 0x349f48: 0xc0d2a80  jal         func_34AA00
label_349f4c:
    if (ctx->pc == 0x349F4Cu) {
        ctx->pc = 0x349F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F48u;
        // 0x349f4c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F50u;
        goto label_349f50;
    }
    ctx->pc = 0x349F48u;
    SET_GPR_U32(ctx, 31, 0x349F50u);
    ctx->pc = 0x349F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F48u;
    // 0x349f4c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AA00u, 0x349F48u, 0x349F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F50u;
label_349f50:
    // 0x349f50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_349f54:
    if (ctx->pc == 0x349F54u) {
        ctx->pc = 0x349F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F50u;
        // 0x349f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F58u;
        goto label_349f58;
    }
    ctx->pc = 0x349F50u;
    {
        const bool branch_taken_0x349f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F50u;
        // 0x349f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f50) {
            ctx->pc = 0x349F64u;
            goto label_349f64;
        }
    }
    ctx->pc = 0x349F58u;
label_349f58:
    // 0x349f58: 0xc0d2a88  jal         func_34AA20
label_349f5c:
    if (ctx->pc == 0x349F5Cu) {
        ctx->pc = 0x349F60u;
        goto label_349f60;
    }
    ctx->pc = 0x349F58u;
    SET_GPR_U32(ctx, 31, 0x349F60u);
    ctx->pc = 0x34AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AA20u, 0x349F58u, 0x349F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F60u;
label_349f60:
    // 0x349f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349f64:
    // 0x349f64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_349f68:
    // 0x349f68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_349f6c:
    // 0x349f6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_349f70:
    // 0x349f70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x349f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_349f74:
    // 0x349f74: 0x3e00008  jr          $ra
label_349f78:
    if (ctx->pc == 0x349F78u) {
        ctx->pc = 0x349F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F74u;
        // 0x349f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349F7Cu;
        goto label_349f7c;
    }
    ctx->pc = 0x349F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F74u;
        // 0x349f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F7Cu;
label_349f7c:
    // 0x349f7c: 0x0  nop
    ctx->pc = 0x349f7cu;
    // NOP
    ctx->pc = 0x349f80u;
}
