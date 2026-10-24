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

// Function: func_00308BC0
// Address: 0x308bc0 - 0x308d40
void func_00308BC0_0x308bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00308BC0_0x308bc0");
#endif

    switch (ctx->pc) {
        case 0x308be8u: goto label_308be8;
        case 0x308c00u: goto label_308c00;
        case 0x308c18u: goto label_308c18;
        case 0x308c68u: goto label_308c68;
        default: break;
    }

    ctx->pc = 0x308bc0u;

    // 0x308bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308bc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x308bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x308bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x308bcc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x308bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x308bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x308bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x308bd8: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x308bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308be0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308be4: 0x0  nop
    ctx->pc = 0x308be4u;
    // NOP
label_308be8:
    // 0x308be8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x308bec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308bf0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x308BF0u;
    {
        const bool branch_taken_0x308bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BF0u;
        // 0x308bf4: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bf0) {
            ctx->pc = 0x308C30u;
            goto label_308c30;
        }
    }
    ctx->pc = 0x308BF8u;
    // 0x308bf8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x308BF8u;
    SET_GPR_U32(ctx, 31, 0x308C00u);
    ctx->pc = 0x308BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BF8u;
    // 0x308bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x308BF8u, 0x308C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C00u;
label_308c00:
    // 0x308c00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x308c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c04: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x308C04u;
    {
        const bool branch_taken_0x308c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c04) {
            ctx->pc = 0x308C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C04u;
            // 0x308c08: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C34u;
            goto label_308c34;
        }
    }
    ctx->pc = 0x308C0Cu;
    // 0x308c0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x308c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x308c10: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x308c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x308c14: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x308c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_308c18:
    // 0x308c18: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x308c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x308c1c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x308c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x308c20: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x308c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x308c24: 0x0  nop
    ctx->pc = 0x308c24u;
    // NOP
    // 0x308c28: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x308C28u;
    {
        const bool branch_taken_0x308c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308c28) {
            ctx->pc = 0x308C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C28u;
            // 0x308c2c: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308c18;
        }
    }
    ctx->pc = 0x308C30u;
label_308c30:
    // 0x308c30: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x308c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308c34:
    // 0x308c34: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x308c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x308c38: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x308C38u;
    {
        const bool branch_taken_0x308c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C38u;
        // 0x308c3c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c38) {
            ctx->pc = 0x308BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308be8;
        }
    }
    ctx->pc = 0x308C40u;
    // 0x308c40: 0x8e434c58  lw          $v1, 0x4C58($s2)
    ctx->pc = 0x308c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
    // 0x308c44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308c48: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x308c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308c4c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x308c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308c50: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x308C50u;
    {
        const bool branch_taken_0x308c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C50u;
        // 0x308c54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c50) {
            ctx->pc = 0x308D2Cu;
            goto label_308d2c;
        }
    }
    ctx->pc = 0x308C58u;
    // 0x308c58: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x308c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c5c: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x308c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x308c60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308c64: 0x0  nop
    ctx->pc = 0x308c64u;
    // NOP
label_308c68:
    // 0x308c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c6c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x308c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c70: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x308c70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x308c74: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x308c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x308c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308C78u;
    {
        const bool branch_taken_0x308c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C78u;
        // 0x308c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c78) {
            ctx->pc = 0x308C88u;
            goto label_308c88;
        }
    }
    ctx->pc = 0x308C80u;
    // 0x308c80: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x308c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x308c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308c88:
    // 0x308c88: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308c8c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x308C8Cu;
    {
        const bool branch_taken_0x308c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308c8c) {
            ctx->pc = 0x308C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C8Cu;
            // 0x308c90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CF8u;
            goto label_308cf8;
        }
    }
    ctx->pc = 0x308C94u;
    // 0x308c94: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x308c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x308c98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308C98u;
    {
        const bool branch_taken_0x308c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C98u;
        // 0x308c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c98) {
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308CA0u;
    // 0x308ca0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308ca8:
    // 0x308ca8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308cac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x308CACu;
    {
        const bool branch_taken_0x308cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308cac) {
            ctx->pc = 0x308CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308CACu;
            // 0x308cb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CF8u;
            goto label_308cf8;
        }
    }
    ctx->pc = 0x308CB4u;
    // 0x308cb4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308CB8u;
    {
        const bool branch_taken_0x308cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB8u;
        // 0x308cbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cb8) {
            ctx->pc = 0x308CC8u;
            goto label_308cc8;
        }
    }
    ctx->pc = 0x308CC0u;
    // 0x308cc0: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308cc8:
    // 0x308cc8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308ccc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308CCCu;
    {
        const bool branch_taken_0x308ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ccc) {
            ctx->pc = 0x308CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308CCCu;
            // 0x308cd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CF8u;
            goto label_308cf8;
        }
    }
    ctx->pc = 0x308CD4u;
    // 0x308cd4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308cd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308CD8u;
    {
        const bool branch_taken_0x308cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CD8u;
        // 0x308cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cd8) {
            ctx->pc = 0x308CE8u;
            goto label_308ce8;
        }
    }
    ctx->pc = 0x308CE0u;
    // 0x308ce0: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x308ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x308ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308ce8:
    // 0x308ce8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308cec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308CECu;
    {
        const bool branch_taken_0x308cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CECu;
        // 0x308cf0: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cec) {
            ctx->pc = 0x308CFCu;
            goto label_308cfc;
        }
    }
    ctx->pc = 0x308CF4u;
    // 0x308cf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308cf8:
    // 0x308cf8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x308cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_308cfc:
    // 0x308cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308CFCu;
    {
        const bool branch_taken_0x308cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CFCu;
        // 0x308d00: 0x8d234c58  lw          $v1, 0x4C58($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cfc) {
            ctx->pc = 0x308D14u;
            goto label_308d14;
        }
    }
    ctx->pc = 0x308D04u;
    // 0x308d04: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x308d08: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x308d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x308d0c: 0xacc205a0  sw          $v0, 0x5A0($a2)
    ctx->pc = 0x308d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1440), GPR_U32(ctx, 2));
    // 0x308d10: 0x8d234c58  lw          $v1, 0x4C58($t1)
    ctx->pc = 0x308d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19544)));
label_308d14:
    // 0x308d14: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x308d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x308d18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308d1c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308d20: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x308D20u;
    {
        const bool branch_taken_0x308d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308d20) {
            ctx->pc = 0x308D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D20u;
            // 0x308d24: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308c68;
        }
    }
    ctx->pc = 0x308D28u;
    // 0x308d28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x308d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308d2c:
    // 0x308d2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308d30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x308d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308d38: 0x3e00008  jr          $ra
    ctx->pc = 0x308D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D38u;
        // 0x308d3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D40u;
}
