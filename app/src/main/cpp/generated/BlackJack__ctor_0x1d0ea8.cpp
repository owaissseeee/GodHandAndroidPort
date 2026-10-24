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

// Function: BlackJack__ctor
// Address: 0x1d0ea8 - 0x1d0fd8
void BlackJack__ctor_0x1d0ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack__ctor_0x1d0ea8");
#endif

    switch (ctx->pc) {
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0ed8u: goto label_1d0ed8;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f68u: goto label_1d0f68;
        case 0x1d0f90u: goto label_1d0f90;
        default: break;
    }

    ctx->pc = 0x1d0ea8u;

    // 0x1d0ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0eac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d0eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0eb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d0eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0ebc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d0ec0: 0x24120033  addiu       $s2, $zero, 0x33
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1d0ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ec8: 0xc075360  jal         func_1D4D80
    ctx->pc = 0x1D0EC8u;
    SET_GPR_U32(ctx, 31, 0x1D0ED0u);
    ctx->pc = 0x1D0ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EC8u;
    // 0x1d0ecc: 0x26301634  addiu       $s0, $s1, 0x1634 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D80u, 0x1D0EC8u, 0x1D0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED0u;
label_1d0ed0:
    // 0x1d0ed0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0ed4: 0x0  nop
    ctx->pc = 0x1d0ed4u;
    // NOP
label_1d0ed8:
    // 0x1d0ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0edc: 0xc07431e  jal         func_1D0C78
    ctx->pc = 0x1D0EDCu;
    SET_GPR_U32(ctx, 31, 0x1D0EE4u);
    ctx->pc = 0x1D0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EDCu;
    // 0x1d0ee0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C78u, 0x1D0EDCu, 0x1D0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EE4u;
label_1d0ee4:
    // 0x1d0ee4: 0x0  nop
    ctx->pc = 0x1d0ee4u;
    // NOP
    // 0x1d0ee8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0EE8u;
    {
        const bool branch_taken_0x1d0ee8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EE8u;
        // 0x1d0eec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ee8) {
            ctx->pc = 0x1D0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed8;
        }
    }
    ctx->pc = 0x1D0EF0u;
    // 0x1d0ef0: 0xae201800  sw          $zero, 0x1800($s1)
    ctx->pc = 0x1d0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6144), GPR_U32(ctx, 0));
    // 0x1d0ef4: 0x262417e8  addiu       $a0, $s1, 0x17E8
    ctx->pc = 0x1d0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6120));
    // 0x1d0ef8: 0xae201804  sw          $zero, 0x1804($s1)
    ctx->pc = 0x1d0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6148), GPR_U32(ctx, 0));
    // 0x1d0efc: 0x26251822  addiu       $a1, $s1, 0x1822
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6178));
    // 0x1d0f00: 0xae201808  sw          $zero, 0x1808($s1)
    ctx->pc = 0x1d0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 0));
    // 0x1d0f04: 0x2626182c  addiu       $a2, $s1, 0x182C
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6188));
    // 0x1d0f08: 0xae20181c  sw          $zero, 0x181C($s1)
    ctx->pc = 0x1d0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6172), GPR_U32(ctx, 0));
    // 0x1d0f0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0f10: 0xae201814  sw          $zero, 0x1814($s1)
    ctx->pc = 0x1d0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6164), GPR_U32(ctx, 0));
    // 0x1d0f14: 0x262217e4  addiu       $v0, $s1, 0x17E4
    ctx->pc = 0x1d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6116));
    // 0x1d0f18: 0xae201818  sw          $zero, 0x1818($s1)
    ctx->pc = 0x1d0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6168), GPR_U32(ctx, 0));
    // 0x1d0f1c: 0x0  nop
    ctx->pc = 0x1d0f1cu;
    // NOP
label_1d0f20:
    // 0x1d0f20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d0f24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d0f28: 0x0  nop
    ctx->pc = 0x1d0f28u;
    // NOP
    // 0x1d0f2c: 0x0  nop
    ctx->pc = 0x1d0f2cu;
    // NOP
    // 0x1d0f30: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0F30u;
    {
        const bool branch_taken_0x1d0f30 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F30u;
        // 0x1d0f34: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f30) {
            ctx->pc = 0x1D0F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f20;
        }
    }
    ctx->pc = 0x1D0F38u;
    // 0x1d0f38: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d0f3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0f40:
    // 0x1d0f40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d0f44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d0f48: 0x0  nop
    ctx->pc = 0x1d0f48u;
    // NOP
    // 0x1d0f4c: 0x0  nop
    ctx->pc = 0x1d0f4cu;
    // NOP
    // 0x1d0f50: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0F50u;
    {
        const bool branch_taken_0x1d0f50 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F50u;
        // 0x1d0f54: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f50) {
            ctx->pc = 0x1D0F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f40;
        }
    }
    ctx->pc = 0x1D0F58u;
    // 0x1d0f58: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d0f5c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1d0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d0f60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0f64: 0x0  nop
    ctx->pc = 0x1d0f64u;
    // NOP
label_1d0f68:
    // 0x1d0f68: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1d0f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0f6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d0f70: 0x0  nop
    ctx->pc = 0x1d0f70u;
    // NOP
    // 0x1d0f74: 0x0  nop
    ctx->pc = 0x1d0f74u;
    // NOP
    // 0x1d0f78: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0F78u;
    {
        const bool branch_taken_0x1d0f78 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F78u;
        // 0x1d0f7c: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f78) {
            ctx->pc = 0x1D0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f68;
        }
    }
    ctx->pc = 0x1D0F80u;
    // 0x1d0f80: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d0f84: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d0f88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0f8c: 0x0  nop
    ctx->pc = 0x1d0f8cu;
    // NOP
label_1d0f90:
    // 0x1d0f90: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1d0f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0f94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d0f98: 0x0  nop
    ctx->pc = 0x1d0f98u;
    // NOP
    // 0x1d0f9c: 0x0  nop
    ctx->pc = 0x1d0f9cu;
    // NOP
    // 0x1d0fa0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0FA0u;
    {
        const bool branch_taken_0x1d0fa0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FA0u;
        // 0x1d0fa4: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fa0) {
            ctx->pc = 0x1D0F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f90;
        }
    }
    ctx->pc = 0x1D0FA8u;
    // 0x1d0fa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d0fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fac: 0xa2201820  sb          $zero, 0x1820($s1)
    ctx->pc = 0x1d0facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6176), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0fb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d0fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0fb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0fbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d0fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FC4u;
        // 0x1d0fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0FCCu;
    // 0x1d0fcc: 0x0  nop
    ctx->pc = 0x1d0fccu;
    // NOP
    // 0x1d0fd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0fd4: 0x0  nop
    ctx->pc = 0x1d0fd4u;
    // NOP
    ctx->pc = 0x1d0fd8u;
}
