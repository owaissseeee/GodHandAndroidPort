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

// Function: func_00336B00
// Address: 0x336b00 - 0x336ba8
void func_00336B00_0x336b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336B00_0x336b00");
#endif

    switch (ctx->pc) {
        case 0x336b78u: goto label_336b78;
        case 0x336b88u: goto label_336b88;
        default: break;
    }

    ctx->pc = 0x336b00u;

    // 0x336b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336b04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x336b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336b0c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x336B0Cu;
    {
        const bool branch_taken_0x336b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B0Cu;
        // 0x336b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b0c) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336B14u;
    // 0x336b14: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x336b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x336b18: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x336B18u;
    {
        const bool branch_taken_0x336b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x336B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B18u;
        // 0x336b1c: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b18) {
            ctx->pc = 0x336B80u;
            goto label_336b80;
        }
    }
    ctx->pc = 0x336B20u;
    // 0x336b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x336B20u;
    {
        const bool branch_taken_0x336b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B20u;
        // 0x336b24: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b20) {
            ctx->pc = 0x336B40u;
            goto label_336b40;
        }
    }
    ctx->pc = 0x336B28u;
    // 0x336b28: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x336b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x336b2c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x336B2Cu;
    {
        const bool branch_taken_0x336b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x336B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B2Cu;
        // 0x336b30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b2c) {
            ctx->pc = 0x336B70u;
            goto label_336b70;
        }
    }
    ctx->pc = 0x336B34u;
    // 0x336b34: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x336B34u;
    {
        const bool branch_taken_0x336b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B34u;
        // 0x336b38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b34) {
            ctx->pc = 0x336B9Cu;
            goto label_336b9c;
        }
    }
    ctx->pc = 0x336B3Cu;
    // 0x336b3c: 0x0  nop
    ctx->pc = 0x336b3cu;
    // NOP
label_336b40:
    // 0x336b40: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x336B40u;
    {
        const bool branch_taken_0x336b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x336B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B40u;
        // 0x336b44: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b40) {
            ctx->pc = 0x336B80u;
            goto label_336b80;
        }
    }
    ctx->pc = 0x336B48u;
    // 0x336b48: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x336B48u;
    {
        const bool branch_taken_0x336b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B48u;
        // 0x336b4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b48) {
            ctx->pc = 0x336B98u;
            goto label_336b98;
        }
    }
    ctx->pc = 0x336B50u;
    // 0x336b50: 0x2402012b  addiu       $v0, $zero, 0x12B
    ctx->pc = 0x336b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x336b54: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x336B54u;
    {
        const bool branch_taken_0x336b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x336B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B54u;
        // 0x336b58: 0x24020191  addiu       $v0, $zero, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b54) {
            ctx->pc = 0x336B94u;
            goto label_336b94;
        }
    }
    ctx->pc = 0x336B5Cu;
    // 0x336b5c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x336B5Cu;
    {
        const bool branch_taken_0x336b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x336B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B5Cu;
        // 0x336b60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b5c) {
            ctx->pc = 0x336B90u;
            goto label_336b90;
        }
    }
    ctx->pc = 0x336B64u;
    // 0x336b64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x336B64u;
    {
        const bool branch_taken_0x336b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B64u;
        // 0x336b68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b64) {
            ctx->pc = 0x336B9Cu;
            goto label_336b9c;
        }
    }
    ctx->pc = 0x336B6Cu;
    // 0x336b6c: 0x0  nop
    ctx->pc = 0x336b6cu;
    // NOP
label_336b70:
    // 0x336b70: 0xc0cdab0  jal         func_336AC0
    ctx->pc = 0x336B70u;
    SET_GPR_U32(ctx, 31, 0x336B78u);
    ctx->pc = 0x336AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AC0u, 0x336B70u, 0x336B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B78u;
label_336b78:
    // 0x336b78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336B78u;
    {
        const bool branch_taken_0x336b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B78u;
        // 0x336b7c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b78) {
            ctx->pc = 0x336B94u;
            goto label_336b94;
        }
    }
    ctx->pc = 0x336B80u;
label_336b80:
    // 0x336b80: 0xc0cd944  jal         func_336510
    ctx->pc = 0x336B80u;
    SET_GPR_U32(ctx, 31, 0x336B88u);
    ctx->pc = 0x336510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336510u, 0x336B80u, 0x336B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B88u;
label_336b88:
    // 0x336b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336B88u;
    {
        const bool branch_taken_0x336b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B88u;
        // 0x336b8c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b88) {
            ctx->pc = 0x336B94u;
            goto label_336b94;
        }
    }
    ctx->pc = 0x336B90u;
label_336b90:
    // 0x336b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336b94:
    // 0x336b94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x336b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_336b98:
    // 0x336b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336b9c:
    // 0x336b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x336B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B9Cu;
        // 0x336ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336BA4u;
    // 0x336ba4: 0x0  nop
    ctx->pc = 0x336ba4u;
    // NOP
    ctx->pc = 0x336ba8u;
}
