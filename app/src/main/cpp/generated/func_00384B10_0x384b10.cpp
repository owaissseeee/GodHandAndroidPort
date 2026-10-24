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

// Function: func_00384B10
// Address: 0x384b10 - 0x384b98
void func_00384B10_0x384b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384B10_0x384b10");
#endif

    switch (ctx->pc) {
        case 0x384b3cu: goto label_384b3c;
        case 0x384b5cu: goto label_384b5c;
        case 0x384b78u: goto label_384b78;
        case 0x384b88u: goto label_384b88;
        default: break;
    }

    ctx->pc = 0x384b10u;

    // 0x384b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384b18: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x384b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x384b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x384b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x384b20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x384B20u;
    {
        const bool branch_taken_0x384b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B20u;
        // 0x384b24: 0x24a600a4  addiu       $a2, $a1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b20) {
            ctx->pc = 0x384B44u;
            goto label_384b44;
        }
    }
    ctx->pc = 0x384B28u;
    // 0x384b28: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x384b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x384b2c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x384B2Cu;
    {
        const bool branch_taken_0x384b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384b2c) {
            ctx->pc = 0x384B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384B2Cu;
            // 0x384b30: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384B64u;
            goto label_384b64;
        }
    }
    ctx->pc = 0x384B34u;
    // 0x384b34: 0xc0e12f2  jal         func_384BC8
    ctx->pc = 0x384B34u;
    SET_GPR_U32(ctx, 31, 0x384B3Cu);
    ctx->pc = 0x384BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384BC8u, 0x384B34u, 0x384B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B3Cu;
label_384b3c:
    // 0x384b3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x384B3Cu;
    {
        const bool branch_taken_0x384b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B3Cu;
        // 0x384b40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b3c) {
            ctx->pc = 0x384B8Cu;
            goto label_384b8c;
        }
    }
    ctx->pc = 0x384B44u;
label_384b44:
    // 0x384b44: 0x24a30034  addiu       $v1, $a1, 0x34
    ctx->pc = 0x384b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x384b48: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x384b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x384b4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x384B4Cu;
    {
        const bool branch_taken_0x384b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384b4c) {
            ctx->pc = 0x384B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384B4Cu;
            // 0x384b50: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384B64u;
            goto label_384b64;
        }
    }
    ctx->pc = 0x384B54u;
    // 0x384b54: 0xc0e12e6  jal         func_384B98
    ctx->pc = 0x384B54u;
    SET_GPR_U32(ctx, 31, 0x384B5Cu);
    ctx->pc = 0x384B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384B54u;
    // 0x384b58: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B98u, 0x384B54u, 0x384B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B5Cu;
label_384b5c:
    // 0x384b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x384B5Cu;
    {
        const bool branch_taken_0x384b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B5Cu;
        // 0x384b60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b5c) {
            ctx->pc = 0x384B8Cu;
            goto label_384b8c;
        }
    }
    ctx->pc = 0x384B64u;
label_384b64:
    // 0x384b64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x384b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x384b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x384B68u;
    {
        const bool branch_taken_0x384b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384b68) {
            ctx->pc = 0x384B80u;
            goto label_384b80;
        }
    }
    ctx->pc = 0x384B70u;
    // 0x384b70: 0xc0e12f2  jal         func_384BC8
    ctx->pc = 0x384B70u;
    SET_GPR_U32(ctx, 31, 0x384B78u);
    ctx->pc = 0x384B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384B70u;
    // 0x384b74: 0x24a600cc  addiu       $a2, $a1, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384BC8u, 0x384B70u, 0x384B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B78u;
label_384b78:
    // 0x384b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x384B78u;
    {
        const bool branch_taken_0x384b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B78u;
        // 0x384b7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b78) {
            ctx->pc = 0x384B8Cu;
            goto label_384b8c;
        }
    }
    ctx->pc = 0x384B80u;
label_384b80:
    // 0x384b80: 0xc0e12e6  jal         func_384B98
    ctx->pc = 0x384B80u;
    SET_GPR_U32(ctx, 31, 0x384B88u);
    ctx->pc = 0x384B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384B80u;
    // 0x384b84: 0x8ca5008c  lw          $a1, 0x8C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B98u, 0x384B80u, 0x384B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B88u;
label_384b88:
    // 0x384b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384b8c:
    // 0x384b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x384B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B8Cu;
        // 0x384b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384B94u;
    // 0x384b94: 0x0  nop
    ctx->pc = 0x384b94u;
    // NOP
    ctx->pc = 0x384b98u;
}
