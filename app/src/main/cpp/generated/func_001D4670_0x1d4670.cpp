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

// Function: func_001D4670
// Address: 0x1d4670 - 0x1d4720
void func_001D4670_0x1d4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4670_0x1d4670");
#endif

    switch (ctx->pc) {
        case 0x1d4680u: goto label_1d4680;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d4700u: goto label_1d4700;
        default: break;
    }

    ctx->pc = 0x1d4670u;

    // 0x1d4670: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d4670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4674: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1d4678: 0x24c51638  addiu       $a1, $a2, 0x1638
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 5688));
    // 0x1d467c: 0x0  nop
    ctx->pc = 0x1d467cu;
    // NOP
label_1d4680:
    // 0x1d4680: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d4684: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x1d4684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1d4688: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d4688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1d468c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d4690: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d4694: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d4694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d4698: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1d469c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d46a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d46a4: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1d46a8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d46ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d46acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d46b0: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x1d46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1d46b4: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x1d46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x1d46b8: 0x8ca4fffc  lw          $a0, -0x4($a1)
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1d46bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d46bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d46c0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x1d46c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d46c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d46c8: 0x4e1ffed  bgez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D46C8u;
    {
        const bool branch_taken_0x1d46c8 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x1D46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46C8u;
        // 0x1d46cc: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46c8) {
            ctx->pc = 0x1D4680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4680;
        }
    }
    ctx->pc = 0x1D46D0u;
    // 0x1d46d0: 0x24c217e4  addiu       $v0, $a2, 0x17E4
    ctx->pc = 0x1d46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6116));
    // 0x1d46d4: 0x24c417e8  addiu       $a0, $a2, 0x17E8
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 6120));
    // 0x1d46d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d46dc: 0x0  nop
    ctx->pc = 0x1d46dcu;
    // NOP
label_1d46e0:
    // 0x1d46e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d46e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d46e8: 0x0  nop
    ctx->pc = 0x1d46e8u;
    // NOP
    // 0x1d46ec: 0x0  nop
    ctx->pc = 0x1d46ecu;
    // NOP
    // 0x1d46f0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D46F0u;
    {
        const bool branch_taken_0x1d46f0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46F0u;
        // 0x1d46f4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46f0) {
            ctx->pc = 0x1D46E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46e0;
        }
    }
    ctx->pc = 0x1D46F8u;
    // 0x1d46f8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d46fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4700:
    // 0x1d4700: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d4700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d4704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d4704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4708: 0x0  nop
    ctx->pc = 0x1d4708u;
    // NOP
    // 0x1d470c: 0x0  nop
    ctx->pc = 0x1d470cu;
    // NOP
    // 0x1d4710: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4710u;
    {
        const bool branch_taken_0x1d4710 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1D4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4710u;
        // 0x1d4714: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4710) {
            ctx->pc = 0x1D4700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4700;
        }
    }
    ctx->pc = 0x1D4718u;
    // 0x1d4718: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4720u;
}
