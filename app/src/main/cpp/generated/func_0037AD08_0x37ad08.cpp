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

// Function: func_0037AD08
// Address: 0x37ad08 - 0x37ad88
void func_0037AD08_0x37ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AD08_0x37ad08");
#endif

    ctx->pc = 0x37ad08u;

    // 0x37ad08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x37ad0c: 0x90830026  lbu         $v1, 0x26($a0)
    ctx->pc = 0x37ad0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x37ad10: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x37ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x37ad14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AD14u;
    {
        const bool branch_taken_0x37ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD14u;
        // 0x37ad18: 0x80850026  lb          $a1, 0x26($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad14) {
            ctx->pc = 0x37AD24u;
            goto label_37ad24;
        }
    }
    ctx->pc = 0x37AD1Cu;
    // 0x37ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x37AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD1Cu;
        // 0x37ad20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AD24u;
label_37ad24:
    // 0x37ad24: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x37ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x37ad28: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x37ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x37ad2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37AD2Cu;
    {
        const bool branch_taken_0x37ad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD2Cu;
        // 0x37ad30: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad2c) {
            ctx->pc = 0x37AD38u;
            goto label_37ad38;
        }
    }
    ctx->pc = 0x37AD34u;
    // 0x37ad34: 0xa0820026  sb          $v0, 0x26($a0)
    ctx->pc = 0x37ad34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 2));
label_37ad38:
    // 0x37ad38: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x37ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x37ad3c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x37ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x37ad40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37AD40u;
    {
        const bool branch_taken_0x37ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ad40) {
            ctx->pc = 0x37AD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AD40u;
            // 0x37ad44: 0x80820026  lb          $v0, 0x26($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AD58u;
            goto label_37ad58;
        }
    }
    ctx->pc = 0x37AD48u;
    // 0x37ad48: 0x90820026  lbu         $v0, 0x26($a0)
    ctx->pc = 0x37ad48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x37ad4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ad50: 0xa0820026  sb          $v0, 0x26($a0)
    ctx->pc = 0x37ad50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ad54: 0x80820026  lb          $v0, 0x26($a0)
    ctx->pc = 0x37ad54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
label_37ad58:
    // 0x37ad58: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AD58u;
    {
        const bool branch_taken_0x37ad58 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x37ad58) {
            ctx->pc = 0x37AD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AD58u;
            // 0x37ad5c: 0x80820026  lb          $v0, 0x26($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AD6Cu;
            goto label_37ad6c;
        }
    }
    ctx->pc = 0x37AD60u;
    // 0x37ad60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x37ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37ad64: 0xa0820026  sb          $v0, 0x26($a0)
    ctx->pc = 0x37ad64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ad68: 0x80820026  lb          $v0, 0x26($a0)
    ctx->pc = 0x37ad68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
label_37ad6c:
    // 0x37ad6c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x37ad6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x37ad70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37AD70u;
    {
        const bool branch_taken_0x37ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ad70) {
            ctx->pc = 0x37AD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AD70u;
            // 0x37ad74: 0xa0800026  sb          $zero, 0x26($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AD78u;
            goto label_37ad78;
        }
    }
    ctx->pc = 0x37AD78u;
label_37ad78:
    // 0x37ad78: 0x80820026  lb          $v0, 0x26($a0)
    ctx->pc = 0x37ad78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x37ad7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x37ad7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x37ad80: 0x3e00008  jr          $ra
    ctx->pc = 0x37AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD80u;
        // 0x37ad84: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AD88u;
}
