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

// Function: func_002D0B88
// Address: 0x2d0b88 - 0x2d0c10
void func_002D0B88_0x2d0b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D0B88_0x2d0b88");
#endif

    switch (ctx->pc) {
        case 0x2d0ba8u: goto label_2d0ba8;
        default: break;
    }

    ctx->pc = 0x2d0b88u;

    // 0x2d0b88: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d0b8c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2d0b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d0b90: 0x24423138  addiu       $v0, $v0, 0x3138
    ctx->pc = 0x2d0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12600));
    // 0x2d0b94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d0b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b9c: 0x24650420  addiu       $a1, $v1, 0x420
    ctx->pc = 0x2d0b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
    // 0x2d0ba0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d0ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3C3138u));
    // 0x2d0ba4: 0x0  nop
    ctx->pc = 0x2d0ba4u;
    // NOP
label_2d0ba8:
    // 0x2d0ba8: 0x50470001  beql        $v0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D0BA8u;
    {
        const bool branch_taken_0x2d0ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2d0ba8) {
            ctx->pc = 0x2D0BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BA8u;
            // 0x2d0bac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0BB0u;
            goto label_2d0bb0;
        }
    }
    ctx->pc = 0x2D0BB0u;
label_2d0bb0:
    // 0x2d0bb0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2d0bb4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2d0bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d0bb8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0BB8u;
    {
        const bool branch_taken_0x2d0bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bb8) {
            ctx->pc = 0x2D0BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BB8u;
            // 0x2d0bbc: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0ba8;
        }
    }
    ctx->pc = 0x2D0BC0u;
    // 0x2d0bc0: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0BC0u;
    {
        const bool branch_taken_0x2d0bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BC0u;
        // 0x2d0bc4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bc0) {
            ctx->pc = 0x2D0C08u;
            goto label_2d0c08;
        }
    }
    ctx->pc = 0x2D0BC8u;
    // 0x2d0bc8: 0x72202  srl         $a0, $a3, 8
    ctx->pc = 0x2d0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2d0bcc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d0bd0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d0bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d0bd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0bd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d0bdc: 0xa3282b  sltu        $a1, $a1, $v1
    ctx->pc = 0x2d0bdcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d0be0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0be4: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x2d0be4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d0be8: 0x24c33120  addiu       $v1, $a2, 0x3120
    ctx->pc = 0x2d0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12576));
    // 0x2d0bec: 0xa4c73120  sh          $a3, 0x3120($a2)
    ctx->pc = 0x2d0becu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12576), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d0bf0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d0bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bf4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2d0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2d0bf8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d0bfc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d0c00: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2d0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2d0c04: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2d0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2d0c08:
    // 0x2d0c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C08u;
        // 0x2d0c0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0C10u;
}
