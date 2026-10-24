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

// Function: cIDBaseScreen_init
// Address: 0x144b50 - 0x144c08
void cIDBaseScreen_init_0x144b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBaseScreen_init_0x144b50");
#endif

    switch (ctx->pc) {
        case 0x144b78u: goto label_144b78;
        case 0x144b8cu: goto label_144b8c;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bc0u: goto label_144bc0;
        case 0x144bd8u: goto label_144bd8;
        default: break;
    }

    ctx->pc = 0x144b50u;

    // 0x144b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144b54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x144b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x144b58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x144b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x144b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x144b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x144b64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x144b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144b6c: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x144b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x144b70: 0x2322018  mult        $a0, $s1, $s2
    ctx->pc = 0x144b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144b74: 0x0  nop
    ctx->pc = 0x144b74u;
    // NOP
label_144b78:
    // 0x144b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144b7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x144b80: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x144b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x144b84: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x144B84u;
    SET_GPR_U32(ctx, 31, 0x144B8Cu);
    ctx->pc = 0x144B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B84u;
    // 0x144b88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x144B84u, 0x144B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B8Cu;
label_144b8c:
    // 0x144b8c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x144b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x144b90: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x144b90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x144b94: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x144b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144b98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x144B98u;
    {
        const bool branch_taken_0x144b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B98u;
        // 0x144b9c: 0x2322018  mult        $a0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b98) {
            ctx->pc = 0x144B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144b78;
        }
    }
    ctx->pc = 0x144BA0u;
    // 0x144ba0: 0x26040430  addiu       $a0, $s0, 0x430
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x144ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144ba8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x144BA8u;
    SET_GPR_U32(ctx, 31, 0x144BB0u);
    ctx->pc = 0x144BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BA8u;
    // 0x144bac: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x144BA8u, 0x144BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BB0u;
label_144bb0:
    // 0x144bb0: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x144bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x144bb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144bb8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x144BB8u;
    SET_GPR_U32(ctx, 31, 0x144BC0u);
    ctx->pc = 0x144BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BB8u;
    // 0x144bbc: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x144BB8u, 0x144BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BC0u;
label_144bc0:
    // 0x144bc0: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x144bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x144bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bc8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x144bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x144bcc: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x144bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x144bd0: 0xc051324  jal         func_144C90
    ctx->pc = 0x144BD0u;
    SET_GPR_U32(ctx, 31, 0x144BD8u);
    ctx->pc = 0x144BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BD0u;
    // 0x144bd4: 0xae030364  sw          $v1, 0x364($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x144BD0u, 0x144BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BD8u;
label_144bd8:
    // 0x144bd8: 0xa600041e  sh          $zero, 0x41E($s0)
    ctx->pc = 0x144bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1054), (uint16_t)GPR_U32(ctx, 0));
    // 0x144bdc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x144bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x144be0: 0xa6000420  sh          $zero, 0x420($s0)
    ctx->pc = 0x144be0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x144be4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x144be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x144be8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144bec: 0x9443d70c  lhu         $v1, -0x28F4($v0)
    ctx->pc = 0x144becu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3BD70Cu));
    // 0x144bf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x144bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144bf4: 0xa60304d0  sh          $v1, 0x4D0($s0)
    ctx->pc = 0x144bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1232), (uint16_t)GPR_U32(ctx, 3));
    // 0x144bf8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x144bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144c00: 0x3e00008  jr          $ra
    ctx->pc = 0x144C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C00u;
        // 0x144c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C08u;
}
