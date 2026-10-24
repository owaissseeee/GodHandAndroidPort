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

// Function: func_00380AE8
// Address: 0x380ae8 - 0x380b70
void func_00380AE8_0x380ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380AE8_0x380ae8");
#endif

    switch (ctx->pc) {
        case 0x380afcu: goto label_380afc;
        case 0x380b08u: goto label_380b08;
        case 0x380b1cu: goto label_380b1c;
        case 0x380b38u: goto label_380b38;
        case 0x380b54u: goto label_380b54;
        case 0x380b5cu: goto label_380b5c;
        default: break;
    }

    ctx->pc = 0x380ae8u;

    // 0x380ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380aec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380af4: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x380AF4u;
    SET_GPR_U32(ctx, 31, 0x380AFCu);
    ctx->pc = 0x380AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380AF4u;
    // 0x380af8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x380AF4u, 0x380AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380AFCu;
label_380afc:
    // 0x380afc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x380afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x380b00: 0xc0c7224  jal         func_31C890
    ctx->pc = 0x380B00u;
    SET_GPR_U32(ctx, 31, 0x380B08u);
    ctx->pc = 0x380B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B00u;
    // 0x380b04: 0x348431e4  ori         $a0, $a0, 0x31E4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12772);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C890u, 0x380B00u, 0x380B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B08u;
label_380b08:
    // 0x380b08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x380B08u;
    {
        const bool branch_taken_0x380b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B08u;
        // 0x380b0c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b08) {
            ctx->pc = 0x380B24u;
            goto label_380b24;
        }
    }
    ctx->pc = 0x380B10u;
    // 0x380b10: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x380b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x380b14: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x380B14u;
    SET_GPR_U32(ctx, 31, 0x380B1Cu);
    ctx->pc = 0x380B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B14u;
    // 0x380b18: 0x2484c470  addiu       $a0, $a0, -0x3B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x380B14u, 0x380B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B1Cu;
label_380b1c:
    // 0x380b1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x380B1Cu;
    {
        const bool branch_taken_0x380b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B1Cu;
        // 0x380b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b1c) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B24u;
label_380b24:
    // 0x380b24: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x380b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x380b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x380b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x380b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x380b30: 0xc0ca50e  jal         func_329438
    ctx->pc = 0x380B30u;
    SET_GPR_U32(ctx, 31, 0x380B38u);
    ctx->pc = 0x380B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B30u;
    // 0x380b34: 0x34c631e4  ori         $a2, $a2, 0x31E4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12772);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329438u, 0x380B30u, 0x380B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B38u;
label_380b38:
    // 0x380b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380B38u;
    {
        const bool branch_taken_0x380b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B38u;
        // 0x380b3c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b38) {
            ctx->pc = 0x380B48u;
            goto label_380b48;
        }
    }
    ctx->pc = 0x380B40u;
    // 0x380b40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x380B40u;
    {
        const bool branch_taken_0x380b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B40u;
        // 0x380b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b40) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B48u;
label_380b48:
    // 0x380b48: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x380b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x380b4c: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x380B4Cu;
    SET_GPR_U32(ctx, 31, 0x380B54u);
    ctx->pc = 0x380B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B4Cu;
    // 0x380b50: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x380B4Cu, 0x380B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B54u;
label_380b54:
    // 0x380b54: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x380B54u;
    SET_GPR_U32(ctx, 31, 0x380B5Cu);
    ctx->pc = 0x380B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B54u;
    // 0x380b58: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x380B54u, 0x380B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B5Cu;
label_380b5c:
    // 0x380b5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x380b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_380b60:
    // 0x380b60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x380b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380b68: 0x3e00008  jr          $ra
    ctx->pc = 0x380B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B68u;
        // 0x380b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380B70u;
}
