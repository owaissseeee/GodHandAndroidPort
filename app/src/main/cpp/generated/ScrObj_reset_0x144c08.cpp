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

// Function: ScrObj_reset
// Address: 0x144c08 - 0x144c90
void ScrObj_reset_0x144c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrObj_reset_0x144c08");
#endif

    switch (ctx->pc) {
        case 0x144c28u: goto label_144c28;
        case 0x144c30u: goto label_144c30;
        case 0x144c3cu: goto label_144c3c;
        case 0x144c58u: goto label_144c58;
        case 0x144c60u: goto label_144c60;
        default: break;
    }

    ctx->pc = 0x144c08u;

    // 0x144c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144c0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x144c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x144c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x144c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x144c18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x144c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x144c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144c20: 0xc051324  jal         func_144C90
    ctx->pc = 0x144C20u;
    SET_GPR_U32(ctx, 31, 0x144C28u);
    ctx->pc = 0x144C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C20u;
    // 0x144c24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x144C20u, 0x144C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C28u;
label_144c28:
    // 0x144c28: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x144c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x144c2c: 0x2322018  mult        $a0, $s1, $s2
    ctx->pc = 0x144c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_144c30:
    // 0x144c30: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x144c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x144c34: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x144C34u;
    SET_GPR_U32(ctx, 31, 0x144C3Cu);
    ctx->pc = 0x144C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C34u;
    // 0x144c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x144C34u, 0x144C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C3Cu;
label_144c3c:
    // 0x144c3c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x144c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x144c40: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x144c40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144c44: 0x2e230005  sltiu       $v1, $s1, 0x5
    ctx->pc = 0x144c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144c48: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144C48u;
    {
        const bool branch_taken_0x144c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C48u;
        // 0x144c4c: 0x2322018  mult        $a0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c48) {
            ctx->pc = 0x144C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144c30;
        }
    }
    ctx->pc = 0x144C50u;
    // 0x144c50: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x144C50u;
    SET_GPR_U32(ctx, 31, 0x144C58u);
    ctx->pc = 0x144C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C50u;
    // 0x144c54: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x144C50u, 0x144C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C58u;
label_144c58:
    // 0x144c58: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x144C58u;
    SET_GPR_U32(ctx, 31, 0x144C60u);
    ctx->pc = 0x144C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C58u;
    // 0x144c5c: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x144C58u, 0x144C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C60u;
label_144c60:
    // 0x144c60: 0xa600041e  sh          $zero, 0x41E($s0)
    ctx->pc = 0x144c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1054), (uint16_t)GPR_U32(ctx, 0));
    // 0x144c64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x144c68: 0xa6000420  sh          $zero, 0x420($s0)
    ctx->pc = 0x144c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x144c6c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x144c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x144c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144c74: 0x9443d70c  lhu         $v1, -0x28F4($v0)
    ctx->pc = 0x144c74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3BD70Cu));
    // 0x144c78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x144c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144c7c: 0xa60304d0  sh          $v1, 0x4D0($s0)
    ctx->pc = 0x144c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1232), (uint16_t)GPR_U32(ctx, 3));
    // 0x144c80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x144c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144c88: 0x3e00008  jr          $ra
    ctx->pc = 0x144C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C88u;
        // 0x144c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C90u;
}
