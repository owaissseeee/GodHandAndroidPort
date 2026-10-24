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

// Function: func_00334BD8
// Address: 0x334bd8 - 0x334ca0
void func_00334BD8_0x334bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334BD8_0x334bd8");
#endif

    switch (ctx->pc) {
        case 0x334c50u: goto label_334c50;
        case 0x334c60u: goto label_334c60;
        case 0x334c70u: goto label_334c70;
        case 0x334c80u: goto label_334c80;
        default: break;
    }

    ctx->pc = 0x334bd8u;

    // 0x334bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334bdc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x334bdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334be4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x334BE4u;
    {
        const bool branch_taken_0x334be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BE4u;
        // 0x334be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334be4) {
            ctx->pc = 0x334C90u;
            goto label_334c90;
        }
    }
    ctx->pc = 0x334BECu;
    // 0x334bec: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x334becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x334bf0: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x334BF0u;
    {
        const bool branch_taken_0x334bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x334BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BF0u;
        // 0x334bf4: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bf0) {
            ctx->pc = 0x334C78u;
            goto label_334c78;
        }
    }
    ctx->pc = 0x334BF8u;
    // 0x334bf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x334BF8u;
    {
        const bool branch_taken_0x334bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BF8u;
        // 0x334bfc: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bf8) {
            ctx->pc = 0x334C28u;
            goto label_334c28;
        }
    }
    ctx->pc = 0x334C00u;
    // 0x334c00: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x334c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x334c04: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x334C04u;
    {
        const bool branch_taken_0x334c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C04u;
        // 0x334c08: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c04) {
            ctx->pc = 0x334C58u;
            goto label_334c58;
        }
    }
    ctx->pc = 0x334C0Cu;
    // 0x334c0c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x334C0Cu;
    {
        const bool branch_taken_0x334c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C0Cu;
        // 0x334c10: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c0c) {
            ctx->pc = 0x334C68u;
            goto label_334c68;
        }
    }
    ctx->pc = 0x334C14u;
    // 0x334c14: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x334C14u;
    {
        const bool branch_taken_0x334c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C14u;
        // 0x334c18: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c14) {
            ctx->pc = 0x334C48u;
            goto label_334c48;
        }
    }
    ctx->pc = 0x334C1Cu;
    // 0x334c1c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x334C1Cu;
    {
        const bool branch_taken_0x334c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C1Cu;
        // 0x334c20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c1c) {
            ctx->pc = 0x334C94u;
            goto label_334c94;
        }
    }
    ctx->pc = 0x334C24u;
    // 0x334c24: 0x0  nop
    ctx->pc = 0x334c24u;
    // NOP
label_334c28:
    // 0x334c28: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x334C28u;
    {
        const bool branch_taken_0x334c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C28u;
        // 0x334c2c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c28) {
            ctx->pc = 0x334C78u;
            goto label_334c78;
        }
    }
    ctx->pc = 0x334C30u;
    // 0x334c30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x334C30u;
    {
        const bool branch_taken_0x334c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C30u;
        // 0x334c34: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c30) {
            ctx->pc = 0x334C68u;
            goto label_334c68;
        }
    }
    ctx->pc = 0x334C38u;
    // 0x334c38: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x334C38u;
    {
        const bool branch_taken_0x334c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C38u;
        // 0x334c3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c38) {
            ctx->pc = 0x334C88u;
            goto label_334c88;
        }
    }
    ctx->pc = 0x334C40u;
    // 0x334c40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x334C40u;
    {
        const bool branch_taken_0x334c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C40u;
        // 0x334c44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c40) {
            ctx->pc = 0x334C94u;
            goto label_334c94;
        }
    }
    ctx->pc = 0x334C48u;
label_334c48:
    // 0x334c48: 0xc0cd2ce  jal         func_334B38
    ctx->pc = 0x334C48u;
    SET_GPR_U32(ctx, 31, 0x334C50u);
    ctx->pc = 0x334B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B38u, 0x334C48u, 0x334C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C50u;
label_334c50:
    // 0x334c50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x334C50u;
    {
        const bool branch_taken_0x334c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C50u;
        // 0x334c54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c50) {
            ctx->pc = 0x334C8Cu;
            goto label_334c8c;
        }
    }
    ctx->pc = 0x334C58u;
label_334c58:
    // 0x334c58: 0xc0cd2d6  jal         func_334B58
    ctx->pc = 0x334C58u;
    SET_GPR_U32(ctx, 31, 0x334C60u);
    ctx->pc = 0x334B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B58u, 0x334C58u, 0x334C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C60u;
label_334c60:
    // 0x334c60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x334C60u;
    {
        const bool branch_taken_0x334c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C60u;
        // 0x334c64: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c60) {
            ctx->pc = 0x334C8Cu;
            goto label_334c8c;
        }
    }
    ctx->pc = 0x334C68u;
label_334c68:
    // 0x334c68: 0xc0cd2e2  jal         func_334B88
    ctx->pc = 0x334C68u;
    SET_GPR_U32(ctx, 31, 0x334C70u);
    ctx->pc = 0x334B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B88u, 0x334C68u, 0x334C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C70u;
label_334c70:
    // 0x334c70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x334C70u;
    {
        const bool branch_taken_0x334c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C70u;
        // 0x334c74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c70) {
            ctx->pc = 0x334C8Cu;
            goto label_334c8c;
        }
    }
    ctx->pc = 0x334C78u;
label_334c78:
    // 0x334c78: 0xc0cd2ea  jal         func_334BA8
    ctx->pc = 0x334C78u;
    SET_GPR_U32(ctx, 31, 0x334C80u);
    ctx->pc = 0x334BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334BA8u, 0x334C78u, 0x334C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C80u;
label_334c80:
    // 0x334c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x334C80u;
    {
        const bool branch_taken_0x334c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C80u;
        // 0x334c84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c80) {
            ctx->pc = 0x334C8Cu;
            goto label_334c8c;
        }
    }
    ctx->pc = 0x334C88u;
label_334c88:
    // 0x334c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334c8c:
    // 0x334c8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x334c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_334c90:
    // 0x334c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334c94:
    // 0x334c94: 0x3e00008  jr          $ra
    ctx->pc = 0x334C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C94u;
        // 0x334c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334C9Cu;
    // 0x334c9c: 0x0  nop
    ctx->pc = 0x334c9cu;
    // NOP
    ctx->pc = 0x334ca0u;
}
